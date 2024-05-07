from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func

score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
from common_interactive import diffprompt

from prompts import prompt, min_lines, expansion_count, check_func
from common import limit_depth, limit_tokens
from common_stats import stats

import llm

import time

import common_wandb

from cmdline import args

if args.use_wandb:
    import wandb

node_dups_counter = 0

# TODO: add this to args
n_children = 3


def generate_rollout(text, montecarlo):
    pre_gen_time = time.time()
    pre_gen_toks = llm.token_counter

    text = llm.generate_full(text)
    score = score_func(text)
    if score is not None:
        if score >= 0 and can_be_solution(text, min_lines, check_func):
            montecarlo.solution = text
    else:
        score = -1  # Note: we can only score -1 or find a successful solution

    gen_stat = common_wandb.compute_gen_stat(pre_gen_time, pre_gen_toks, text, 0)
    if args.use_wandb:
        gen_stat = {f"rollout/{k}": v for k, v in gen_stat.items()}
        wandb.log(gen_stat)
    return score


def generate_complete(text, montecarlo, current_completion_depth=1):
    prev = text
    texts = []
    for _ in range(n_children):  # Generate a fixed number of children
        child = llm.generate(prev, 1)[0]
        texts.append(child)
        score = score_func(child)
        print(diffprompt(prev, [child]))
        if score is not None:
            if score >= 0 and can_be_solution(child, min_lines, check_func):
                montecarlo.solution = child
                break
    return texts, 1


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    pre_gen_time = time.time()
    pre_gen_toks = llm.token_counter

    texts, depth = generate_complete(node.state, montecarlo)

    gen_stat = common_wandb.compute_gen_stat(
        pre_gen_time, pre_gen_toks, texts[0], depth
    )  # Note: only using one text for logging

    for text in texts:
        child = Node(text)
        node.add_child(child)
        child.update_policy_value(1)

    # Update value from rollout of one child (just choose first one by default)
    child = node.children[0]
    value = generate_rollout(child.state, montecarlo)
    child.update_win_value(value)

    common_wandb.log_tree(montecarlo, gen_stat, node)

    # Check on token limit after this generation
    if limit_tokens():
        if montecarlo.solution is None:
            montecarlo.solution = "Token limit reached"
        print("Token limit reached, no solution found")


def main(mins_timeout=None, prompt=prompt):
    init_time = time.time()
    montecarlo = MonteCarlo(Node(prompt), mins_timeout)
    # Update child finder
    montecarlo.child_finder = child_finder

    # Run search
    montecarlo.simulate(expansion_count)

    common_wandb.compute_summary(montecarlo, node_dups_counter, init_time)

    print("CHOSEN SOLUTION")
    print(montecarlo.solution)

    stats(montecarlo)
    print("cache stats", cache_stats)

    return cache_stats


if __name__ == "__main__":
    main()
