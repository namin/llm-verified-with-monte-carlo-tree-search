from cmdline import args

def strip_instructions(prompt):
    try:
        return prompt[prompt.index('[/INST]'):]
    except ValueError:
        return prompt

def diffprompt_default(prompt, results):
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
    r = prompt[start_index+len(tag):end_index]
    r = r.replace("assistant<|end_header_id|>", "")
    return r
    
def diffprompt_llama3(prompt, results):
    return [find_assistant(r) for r in results]

def choose_diffprompt(model_name):
    x = model_name.lower()
    if "llama" in x and "3" in x:
        return diffprompt_llama3
    else:
        return diffprompt_default

diffprompt = choose_diffprompt(args.base_model_name)

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

