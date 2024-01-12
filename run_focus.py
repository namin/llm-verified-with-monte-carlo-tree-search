from cmdline import args

USE_HAMMER = args.use_hammer
SHOW_MISTAKES = args.show_mistakes
if SHOW_MISTAKES:
    REFLECT = args.reflect
    LIST_MISTAKE_IN_REFLECT = True
else:
    REFLECT = False
INTERACTIVE = args.interactive

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang_config import LANG
assert LANG=='Coq'
from lang import can_be_solution, filter_code
from lang import score_func as uncached_score_func
from coq import give_context, short_verifier_feedback

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_diversity import select_diversely, DIVERSITY, limit, select_diversely_with_scores
from common_interactive import ask_keep, diffprompt
from common_stats import stats
from common_bad_words import bad_words_ids
from common_cache import create_score_predicate, create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)
score_predicate = create_score_predicate()

import llm

if REFLECT:
    import reflection

class FocusNode:
    def __init__(self, instructions, code, hint):
        (context, outlog) = give_context(code)

        self.instructions = instructions
        self.context = context
        self.code = code
        self.outlog = outlog
        self.hint = hint

    def update(self, text):
        code = filter_code(text+"```").lstrip()
        return FocusNode(self.instructions, code, self.hint)

    def update_hint(self, hint):
        return FocusNode(self.instructions, self.code, self.hint+"\n"+hint)

    def prev_hint(self):
        if self.hint:
            return f"## Hints\n{self.hint}\n"
        return ""

    def prev_mistakes(self):
        if REFLECT and reflections:
            if LIST_MISTAKE_IN_REFLECT:
                reflections_text = "\n\n".join([
                    "### Snippet\n" + snippet.replace("```", "") + "\n\n" +
                    "### Reflection\n" + r
                    for (r,(snippet,err)) in zip(reflections,mistakes)
                ])
            else:
                reflections_text = "\n\n".join(reflections)
            return f"""## Reflections from previous attempts
{reflections_text}
"""
        elif SHOW_MISTAKES and mistakes:
            mistakes_text = "\n\n".join([f"Do NOT reproduce this snippet:\n{snippet.replace('```', '')}\nIt is wrong:\n{err}" for snippet,err in mistakes])
            return f"""## Previous Mistakes (NOT TO DO AGAIN)

{mistakes_text}

Don't do the above mistakes, but DO use`Search` to find lemmas, for example: `Search (0 < _).`.
"""
        return ""

    def text(self):
        return f"""
<s>[INST] <<SYS>>
You are a Coq programmer that writes functional code and prove properties about it. When you are unsure of which lemmas to use, you use the `Search` function, for example `Search (0 < _).`. You can see the output of the Coq verifier in the Out section, and the context of the current proof, comprising the current goal and assumptions, in the Context section. The assumptions have names that you can use in your proofs. Do not repeat the previous mistakes.

{'You can use Coq Hammer, including the tactics `hammer` to attempt to discharge a goal automatically.' if USE_HAMMER else ''}

You take a single step and will be given feedback -- listen to the feedback in the instructions.
<</SYS>>

## Instructions
{self.instructions}

## Out
{limit(self.outlog)}

## Context
{limit(self.context)}

{self.prev_mistakes()}
{self.prev_hint()}

[/INST]
## Code

```{LANG}
{self.code}"""

def generate_complete(focus, montecarlo):
    text = focus.text()
    if INTERACTIVE:
        texts = llm.generate(text, 10, bad_words_ids=bad_words_ids)
        inp = ask_keep(text, texts)
        if isinstance(inp, int):
            text = texts[inp]
        else:
            return (None, 0.9, inp)
        score = score_func(text)
    elif DIVERSITY:
        prev = text
        texts, features = llm.generate(text, 5, return_hiddens=True)
        scores = [score_func(text) for text in texts]
        text, score = select_diversely_with_scores(texts, scores, score_predicate, features, montecarlo)
        print(diffprompt(prev, texts))
    else:
        prev = text
        texts = llm.generate(text, 1)
        text = texts[0]
        score = score_func(text)
        print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return (text, score, None)
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return (text, score, None)
    else:
        return (text, 0.3, None)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    (text, score, hint) = generate_complete(node.state, montecarlo)
    if score < 0:
        hint = short_verifier_feedback(node.state.text(), text)
        if hint and hint not in mistakes:
            mistakes.append(hint)
            if REFLECT:
                snippet,err = hint
                code = filter_code(text+"```")
                reflections.append(reflection.reflect(code, snippet, err))
        node.update_win_value(-1)
    else:
        state = node.state.update(text) if hint is None else node.state.update_hint(hint)
        child = Node(state)
        node.add_child(child)
        child.update_win_value(score)
        child.update_policy_value(score)

        child = Node(node.state)
        node.add_child(child)
        child.update_policy_value(0.2)

def main(mins_timeout = None, prompt = prompt):
    global mistakes
    mistakes = []
    global reflections
    reflections = []
    prompt_code_index = prompt.index("```")
    prompt_instructions = prompt[0:prompt_code_index].strip()
    prompt_code = filter_code(prompt[prompt_code_index:]+"```").strip()
    if USE_HAMMER:
        prompt_code = """From Hammer Require Import Tactics.
From Hammer Require Import Hammer.
Require Import Coq.Strings.String.
Require Import Arith.

""" + prompt_code
    montecarlo = MonteCarlo(Node(FocusNode(prompt_instructions, prompt_code, "")), mins_timeout)
    montecarlo.global_features = None
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    print('CHOSEN SOLUTION')
    print(montecarlo.solution)

    stats(montecarlo)
    print('cache stats', cache_stats)

    # return filter_code(montecarlo.solution)
    return cache_stats

if __name__ == '__main__':
    main()
