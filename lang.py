# Pick a language...

lang = 'Dafny'
#lang = 'Coq'

all_langs = ['Dafny', 'Coq']

# Detail features per language...

if lang=='Dafny':
    from dafny import score_func, can_be_solution, verifier_feedback
    comment = lambda inp: "\n// " + inp + "\n"
    stop_word = '\n'
elif lang=='Coq':
    from coq import score_func, can_be_solution, verifier_feedback
    comment = lambda inp: " (* " + inp + " *) "
    stop_word = '.'
else:
    assert False
