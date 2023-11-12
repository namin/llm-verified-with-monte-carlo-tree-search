lang = 'Dafny'
lang = 'Coq'

if lang=='Dafny':
    from dafny import score_func, can_be_solution
    comment = lambda inp: "\n// " + inp + "\n"
elif lang=='Coq':
    from coq import score_func, can_be_solution
    comment = lambda inp: " (* " + inp + " *) "
else:
    assert False
