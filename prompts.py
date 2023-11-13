from lang import lang

if lang == 'Dafny':
    proof_marker = 'ensures'
elif lang == 'Coq':
    proof_marker = 'Qed'
else:
    proof_marker = None

if proof_marker:
    check_proof = lambda v: proof_marker in v
else:
    check_proof = lambda v: True

problem_fact = (f"""### Spec: In {lang}, write a factorial function and prove that the factorial is always strictly positive.
{'''### Hint: Use a plain function, NOT a function method.
''' if lang=='Dafny' else ''
}{'''### Hint: Don't forget to import the Arith module.
''' if lang=='Coq' else ''
}### {lang}:""",
                500, None, 5, check_proof)
problem_opt0 = (f"""### Spec: In {lang}, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returns the number resulting from evaluation. Then write an optimizer tha takes an expression and returns an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
{'''### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
''' if lang=='Dafny' else ''
}### Hint: In the optimizer, recursively optimize the sub-expressions.
{'''### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.''' if lang=='Dafny' else ''
}### {lang}:""",
                1000, None, 22, check_proof)

# Set the right-hand side to the selected problem.
(prompt, max_new_tokens, expansion_count, min_lines, check_fun) = problem_fact
