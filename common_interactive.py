def strip_instructions(prompt):
    try:
        return prompt[prompt.index('[/INST]'):]
    except ValueError:
        return prompt

def diffprompt(prompt, results):
    n = len(strip_instructions(prompt))
    return [strip_instructions(r)[n:] for r in results]

def find_assistant(prompt):
    tag = "<|eot_id|>"
    try:
        end_index = prompt.rindex(tag)
        start_index = prompt[:end_index].rindex(tag)
    except ValueError:
        print("Warning: discarding a result because cannot parse "+prompt)
        return "(no answer)"
    return prompt[start_index+len(tag):end_index]
    
def diffprompt_llama31(prompt, results):
    print("PROMPTS:"+prompt)
    print("RESULTS:"+str(results))
    return [find_assistant(r) for r in results]

def ask_keep(prompt, texts):
    i = 0
    for t in diffprompt(prompt, texts):
        print(i, t)
        i += 1
    inp = input("Keep which? [0...] or comment: ").strip()
    try:
        return int(inp)
    except ValueError:
        return inp
