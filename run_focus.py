from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang_config import LANG
assert LANG=='Coq'
from lang import score_func, can_be_solution, filter_code
from coq import give_context

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth

import llm

class FocusNode:
    def __init__(self, instructions, context, code, outlog):
        self.instructions = instructions
        self.context = context
        self.code = code
        self.outlog = outlog

    def update(self, text):
        v = filter_code(text+"```").lstrip()
        r = give_context(v)
        (context, outlog) = r
        return FocusNode(self.instructions, context, v, outlog)
    
    def text(self):
        return f"""
## Instructions
{self.instructions}

## Out
{self.outlog}

## Context
{self.context}

## Code
```{LANG}
{self.code}"""

prompt_code_index = prompt.index("```")
prompt_instructions = prompt[0:prompt_code_index].strip()
prompt_code = filter_code(prompt[prompt_code_index:]+"```").strip()
montecarlo = MonteCarlo(Node(FocusNode(prompt_instructions, "", prompt_code, "")))

def generate_complete(focus, montecarlo):
    text = focus.text()
    text = llm.generate(text, 1)[0]
    score = score_func(text)
    if score is not None:
        if score < 0:
            return (None, score)
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return (text, score)
    else:
        return (text, 0.3)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    (text, score) = generate_complete(node.state, montecarlo)
    if text is None:
        node.update_win_value(-1)
    else:
        child = Node(node.state.update(text))
        node.add_child(child)
        child.update_win_value(score)
        child.update_policy_value(score)

        child = Node(node.state)
        node.add_child(child)
        child.update_policy_value(0.2)

montecarlo.child_finder = child_finder

montecarlo.simulate(expansion_count)

print('CHOSEN SOLUTION')
print(montecarlo.solution)
