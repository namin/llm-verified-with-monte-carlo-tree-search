problem_fact = ("### Spec: In Dafny, write a factorial function and prove that the factorial is always strictly positive.\n### Dafny:",
                500, 100, 5, lambda v: True)
problem_opt0 = ("""### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returns the number resulting from evaluation. Then write an optimizer tha takes an expression and returns an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.
### Dafny:""",
                1000, None, 22, lambda v: v.index('ensures') > 0)
(prompt, max_new_tokens, expansion_count, min_lines, check_fun) = problem_opt0

