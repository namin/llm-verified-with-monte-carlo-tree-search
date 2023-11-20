# Pick a language...

lang = 'Dafny'
#lang = 'Coq'
#lang = 'Lean4'

all_langs = ['Dafny', 'Coq', 'Lean4']

# Detail features per language...

if lang=='Dafny':
    from dafny import score_func, can_be_solution, verifier_feedback, filter_code, check_code
    comment = lambda inp: "\n// " + inp + "\n"
    stop_word = '\n'
elif lang=='Coq':
    from coq import score_func, can_be_solution, verifier_feedback, filter_code, check_code
    comment = lambda inp: " (* " + inp + " *) "
    stop_word = '.'
elif lang=='Lean4':
    from lean import score_func, can_be_solution, verifier_feedback, filter_code, check_code
    comment = lambda inp: " /- " + inp + " -/ "
    stop_word = '\n\n'
else:
    assert False

def find_largest_new_block(old_text, text):
    return find_largest_new_block_code(filter_code(old_text+'```').strip(), filter_code(text+'```').strip())

def find_largest_new_block_code(old_code, code):
    while len(old_code) < len(code):
        r = check_code(code)
        if r['status'] == 0:
            return code
        try:
            code = code[0:code.rindex(stop_word)].strip()
        except ValueError:
            return None
    return None
        
