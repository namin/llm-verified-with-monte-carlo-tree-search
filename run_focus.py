from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang_config import LANG
assert LANG=='Coq'
from lang import score_func, can_be_solution, filter_code
from coq import give_context, short_verifier_feedback

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth

import llm

class FocusNode:
    def __init__(self, instructions, context, code, outlog, hint):
        self.instructions = instructions
        self.context = context
        self.code = code
        self.outlog = outlog
        self.hint = hint

    def update(self, text):
        v = filter_code(text+"```").lstrip()
        r = give_context(v)
        (context, outlog) = r
        return FocusNode(self.instructions, context, v, outlog, self.hint)

    def update_hint(self, hint):
        if hint in self.hint:
            return None
        return FocusNode(self.instructions, self.context, self.code, self.outlog, self.hint + '\n\n' + hint)

    def prev_mistakes(self):
        if self.hint:
            return f"""## Previous Mistakes{self.hint}\n\nCan use `Search` to find lemmas.\n"""
        return ""

    def text(self):
        return f"""
<s>[INST] <<SYS>>
You are a Coq programmer that writes functional code and prove properties about it. When you are unsure of which lemmas to use, you use the `Search` function, for example `Search (0 < _).`. You can see the output of the Coq verifier in the Out section, and the context of the current proof, comprising the current goal and assumptions, in the Context section. The assumptions have names that you can use in your proofs.
<</SYS>>

## Instructions
{self.instructions}

## Out
{self.outlog}

## Context
{self.context}

{self.prev_mistakes()}

[/INST]
## Code
```{LANG}
{self.code}"""

prompt_code_index = prompt.index("```")
prompt_instructions = prompt[0:prompt_code_index].strip()
prompt_code = filter_code(prompt[prompt_code_index:]+"```").strip()
montecarlo = MonteCarlo(Node(FocusNode(prompt_instructions, "", prompt_code, "", "")))

def generate_complete(focus, montecarlo):
    text = focus.text()
    text = llm.generate(text, 1)[0]
    score = score_func(text)
    if score is not None:
        if score < 0:
            return (text, score)
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
    if score < 0:
        hint = short_verifier_feedback(node.state.text(), text)
        if not hint or hint in node.state.hint:
            node.update_win_value(-1)
            return
        else:
            score = 0.6
            child = Node(node.state.update_hint(hint))
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
