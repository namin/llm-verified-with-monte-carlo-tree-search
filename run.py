import llm

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution

from prompts import prompt, expansion_count, min_lines, check_fun

montecarlo = MonteCarlo(Node(prompt))

def user_input(text):
    inp = input('Keep it? [Y/n] ')
    keep = not (inp.startswith('n') or inp.startswith('N'))
    if not keep:
        inp = input('Comment: ')
    return None if keep else inp
#user_input = lambda text: None

def generate_complete(text, montecarlo):
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
        return generate_complete(text, montecarlo)

def child_finder(node, montecarlo):
    text = generate_complete(node.state, montecarlo)
    if text is None:
        node.update_win_value(-1)
    else:
        inp = user_input(text)
        if inp is not None:
            if inp == "":
                return
            text = node.state + "\n// " + inp + "\n"
        
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

