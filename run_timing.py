import time

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution

from lang import score_func as uncached_score_func

from common_interactive import diffprompt

from prompts import prompt, min_lines, expansion_count, check_func, check_string, test_dict
from lang import run_tests
if test_dict and run_tests:
    uncached_score_func_before_dict = uncached_score_func
    uncached_score_func = lambda x: uncached_score_func_before_dict(x, test_dict)

ver_count = 0
ver_avg = 0
def timed_uncached_score_func(x):
    global ver_count
    global ver_avg
    import time
    start = time.time()
    result = uncached_score_func(x)
    end = time.time()
    elapsed = (end - start)
    ver_count += 1
    ver_avg += elapsed / llm_count
    return result

from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(timed_uncached_score_func)

from common import limit_depth, max_completion_depth, limit_tokens
from common_stats import stats

import llm
llm_count = 0
llm_avg = 0
def timed_generate(prompt, num, **kwargs):
    global llm_count
    global llm_avg
    import time
    start = time.time()
    result = llm.generate(prompt, num, **kwargs)
    end = time.time()
    elapsed = (end - start)
    llm_count += 1
    llm_avg += elapsed / llm_count
    return result

def print_timing():
    t = "%.2f s (%d)"
    print(("verifier:"+t+", llm:"+t) % (ver_avg, ver_count, llm_avg, llm_count))

import common_wandb

from cmdline import args

node_dups_counter = 0


def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None, current_completion_depth
    prev = text
    texts = timed_generate(text, 1)
    text = texts[0]
    score = score_func(text)
    print(diffprompt(prev, texts))
    print_timing()
    if score is not None:
        if score < 0:
            return None, current_completion_depth
        else:
            if can_be_solution(text, min_lines, check_func, check_string, test_dict):
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
        child = Node(text)
        if node.is_widen_node:
            node.visits += 1
            node.parent.add_child(child)
            # Check siblings for duplicates
            for c in node.parent.children:
                if c.state == text:
                    global node_dups_counter
                    node_dups_counter += 1
                    print("found string-duplicated node:")
                    print(text)
        else:
            node.add_child(child)

        # Update values
        child.update_win_value(1)
        child.update_policy_value(1)

        # Add widen node
        widen = Node(text)
        widen.is_widen_node = True
        child.add_child(widen)
        widen.update_policy_value(args.widen_policy_value)

    common_wandb.log_tree(montecarlo, gen_stat, node)

    # Check on token limit after this generation
    if limit_tokens():
        if montecarlo.solution is None:
            montecarlo.solution = "Token limit reached"
        print("Token limit reached, no solution found")


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

    common_wandb.compute_summary(montecarlo, node_dups_counter, init_time, ver_avg, ver_count, llm_avg, llm_count)

    print("CHOSEN SOLUTION")
    print(montecarlo.solution)

    stats(montecarlo)
    print("cache stats", cache_stats)

    print_timing()
    
    return cache_stats


if __name__ == "__main__":
    main()
