import torch

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution

from prompts import prompt, sanity_check, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth

import llm

from cmdline import args

# n_success_goal = 1
n_success_goal = args.n_success_goal

def generate_complete(text, montecarlo, gens, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    text = llm.generate(text, 1)[0]
    score = score_func(text)
    if score is not None:
        if score < 0:
            return None
        else:
            node = Node(text)
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = node
            return node
    else:
        return generate_complete(text, montecarlo, gens, current_completion_depth + 1)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    child = generate_complete(node.state, montecarlo, [])
    if child is None:
        node.update_win_value(-1)
    else:
        node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        retry_child = Node(node.state)
        node.add_child(retry_child)
        retry_child.update_policy_value(0.2)


def main_iter(prompt, pending):
    montecarlo = MonteCarlo(Node(prompt))
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    assert montecarlo.solution
    if montecarlo.solution:
        text = montecarlo.solution.state

        print("CHOSEN SOLUTION")
        print(text)

        if pending:
            check_code = pending[0]
            pending = pending[1:]
            score = score_func(text+"\n\n"+check_code)
        else:
            score = 1.0
        if score is not None:
            if score > 0:
                return True, text, pending

    return False, text, pending


if __name__ == "__main__":
    from common_check import main
    main(main_iter, n_success_goal)
