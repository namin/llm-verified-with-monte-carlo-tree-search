from cmdline import args

from lang import can_be_solution_whole
from lang import filter_code

from prompts import prompt, min_lines, check_func

from dafny import calculateScoreHelper_whole

from reflection import reflect

import llm

def buildPrompt(prompt, text, err):
    r = reflect(filter_code(text), None, err)
    prompt += "\nTURN:\n"
    prompt += r
    prompt += "\nCODE:\n"
    prompt += "\n\n```dafny\n"
    return prompt
    
    
def trial(prompt):
    print('PROMPT', prompt)
    text = llm.generate_full(
        prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8
    )
    score, err = calculateScoreHelper_whole(text)
    is_solution = (
        score is not None
        and score > 0
        and can_be_solution_whole(text, min_lines, check_func)
    )
    if is_solution:
        print('DONE')
        return None
    else:
        trial(buildPrompt(prompt, text, err))

def initialPrompt():
    return prompt.replace("```dafny", "")

trial(initialPrompt())
