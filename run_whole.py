from cmdline import args

import time

GREEDY = args.greedy
N_SAMPLES = args.n_samples
MAX_N_SAMPLES = args.max_n_samples

from lang import can_be_solution_whole
from lang import score_func_whole as uncached_score_func

from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)

from prompts import prompt, min_lines, check_func

import llm

score_stats = {'positive': 0, 'negative': 0, 'unknown': 0}
solution_stats = {'yes': 0, 'no': 0}
solutions = []

def attempt(prompt = prompt):
    if GREEDY:
        text = llm.generate_full(prompt)
    else:
        text = llm.generate_full(prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8)
    score = score_func(text)
    score_key = "unknown" if score is None else "positive" if score > 0 else "negative"
    score_stats[score_key] += 1
    solution_key = 'yes' if score is not None and score > 0 and can_be_solution_whole(text, min_lines, check_func) else 'no'
    solution_stats[solution_key] += 1
    if solution_key == 'yes':
        solutions.append(text)
        return text
    return None

def main(mins_timeout = None, prompt = prompt):
    if MAX_N_SAMPLES is not None:
        assert not GREEDY
        n_calls = 0
        solution = None
        while solution is None and n_calls < MAX_N_SAMPLES:
            n_calls += 1
            solution = attempt(prompt = prompt)
        if solution:
            print("SOLUTION FOUND")
            print(solution)
        else:
            print("SOLUTION is None")
        return {"n_calls": n_calls}
    elif mins_timeout is None:
        for i in range(0, 1 if GREEDY else N_SAMPLES):
            attempt(prompt = prompt)
        for solution in solutions:
            print("ONE SOLUTION")
            print(solution)
        print(score_stats)
        print(solution_stats)
        return solution_stats
    else:
        # make mins_timeout the stronger parameter
        start_time = time.time()  # Save the start time when the loop begins
        timeout = mins_timeout * 60  # Convert minutes to seconds
        while (time.time() - start_time) < timeout:
            sol = attempt(prompt = prompt)
            if sol:
                return solution_stats
        return solution_stats

if __name__ == '__main__':
    main()
