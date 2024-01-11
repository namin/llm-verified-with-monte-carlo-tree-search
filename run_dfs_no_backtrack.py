from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
from common_interactive import diffprompt

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_stats import stats

import llm

solution = None

def generate_complete(text, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    prev = text
    texts = llm.generate(text, 1)
    text = texts[0]
    score = score_func(text)
    print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return (text, score)
        else:
            if can_be_solution(text, min_lines, check_func):
                solution = text
            return (text, score)
    else:
        return generate_complete(text, current_completion_depth + 1)

def main(mins_timeout = None):
    text = prompt
    while solution is None:
        (next_text, score) = generate_complete(text)
        if score > 0:
            text = next_text
        else:
            pass

    print('CHOSEN SOLUTION')
    print(solution)
    print('cache stats', cache_stats)

    return cache_stats

if __name__ == "__main__":
    main()
