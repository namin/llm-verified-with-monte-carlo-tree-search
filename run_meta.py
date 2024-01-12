from cmdline import args

USE_HAMMER = args.use_hammer
EXTRACT_LEMMA_DEPTH = args.extract_lemma_depth
EXPLORE_MANY = args.explore_many

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

import re

from lang_config import LANG
assert LANG=='Coq'
from lang import can_be_solution, filter_code
from coq import give_context, extract_lemma, lemma_statement, lemma_args, new_conclusion
from coq import score_func_code as uncached_score_func_code
from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth
from common_cache import score_first, create_score_predicate, create_cached_func
score_func_code, cache_stats, reset_cache = create_cached_func(uncached_score_func_code)
score_predicate = create_score_predicate(score_first)
from common_diversity import select_diversely_with_scores, DIVERSITY, limit
from common_interactive import ask_keep, diffprompt
from common_stats import stats
from common_bad_words import bad_words_ids

import llm

class FocusNode:
    def __init__(self, instructions, code, stack, lemma_counter):
        (context, outlog) = give_context(code)

        self.instructions = instructions
        self.context = context
        self.code = code
        self.outlog = outlog
        self.stack = stack
        self.lemma_counter = lemma_counter

    def update(self, text):
        code = filter_code(text+"```").lstrip()
        return FocusNode(self.instructions, code, self.stack, self.lemma_counter)

    def update_lemma(self, goal, code):
        name = self.lemma_name(self.lemma_counter)
        statement = lemma_statement(goal)
        args = lemma_args(goal)
        last_lemma_index = list(re.finditer(r"Lemma|Theorem", code))[-1].start(0)
        last_lemma = code[last_lemma_index:]
        code = code[:last_lemma_index]
        last_lemma += f" apply (@{name} {args}).\n"
        stack = [last_lemma] + self.stack
        code += "\n"
        code += f"Lemma {name}: {statement}.\nProof.\n"
        if USE_HAMMER:
            code += "(* do not use induction, try using hammer *)\n"
        print(f'Created Lemma {name}.')
        return FocusNode(self.instructions, code, stack, self.lemma_counter+1)

    def update_pop(self, text):
        code = filter_code(text+"```").lstrip()
        last_lemma = self.stack[0]
        stack = self.stack[1:]
        code += "\n\n"
        code += last_lemma
        return FocusNode(self.instructions, code, stack, self.lemma_counter)
                         
    def lemma_name(self, counter):
        return "helper"+str(counter)

    def text(self):
        return f"""
<s>[INST] <<SYS>>
You are a Coq programmer that writes functional code and prove properties about it. When you are unsure of which lemmas to use, you use the `Search` function, for example `Search (0 < _).`. You can see the output of the Coq verifier in the Out section, and the context of the current proof, comprising the current goal and assumptions, in the Context section. The assumptions have names that you can use in your proofs.

{'''You can use Coq Hammer, including the tactic `hammer` to attempt to discharge a goal automatically.
To use Coq Hammer effectively, combine it with destruct using `;`: `destruct e1; destruct e2; hammer`.''' if USE_HAMMER else ''}

You take a single step and will be given feedback -- listen to the feedback in the instructions.
<</SYS>>

## Instructions
{self.instructions}

## Out
{limit(self.outlog)}

## Context
{limit(self.context)}

[/INST]
## Code

```{LANG}
{self.code}"""

def generate_complete(focus, montecarlo):
    text = focus.text()
    prev = text
    if DIVERSITY:
        texts, features = llm.generate(text, 5, return_hiddens=True, bad_words_ids=bad_words_ids)
        scores = [score_func_code(text) for text in texts]
        text, (score, code) = select_diversely_with_scores(texts, scores, score_predicate, features, montecarlo)
    elif EXPLORE_MANY:
        texts = llm.generate(text, 5, bad_words_ids=bad_words_ids)
        idx = 0
        for i in range(len(texts)):
            if score_predicate(score_func_code(texts[i])):
                idx = i
                break
        text = texts[idx]
        score, code = score_func_code(text)
    else:
        texts = llm.generate(text, 1, bad_words_ids=bad_words_ids)
        text = texts[0]
        score, code = score_func_code(text)
    print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return (text, score, code)
        else:
            if focus.stack == []:
                if can_be_solution(text, min_lines, check_func):
                    montecarlo.solution = text
                if can_be_solution(text+"```", min_lines, check_func):
                    text = text+"```"
                    montecarlo.solution = text
            return (text, score, code)
    else:
        return (text, 0.3, code)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    (text, score, code) = generate_complete(node.state, montecarlo)
    if score < 0:
        if len(node.state.stack) < EXTRACT_LEMMA_DEPTH:
            try:
                code = code[:code.rindex('.')]
            except ValueError:
                pass
            last_cmd_index = list(re.finditer(r"\+|((?![^<])\-)|\.|((?![^(])\*(?![^)]))", code))[-1].start(0)
            code = code[:last_cmd_index+1]
            print('<CODE>', code)
            print('</CODE>')
            goal, err = extract_lemma(code+" simpl.")
            if err:
                print('err', err)
        else:
            goal = None
        if goal is not None and not err and new_conclusion(goal, code):
            state = node.state.update_lemma(goal, code)
            score = 0.5
        else:
            node.update_win_value(-1)
            return
    else:
        if text.rstrip().endswith("Qed.") and node.state.stack != []:
            state = node.state.update_pop(text)
        else:
            state = node.state.update(text)
    
    child = Node(state)
    node.add_child(child)
    child.update_win_value(score)
    child.update_policy_value(score)

    child = Node(node.state)
    node.add_child(child)
    child.update_policy_value(0.2)

def main(mins_timeout = None, prompt = prompt):
    prompt_code_index = prompt.index("```")
    prompt_instructions = prompt[0:prompt_code_index].strip()
    prompt_code = filter_code(prompt[prompt_code_index:]+"```").strip()
    if USE_HAMMER:
        prompt_code = """From Hammer Require Import Tactics.
From Hammer Require Import Hammer.

From Coq Require Import Arith.Arith.
Require Import Coq.Strings.String.

""" + prompt_code
    else:
        prompt_code = """From Coq Require Import Arith.Arith.
Require Import Lia.
""" + prompt_code
    montecarlo = MonteCarlo(Node(FocusNode(prompt_instructions, prompt_code, [], 0)), mins_timeout)
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
