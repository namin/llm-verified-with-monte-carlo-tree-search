lang = 'Dafny'
lang = 'Coq'

if lang=='Dafny':
    from dafny import score_func, can_be_solution
elif lang=='Coq':
    from coq import score_func, can_be_solution
else:
    assert False
