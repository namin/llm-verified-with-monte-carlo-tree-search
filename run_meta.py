DIVERSITY = True

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

import re

from lang_config import LANG
assert LANG=='Coq'
from lang import can_be_solution, filter_code
from coq import score_func_code, give_context, extract_lemma

from prompts import prompt, expansion_count, min_lines, check_func, cheat_marker
from common import limit_depth, max_completion_depth
from common_diversity import select_diversely
from common_interactive import ask_keep
from common_stats import stats

from transformers import AutoTokenizer
from model_config import BASE_MODEL_NAME

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

    def update_lemma(self, goal, err, code):
        print('code is', code)
        print('err is', err)
        print('goal is', goal)
        return FocusNode(self.instructions, self.code, self.stack, self.lemma_counter+1)
    
    def text(self):
        return f"""
<s>[INST] <<SYS>>
You are a Coq programmer that writes functional code and prove properties about it. When you are unsure of which lemmas to use, you use the `Search` function, for example `Search (0 < _).`. You can see the output of the Coq verifier in the Out section, and the context of the current proof, comprising the current goal and assumptions, in the Context section. The assumptions have names that you can use in your proofs.

You can use Coq Hammer, including the tactics `sauto` and `hammer` to attempt to discharge a goal automatically.

You take a single step and will be given feedback -- listen to the feedback in the instructions.
<</SYS>>

## Instructions
{self.instructions}

## Out
{self.outlog}

## Context
{self.context}

[/INST]
## Code

```{LANG}
{self.code}"""

# from https://huggingface.co/docs/transformers/internal/generation_utils#transformers.NoBadWordsLogitsProcessor.example

tokenizer_with_prefix_space = AutoTokenizer.from_pretrained(BASE_MODEL_NAME, add_prefix_space=True)

def get_tokens_as_list(word_list):
    "Converts a sequence of words into a list of tokens"
    tokens_list = []
    for word in word_list:
        tokenized_word = tokenizer_with_prefix_space([word], add_special_tokens=False).input_ids[0]
        tokens_list.append(tokenized_word)
    return tokens_list

def get_bad_words_ids():
    return get_tokens_as_list([cheat_marker])

bad_words_ids = get_bad_words_ids()

def generate_complete(focus, montecarlo):
    text = focus.text()
    if DIVERSITY:
        prev = text
        text, features = llm.generate(text, 5, return_hiddens=True, bad_words_ids=bad_words_ids)
        print([t[len(prev):] for t in text])
        text = select_diversely(text, features, montecarlo)
    else:
        text = llm.generate(text, 1, bad_words_ids=bad_words_ids)[0]
    score, code = score_func_code(text)
    if score is not None:
        if score < 0:
            return (text, score, code)
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return (text, score, code)
    else:
        return (text, 0.3, code)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    (text, score, code) = generate_complete(node.state, montecarlo)
    if score < 0:
        print('code is', code)
        code = code[:code.rindex('.')]
        last_cmd_index = list(re.finditer(r"\+|\-|\.", code))[-1].start(0)
        code = code[:last_cmd_index+1]
        print('doctored code is', code)
        goal, err = extract_lemma(code)
        if goal is not None:
            node.state.update_lemma(goal, err, code)
            node.update_win_value(-1)
            return
        else:
            node.update_win_value(-1)
            return
    else:
        state = node.state.update(text)
    
    child = Node(state)
    node.add_child(child)
    child.update_win_value(score)
    child.update_policy_value(score)

    child = Node(node.state)
    node.add_child(child)
    child.update_policy_value(0.2)

def run(prompt = prompt):
    prompt_code_index = prompt.index("```")
    prompt_instructions = prompt[0:prompt_code_index].strip()
    prompt_code = filter_code(prompt[prompt_code_index:]+"```").strip()
    prompt_code = """From Hammer Require Import Tactics.
From Hammer Require Import Hammer.
Require Import Coq.Strings.String.
Require Import Arith.
""" + prompt_code
    montecarlo = MonteCarlo(Node(FocusNode(prompt_instructions, prompt_code, [], 0)))
    montecarlo.global_features = None
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    print('CHOSEN SOLUTION')
    print(montecarlo.solution)

    stats(montecarlo)

    return filter_code(montecarlo.solution)

if __name__ == '__main__':
    run()
