def strip_instructions(prompt):
    try:
        return prompt[prompt.index('[/INST]'):]
    except ValueError:
        return prompt

def diffprompt(prompt, results):
    n = len(strip_instructions(prompt))
    return [strip_instructions(r)[n:] for r in results]

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
