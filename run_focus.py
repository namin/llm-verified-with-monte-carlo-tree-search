from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang_config import LANG
assert LANG=='Coq'
from lang import score_func, can_be_solution, filter_code
from coq import give_context, short_verifier_feedback

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_diversity import select_diversely

import llm

SHOW_MISTAKES = False

mistakes = []

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

    def prev_mistakes(self):
        if SHOW_MISTAKES and mistakes:
            mistakes_text = "\n\n".join([f"Do NOT reproduce this snippet:\n{snippet}\nIt is wrong:\n{err}" for snippet,err in mistakes])
            return f"""## Previous Mistakes (NOT TO DO AGAIN)

{mistakes_text}

Don't do the above mistakes, but DO use`Search` to find lemmas, for example: `Search (0 < _).`.
"""
        return ""

    def text(self):
        return f"""
<s>[INST] <<SYS>>
You are a Coq programmer that writes functional code and prove properties about it. When you are unsure of which lemmas to use, you use the `Search` function, for example `Search (0 < _).`. You can see the output of the Coq verifier in the Out section, and the context of the current proof, comprising the current goal and assumptions, in the Context section. The assumptions have names that you can use in your proofs. Do not repeat the previous mistakes.
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
montecarlo.global_features = None

def generate_complete(focus, montecarlo):
    text = focus.text()
    prev = text
    text, features = llm.generate(text, 5, return_hiddens=True)
    print([t[len(prev):] for t in text])
    text = select_diversely(text, features, montecarlo)
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
        if hint and hint not in mistakes:
            mistakes.append(hint)
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
