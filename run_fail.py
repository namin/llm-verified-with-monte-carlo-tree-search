import llm

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution, verifier_feedback

from prompts import prompt, expansion_count, min_lines, check_fun
from common import limit_depth, max_completion_depth

from dafny import filterDafny as filterCode
from dafny import verifier_hint

montecarlo = MonteCarlo(Node(prompt))

failures = []

def show(failures):
    msg = ""
    for (text, hint) in failures:
        code = filterCode(text+"```").strip()
        if code:
            msg += "Do NOT do:\n"
            msg += code
            if hint:
                msg += "\nbecause\n"
                msg += hint
            msg += "\n"
    if msg:
        msg = "/*\nPlease don't make the following mistakes.\n"+msg+"\n*/\n"
    return msg

def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    show_failures = show(failures)
    print(show_failures)
    text = llm.generate(show_failures+text, 1)[0]
    text = text[len(show_failures):]
    score = score_func(text)
    if score is not None:
        if score > 0 and can_be_solution(text, min_lines, check_fun):
            montecarlo.solution = text
        return (text, score)
    else:
        return generate_complete(text, montecarlo, current_completion_depth + 1)

def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    (text, score) = generate_complete(node.state, montecarlo)
    if score < 0:
        hint = verifier_hint(text)
        failures.append((text, hint))
        node.update_win_value(-1)
        return

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
