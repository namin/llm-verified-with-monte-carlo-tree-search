import ppo
import torch

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution, find_largest_new_block

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth

from cmdline import args

n_iter = args.n_iter
# n_iter = 10


class GenNode:
    def __init__(self, text, gens):
        self.text = text
        self.gens = gens


def reinforce(gens, reward):
    rewards = [torch.tensor(reward)]
    for query_tensors, response_tensors in gens:
        ppo.trainer_step(query_tensors, response_tensors, rewards)


def generate_complete(old_text, montecarlo, gens, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    (text, gen) = ppo.generate(old_text)
    score = score_func(text)
    if score is None or score < 0:
        code = find_largest_new_block(old_text, text)
        print("Found code block:", code)
        if code is not None:
            text = text[0 : text.index("```")] + "```\n" + code  # hack
            score = 1.0
            # fallthrough
        else:
            if score is None:
                gens.append(gen)
                return generate_complete(
                    text, montecarlo, gens, current_completion_depth + 1
                )
            else:
                reinforce([gen], score)
                return None
    else:
        gens.append(gen)
    reinforce(gens, score)
    node = Node(GenNode(text, gens))
    if can_be_solution(text, min_lines, check_func):
        montecarlo.solution = node
    return node


def child_finder(node, montecarlo):
    if limit_depth(node, lambda state: state.text):
        return

    child = generate_complete(node.state.text, montecarlo, [])
    if child is None:
        node.update_win_value(-1)
    else:
        node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        retry_child = Node(GenNode(node.state.text, []))
        node.add_child(retry_child)
        retry_child.update_policy_value(0.2)


def main_iter():
    montecarlo = MonteCarlo(Node(GenNode(prompt, [])))
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    if montecarlo.solution:
        print("CHOSEN SOLUTION")
        print(montecarlo.solution.state.text)

        node = montecarlo.solution
        while node:
            reinforce(node.state.gens, 10.0)
            node = node.parent

    ppo.save()


def main():
    for i in range(0, n_iter):
        print("ITERATION", i)
        main_iter()


if __name__ == "__main__":
    main()
