# Pick a language...

# lang = 'Dafny'
# lang = 'Coq'
lang = 'Lean'

all_langs = ['Dafny', 'Coq', 'Lean']

# Detail features per language...

if lang=='Dafny':
    from dafny import score_func, can_be_solution, verifier_feedback
    comment = lambda inp: "\n// " + inp + "\n"
    stop_word = '\n'
elif lang=='Coq':
    from coq import score_func, can_be_solution, verifier_feedback
    comment = lambda inp: " (* " + inp + " *) "
    stop_word = '.'
elif lang=='Lean':
    from lean import score_func, can_be_solution, verifier_feedback
    comment = lambda inp: " /- " + inp + " -/ "
    stop_word = '\n\n'
else:
    assert False
