from lang import lang, all_langs

proof_marker = None
cheat_marker = None
check_proof = None
if lang == 'Dafny':
    proof_marker = 'ensures'
elif lang == 'Coq':
    proof_marker = 'Qed'
    cheat_marker = 'Admitted'
elif lang == 'Lean4':
    proof_marker = 'theorem'
    cheat_marker = 'sorry'

if check_proof is None:
    if proof_marker:
        check_proof = lambda v: proof_marker in v
    else:
        check_proof = lambda v: True
    if cheat_marker:
        old_check_proof = check_proof
        check_proof = lambda v: old_check_proof(v) and cheat_marker not in v

problem_fact = (f"""### Spec: In {lang}, write a factorial function and prove that the factorial is always strictly positive.
{'''### Hint: Use a plain function, NOT a function method.
''' if lang=='Dafny' else ''
}{'''### Hint: Don't forget to import the Arith module.
### Hint: use `Nat.lt_0_1` in the base case of the proof.
### Hint: use `Nat.lt_lt_add_r` in the inductive case of the proof.
''' if lang=='Coq' else ''
}""",
                500, None, 5, 15, check_proof, all_langs)
problem_opt0 = (f"""### Spec: In {lang}, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returns the number resulting from evaluation. Then write an optimizer tha takes an expression and returns an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
{'''### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
''' if lang=='Dafny' else ''
}### Hint: In the optimizer, recursively optimize the sub-expressions.
{'''### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.
''' if lang=='Dafny' else ''
}{'''### Hint: You can import the `string` datatype with the line `Require Import Coq.Strings.String.`
### Hint: Use Fixpoint instead of Definition for recursive functions.
### Hint: If you do induction on `e` with sub-expressions `e1` and `e2`, the two inductive hypotheses are called `IHe1` and `IHe2`.
### Hint: For the inductive case of the proof, `eauto using PeanoNat.Nat.add_0_r` might be useful (`Require Arith` in the imports).
### Hint: You can also rewrite backwards: `rewrite <- H`.
''' if lang=='Coq' else ''
}""",
                1000, None, 22, 40, check_proof, all_langs)

problem_opt0_opt = (f"""### Spec: In {lang}, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write an optimizer tha takes an expression and returns an expression with all additions by 0 removed. Then define a predicate holding of optimized expressions. Then prove that the optimizer takes an arbitrary expression (on which the predicate may not hold -- DO NOT USE a requires clause) and returns an expression satisfying that predicate.
{'''### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
''' if lang=='Dafny' else ''
}### Hint: In the optimizer, recursively optimize the sub-expressions.
{'''### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.
''' if lang=='Dafny' else ''
}{'''### Hint: You can import the `string` datatype with the line `Require Import Coq.Strings.String.`
### Hint: Use Fixpoint instead of Definition for recursive functions.
### Hint: If you do induction on `e` with sub-expressions `e1` and `e2`, the two inductive hypotheses are called `IHe1` and `IHe2`.
''' if lang=='Coq' else ''
}""",
                1000, None, 22, 40, (lambda v: check_proof(v) and "requires" not in v and "==>" not in v), all_langs)

problem_max_dafny = ("""
```dafny
function isMax(m: int, numbers: seq<int>): bool
{
    m in numbers &&
    forall i :: 0 <= i < |numbers| ==> numbers[i] <= m

}

// Calculate the max of a sequence of numbers.
method max(numbers: seq<int>) returns (result: int)
requires numbers != []
ensures isMax(result, numbers)
""", 1000, None, 5, 20, check_proof, ['Dafny'])

# HumanEvalX, Problem 9
problem_rolling_max_dafny = ("""
```dafny
function isMax(m: int, numbers: seq<int>): bool
{
    m in numbers &&
    forall i :: 0 <= i < |numbers| ==> numbers[i] <= m

}

// From a given list of integers,
// generate a list of rolling maximum element found
// until given moment in the sequence.
method rolling_max(numbers: seq<int>) returns (result: seq<int>)
requires numbers != []
ensures |result| == |numbers|
ensures forall i :: 0 < i < |result| ==> isMax(result[i], numbers[0..(i+1)])
""", 1000, None, 5, 20, check_proof, ['Dafny'])

relates_to = "<==>"
# HumanEvalX, Problem 3
problem_below0_dafny = ("""
### Hint: In Dafny, the result is assigned `result := true` and `return` takes no arguments.
### Hint: Remember to have an invariant related running balance and the sum.
### Hint: Call the lemma sum_plus immediately after you add to the balance to maintain the invariant, before any if statement.
```Dafny
function sum(s: seq<int>, n: nat): int
    requires n <= |s|
{
    if |s| == 0 || n == 0 then
        0
    else
        s[0] + sum(s[1..], n-1)
}

lemma sum_plus(s: seq<int>, i: nat)
    requires i < |s|
    ensures sum(s, i) + s[i] == sum(s, i+1)
{
}

method below_zero(ops: seq<int>) returns (result: bool)
/*
You're given a list of deposit and withdrawal operations on a bank account that starts with
zero balance. Your task is to detect if at any point the balance of account fallls below zero, and
at that point function should return true. Otherwise it should return false.
- assert !below_zero([1, 2, 3])
- assert below_zero([1, 2, -4, 5])
*/
    ensures result """+relates_to+""" exists n: nat :: n <= |ops| && sum(ops, n) < 0
{
""", 1000, None, 5, 20, check_proof, ['Dafny'])

# HumanEvalX, Problem 3
problem_intersperse_dafny = ("""
```Dafny
method intersperse(numbers: seq<int>, delimiter: int) returns (interspersed: seq<int>)
/*
Insert a number 'delimeter' between every two consecutive elements of input list `numbers'
- assert intersperse([], 4) == []
- assert intersperse([1, 2, 3], 4) == [1, 4, 2, 4, 3]
*/
    ensures |interspersed| == if |numbers| > 0 then 2 * |numbers| - 1 else 0
    ensures forall i :: 0 <= i < |interspersed| ==> i % 2 == 0 ==>
                interspersed[i] == numbers[i / 2]
    ensures forall i :: 0 <= i < |interspersed| ==> i % 2 == 1 ==>
                interspersed[i] == delimiter
{
""", 1000, None, 5, 20, check_proof, ['Dafny'])

# Set the right-hand side to the selected problem.
(prompt, max_new_tokens, expansion_count, min_lines, max_depth, check_fun, supported_langs) = problem_opt0

def remove_hints(prompt):
    lines = prompt.split('\n')
    lines = [line for line in lines if not line.startswith('### Hint: ')]
    return '\n'.join(lines)

#prompt = remove_hints(prompt)

assert lang in supported_langs

if lang != 'Lean4':
    prompt = f'''
Put your {lang} code in triple quotes:
```{lang}
```
''' + prompt
elif lang == 'Lean4':
    prompt += '''
Import mathlib4 whenever necessary:
```lean4
import Mathlib
```
'''
