import llm

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution

from prompts import prompt, expansion_count, min_lines, check_fun
from common import limit_depth, max_completion_depth

montecarlo = MonteCarlo(Node(prompt))

def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    text = llm.generate(text, 1)[0]
    score = score_func(text)
    if score is not None:
        if score < 0:
            return None
        else:
            if can_be_solution(text, min_lines, check_fun):
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

montecarlo.child_finder = child_finder

montecarlo.simulate(expansion_count)

print('CHOSEN SOLUTION')
print(montecarlo.solution)
