from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func

score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
from common_interactive import diffprompt

from prompts import prompt, min_lines, expansion_count, check_func
from common import limit_depth, max_completion_depth, count_depth
from common_stats import stats

import llm

import time

import common_wandb

from cmdline import args

node_dups_counter = 0

def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None, current_completion_depth
    prev = text
    texts = llm.generate(text, 1)
    text = texts[0]
    score = score_func(text)
    print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return None, current_completion_depth
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return text, current_completion_depth
    else:
        return generate_complete(text, montecarlo, current_completion_depth + 1)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    pre_gen_time = time.time()
    pre_gen_toks = llm.token_counter
    
    text, depth = generate_complete(node.state, montecarlo)

    gen_stat = common_wandb.compute_gen_stat(pre_gen_time, pre_gen_toks, text, depth)

    if text is None:
        node.update_win_value(-1)
    else:
        if node.is_widen_node:
            node.visits += 1
            node = node.parent

        for c in node.children:
            if c.state == text:
                global node_dups_counter
                node_dups_counter += 1
                print("found string-duplicated node:")
                print(text)

        child = Node(text)
        node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        widen = Node(text)
        widen.is_widen_node = True
        child.add_child(widen)
        widen.update_policy_value(0.2)

    common_wandb.log_tree(montecarlo, gen_stat, node)


def main(mins_timeout=None, prompt=prompt):
    init_time = time.time()
    montecarlo = MonteCarlo(Node(prompt), mins_timeout)
    # Add widen node to root
    widen = Node(prompt)
    widen.is_widen_node = True
    montecarlo.root_node.add_child(widen)
    widen.update_policy_value(args.widen_policy_value)
    # Update child finder
    montecarlo.child_finder = child_finder

    # Run search
    montecarlo.simulate(expansion_count)

    common_wandb.compute_summary(montecarlo, node_dups_counter, init_time)
    
    print("CHOSEN SOLUTION")
    print(montecarlo.solution)

    stats(montecarlo)
    print("cache stats", cache_stats)
    # with open("graph.dot", "w") as f:
    #    montecarlo.print_tree(f)

    llm.final_report()

    return cache_stats


if __name__ == "__main__":
    main()
