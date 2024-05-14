from cmdline import args

import time

GREEDY = args.greedy
N_SAMPLES = args.n_samples
MAX_N_SAMPLES = args.max_n_samples

from lang import can_be_solution_whole
from lang import score_func_whole as uncached_score_func

from common_cache import create_cached_func

score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)

from prompts import prompt, min_lines, check_func, check_string

import llm

import wandb

if args.use_wandb:
    wandb.init(
        entity=args.wandb_entity,
        project=args.wandb_project,
        group=args.wandb_group,
        config=args.dict(),
        name=args.wandb_name,
    )


def attempt(prompt=prompt, attempt_id=0):
    attempt_stats = {"attempt_id": attempt_id}
    init_n_tokens = llm.token_counter
    init_time = time.time()
    text = llm.generate_full(prompt)
    # Args are handled inside of llm.py
    # if GREEDY:
    #     text = llm.generate_full(prompt)
    # else:
    #     text = llm.generate_full(
    #         prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8
    #     )
    score = score_func(text)
    is_solution = (
        score is not None
        and score > 0
        and can_be_solution_whole(text, min_lines, check_func, check_string)
    )
    score_sign = 0 if score is None else (1 if score > 0 else -1)
    attempt_stats["time"] = time.time() - init_time
    attempt_stats["text"] = text
    attempt_stats["is_solution"] = 1 if is_solution else 0
    attempt_stats["score_sign"] = score_sign
    attempt_stats["n_tokens"] = llm.token_counter - init_n_tokens
    return attempt_stats


def summary(all_stats):
    n_solutions = sum(stats["is_solution"] for stats in all_stats)
    n_positive = sum(stats["score_sign"] > 0 for stats in all_stats)
    n_negative = sum(stats["score_sign"] < 0 for stats in all_stats)
    n_zero = sum(stats["score_sign"] == 0 for stats in all_stats)
    n_tokens = sum(stats["n_tokens"] for stats in all_stats)
    total_time = sum(stats["time"] for stats in all_stats)
    print(
        {
            "n_attempts": len(all_stats),
            "n_solutions": n_solutions,
            "n_positive": n_positive,
            "n_negative": n_negative,
            "n_zero": n_zero,
            "n_tokens": n_tokens,
            "total_time": total_time,
        }
    )


def main(mins_timeout=None, prompt=prompt):
    all_stats = []
    if MAX_N_SAMPLES is not None:
        assert not GREEDY
        solution = False
        n_calls = 0
        while not solution and n_calls < MAX_N_SAMPLES:
            stats = attempt(prompt=prompt, attempt_id=n_calls)
            all_stats.append(stats)
            solution = stats["is_solution"]
            n_calls += 1
        if stats["is_solution"]:
            print("SOLUTION FOUND")
            print(stats["text"])
        else:
            print("SOLUTION is None")

    elif mins_timeout is None:
        for i in range(0, 1 if GREEDY else N_SAMPLES):
            stats = attempt(prompt=prompt, attempt_id=i)
            all_stats.append(stats)
            if args.use_wandb:
                wandb.log(stats)
        for stats in all_stats:
            if stats["is_solution"]:
                solution = stats["text"]
                print("ONE SOLUTION")
                print(solution)
    else:
        # make mins_timeout the stronger parameter
        start_time = time.time()  # Save the start time when the loop begins
        timeout = mins_timeout * 60  # Convert minutes to seconds
        i = 0
        while (time.time() - start_time) < timeout:
            stats = attempt(prompt=prompt, attempt_id=i)
            i += 1
            all_stats.append(stats)
            if args.use_wandb:
                wandb.log(stats)
            if stats["is_solution"]:
                break

    summary(all_stats)
    return all_stats


if __name__ == "__main__":
    main()
