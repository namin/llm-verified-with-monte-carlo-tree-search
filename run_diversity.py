import torch
import llm

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func as uncached_score_func
from lang import can_be_solution

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_diversity import select_diversely_with_scores
from common_interactive import diffprompt
from common_stats import stats
from common_cache import create_score_predicate, create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
score_predicate = create_score_predicate()

calls_to_generate = 0
def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    global calls_to_generate
    calls_to_generate += 1
    
    prev = text
    texts, features = llm.generate(text, 5, return_hiddens=True)
    scores = [score_func(text) for text in texts]
    text, score = select_diversely_with_scores(texts, scores, score_predicate, features, montecarlo)
    print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return None
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return text
    else:
        return generate_complete(text, montecarlo, current_completion_depth + 1)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    text = generate_complete(node.state, montecarlo)
    if text is None:
        node.update_win_value(-1)
    else:
        child = Node(text)
        node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        child = Node(node.state)
        node.add_child(child)
        child.update_policy_value(0.2)

def main(mins_timeout = None):
    global calls_to_generate
    calls_to_generate = 0
    montecarlo = MonteCarlo(Node(prompt), mins_timeout)
    montecarlo.global_features = None
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    print("CHOSEN SOLUTION")
    print(montecarlo.solution)

    stats(montecarlo)
    print('cache stats', cache_stats)
    print('calls to generate', calls_to_generate)

    return cache_stats

if __name__ == "__main__":
    main()
