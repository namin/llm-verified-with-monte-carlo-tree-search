from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func

score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
from common_interactive import diffprompt

from prompts import prompt, min_lines, expansion_count, check_func
from common import limit_depth, max_completion_depth
from common_stats import stats

import llm

import time
from cmdline import args
import wandb

node_dups_counter = 0

if args.use_wandb:
    wandb.init(
        entity=args.wandb_entity,
        project=args.wandb_project,
        group=args.wandb_group,
        config=args.dict(),
        name=args.wandb_name,
    )


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

    if args.use_wandb:
        # Compute stats about generate_complete
        child_stats = {}
        child_stats["child/gen_time"] = time.time() - pre_gen_time
        child_stats["child/gen_length"] = llm.token_counter - pre_gen_toks
        child_stats["child/score_sign"] = 2 * int(text is not None) - 1
        child_stats["child/completion_depth"] = depth
        wandb.log(child_stats)

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


def main(mins_timeout=None, prompt=prompt):
    init_time = time.time()
    montecarlo = MonteCarlo(Node(prompt), mins_timeout)
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    # Compute summary stats
    if args.use_wandb:
        stat = {}
        stat["time"] = time.time() - init_time
        stat["solution"] = int(montecarlo.solution is not None)
        stat["text"] = montecarlo.solution
        stat["n_tokens"] = llm.token_counter
        stat["node_dups"] = node_dups_counter

        widths = montecarlo.get_widths()
        stat["width"] = max(widths)
        stat["depth"] = len(widths)
        stat["total_nodes"] = sum(widths)
        stat["widths"] = widths

        child_counts = montecarlo.get_child_counts()
        stat["mean_child_count"] = sum(child_counts) / len(child_counts)
        stat["max_child_count"] = max(child_counts)
        stat["leaf_node_count"] = len([1 for c in child_counts if c == 0])

        values, visits = montecarlo.get_values_and_visits()
        stat["mean_value"] = sum(values) / len(values)
        stat["max_value"] = max(values)
        stat["min_value"] = min(values)
        stat["mean_visits"] = sum(visits) / len(visits)
        stat["max_visits"] = max(visits)

        wandb.log(stat)

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
