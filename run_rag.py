from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import can_be_solution, filter_code

from lang import score_func as uncached_score_func
from lang import short_verifier_feedback

from common_interactive import diffprompt

from prompts import prompt, min_lines, expansion_count, check_func, check_string, test_dict
from lang import run_tests
if test_dict and run_tests:
    uncached_score_func_before_dict = uncached_score_func
    uncached_score_func = lambda x: uncached_score_func_before_dict(x, test_dict)
from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)

from common import limit_depth, max_completion_depth, limit_tokens
from common_stats import stats

import llm

import time

import common_wandb

from cmdline import args

node_dups_counter = 0
# RAG modified def main
from call_rag import augment
from llama_index.core import StorageContext, load_index_from_storage
from settings_rag import settings_embed

def load_storage():
    # embed model
    settings_embed()
    # rebuild storage context
    storage_context = StorageContext.from_defaults(persist_dir="./storage")
    # load index
    index = load_index_from_storage(storage_context)
    return index


class FocusNode:
    def __init__(self, instructions, code, hint):
        clean_instructions = instructions.replace('```dafny', "")
        self.instructions = clean_instructions
        self.code = code
        self.hint = hint

    def update(self, text):
        code = text.strip()
        return FocusNode(self.instructions, code, self.hint)

    def update_hint(self, hint):
        return FocusNode(self.instructions, self.code, hint)

    # changing here
    def text(self):
        self.instructions = self.instructions.replace("```", "")
        self.hint = self.hint.replace("```", "")
        return f"""
{self.hint}
{self.instructions}
```dafny
{self.code}"""


def generate_complete(focus, montecarlo, current_completion_depth = 1):
    if current_completion_depth >= max_completion_depth:
        return None, current_completion_depth
    
    text = focus.text()
    prev = text
    texts = llm.generate(text, 1)
    text = texts[0]
    score = score_func(text)
 
    print(len(texts))
    print(diffprompt(prev, texts))
    if score is not None:
        if score < 0:
            return None, current_completion_depth
        else:
            if can_be_solution(text, min_lines, check_func, check_string, test_dict):
                montecarlo.solution = text
            return text, current_completion_depth
    else:
        return generate_complete(focus.update_hint(""), montecarlo, current_completion_depth + 1)

def child_finder(node, montecarlo):
    if limit_depth(Node(node.state.text())):
        return

    pre_gen_time = time.time()
    pre_gen_toks = llm.token_counter

    text, depth = generate_complete(node.state, montecarlo) 

    index = load_storage()
    hint = augment(index, node.state.instructions, node.state.code)
    gen_stat = common_wandb.compute_gen_stat(pre_gen_time, pre_gen_toks, text, depth)

    if text is None:
        node.update_win_value(-1)
    else:
        parts = text.split("```dafny", 1)
        code = parts[1] if len(parts) > 1 else ""
        clean_code = code.replace("```", "")
        updated_code = node.state.update(clean_code)
        updated_code_hint = updated_code.update_hint(hint)
        child = Node(updated_code_hint)
        if node.is_widen_node:
            node.visits += 1
            node.parent.add_child(child)
            for c in node.parent.children:
                if c.state == text:
                    global node_dups_counter
                    node_dups_counter += 1
                    print("found string-duplicated node:")
                    print(text)

        else:
            node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        # Add widen node
        widen = Node(updated_code)
        widen.is_widen_node = True
        child.add_child(widen)
        widen.update_policy_value(args.widen_policy_value)

    common_wandb.log_tree(montecarlo, gen_stat, node)

    # Check on token limit after this generation
    if limit_tokens():
        if montecarlo.solution is None:
            montecarlo.solution = "Token limit reached"
        print("Token limit reached, no solution found")

def main(mins_timeout = None, prompt = prompt):
    montecarlo = MonteCarlo(Node(FocusNode(prompt, "", "")), mins_timeout)
    widen = Node(FocusNode(prompt, "", ""))
    widen.is_widen_node = True
    montecarlo.root_node.add_child(widen)
    widen.update_policy_value(args.widen_policy_value)
    montecarlo.child_finder = child_finder

    montecarlo.simulate(expansion_count)

    print('CHOSEN SOLUTION')
    print(montecarlo.solution)

    stats(montecarlo)
    print('cache stats', cache_stats)

    return cache_stats

if __name__ == '__main__':
    main()


