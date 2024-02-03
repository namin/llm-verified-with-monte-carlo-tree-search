from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution
from lang import score_func as uncached_score_func

from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
from common_interactive import diffprompt

from clover_loader import dfy_annotation_iterator
# from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_stats import stats

import llm

expansion_count = None
min_lines = 5

def check_func(v):
    lines = v.split('\n')  # Split the string into lines
    for line in lines:
        # Strip leading and trailing whitespace and check if it starts with '//'
        if not line.lstrip().startswith('//'):
            return True  # Found a line that doesn't start with '//'
    return False  # All lines start with '//'

def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    prev = text
    texts = llm.generate(text, 1)
    text = texts[0]
    score = score_func(text)
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

def main(mins_timeout = 10):
    num_solved = 0
    count = 0
    for prompt in dfy_annotation_iterator():
        print("----------Count={}---------".format(count))
        montecarlo = MonteCarlo(Node(prompt), mins_timeout)
        montecarlo.child_finder = child_finder

        montecarlo.simulate(expansion_count)

        print("CHOSEN SOLUTION")
        print(montecarlo.solution)

        if montecarlo.solution:
            num_solved += 1

        stats(montecarlo)
        print('the number solved: {}'.format(num_solved))
        print('cache stats', cache_stats)
        # with open("graph.dot", "w") as f:
        #     montecarlo.print_tree(f)
        count += 1

    return cache_stats

if __name__ == "__main__":
    main()
