from cmdline import args

GREEDY = args.greedy

# GREEDY = True

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func
score_func, cache_stats = create_cached_func(uncached_score_func)

from prompts import prompt, min_lines, check_func

import llm

score_stats = {'positive': 0, 'negative': 0, 'unknown': 0}
solution_stats = {'yes': 0, 'no': 0}
solutions = []

def attempt():
    if GREEDY:
        text = llm.generate_full(prompt)
    else:
        text = llm.generate_full(prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8)
    score = score_func(text)
    score_key = "unknown" if score is None else "positive" if score > 0 else "negative"
    score_stats[score_key] += 1
    solution_key = 'yes' if score is not None and score > 0 and can_be_solution(text, min_lines, check_func) else 'no'
    solution_stats[solution_key] += 1
    if solution_key == 'yes':
        solutions.append(text)

def main():
    for i in range(0, 1 if GREEDY else 10):
        attempt()
    for solution in solutions:
        print("ONE SOLUTION")
        print(solution)
    print(score_stats)
    print(solution_stats)

if __name__ == '__main__':
    main()
