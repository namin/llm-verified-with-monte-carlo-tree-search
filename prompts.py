from lang_config import LANG, ALL_LANGS

if LANG == "Dafny":
    proof_marker = "ensures"
    cheat_marker = None
elif LANG == "Coq":
    proof_marker = "Qed"
    cheat_marker = "Admitted"
elif LANG == "Lean4":
    proof_marker = "theorem"
    cheat_marker = "sorry"

if proof_marker:
    CHECK_PROOF = lambda v: proof_marker in v
else:
    CHECK_PROOF = lambda v: True

if cheat_marker:
    CHECK_CHEAT = lambda v: cheat_marker in v
else:
    CHECK_CHEAT = lambda v: False

problem_fact = (
    f"""### Spec: In {LANG}, write a factorial function and prove that the factorial is always strictly positive.
{'''### Hint: Use a plain function, NOT a function method.
### Hint: Use a nat, NOT an int.
''' if LANG=='Dafny' else ''
}{'''### Hint: Don't forget to import the Arith module.
### Hint: use `Nat.lt_0_1` in the base case of the proof.
### Hint: use `Nat.lt_lt_add_r` in the inductive case of the proof.
''' if LANG=='Coq' else ''
}""",
    500,
    None,
    5,
    15,
    CHECK_PROOF, CHECK_CHEAT,
    ALL_LANGS,
)

problem_opt0_proof_coq = (
    """
```Coq
Inductive Expr : Type :=
  | Const : nat -> Expr
  | Var : string -> Expr
  | Add : Expr -> Expr -> Expr.

Fixpoint Eval (e : Expr) (env : string -> nat) : nat :=
  match e with
    | Const n => n
    | Var x => env x
    | Add e1 e2 => Eval e1 env + Eval e2 env
  end.

Fixpoint Optimize (e : Expr) : Expr :=
  match e with
    | Const n => e
    | Var x => e
    | Add e1 e2 =>
      match e1, e2 with
        | Const 0, _ => Optimize e2
        | _, Const 0 => Optimize e1
        | _, _ => Add (Optimize e1) (Optimize e2)
      end
  end.

Theorem Optimizer_preserves_semantics :
  forall e env, Eval (Optimize e) env = Eval e env.
Proof.
""",
    1000,
    None,
    22,
    40,
    CHECK_PROOF, CHECK_CHEAT,
    ['Coq'])

problem_opt0 = (
    f"""### Spec: In {LANG}, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
{'''### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
''' if LANG=='Dafny' else ''
}### Hint: In the optimizer, recursively optimize the sub-expressions.
{'''### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.
''' if LANG=='Dafny' else ''
}{'''### Hint: You can import the `string` datatype with the line `Require Import Coq.Strings.String.`.
### Hint: Use Fixpoint instead of Definition for recursive functions.
### Hint: With tactics like `induction` and `destruct`, _avoid_ naming with `as` and let Coq pick the names for you. For example, use `induction e.` but _not_ `induction e as [...]`.
### Hint: For the binary addition case in the proof, you can `destruct` over the sub-expressions and then use `hammer` so like `destruct e1; destruct e2; hammer.`
''' if LANG=='Coq' else ''
}""",
    1000,
    None,
    22,
    40,
    CHECK_PROOF, CHECK_CHEAT,
    ALL_LANGS,
)

problem_opt0_opt = (f"""### Spec: In {LANG}, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes addition by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
{'''### Hint: Do NOT use `requires` anywhere.
''' if LANG=='Dafny' else ''
}{'''### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
''' if LANG=='Dafny' else ''
}{'''### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
''' if LANG=='Dafny' else ''
}### Hint: In the optimizer, recursively optimize the sub-expressions.
{'''### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.
''' if LANG=='Dafny' else ''
}{'''### Hint: You can import the `string` datatype with the line `Require Import Coq.Strings.String.`
### Hint: Use Fixpoint instead of Definition for recursive functions.
### Hint: If you do induction on `e` with sub-expressions `e1` and `e2`, the two inductive hypotheses are called `IHe1` and `IHe2`.
''' if LANG=='Coq' else ''
}""",
    1000,
    None,
    22,
    40,
    CHECK_PROOF, CHECK_CHEAT,# if LANG != 'Dafny' else (lambda v: CHECK_CHEAT(v) or "requires" not in v or "==>" not in v),
    ALL_LANGS,
)

problem_mult = (
    f"""### Spec: In {LANG}, prove that for all natural numbers `a`, `b`, `n`, if `n` is not zero, then `n*a` equals `n*b` implies `a` equals `b`.
{'''### Hint: Define the lemma only once and prove it right there, don't leave a TODO, don't explain the proof beforehand, just prove it.
''' if LANG=='Dafny' else ''
}""",
    1000,
    None,
    8,
    40,
    CHECK_PROOF, CHECK_CHEAT,
    ALL_LANGS,
)

problem_max_dafny = (
    """
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
""",
    1000,
    None,
    5,
    20,
    CHECK_PROOF, CHECK_CHEAT,
    ["Dafny"],
)


# HumanEvalX, Problem 9
problem_rolling_max_dafny = (
    """
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
{
    result := numbers[0];
    for i := 1 to |numbers|
    invariant isMax(result, numbers[0..i])
    {
        if numbers[i] > result {
            result := numbers[i];
        }
    }
}

method check_rolling_even(numbers: seq<int>) returns (result: seq<bool>)
ensures |result| == |numbers|
ensures forall i :: 0 < i < |result| ==> result[i] == (numbers[i] % 2 == 0)
{
    result := [];
    for i := 0 to |numbers|
    invariant |result| == i
    invariant forall j :: 0 <= j < i ==> result[j] == (numbers[j] % 2 == 0)
    {
        result := result + [numbers[i] % 2 == 0];
    }
}

// From a given list of integers,
// generate a list of rolling maximum element found
// until given moment in the sequence.
method rolling_max(numbers: seq<int>) returns (result: seq<int>)
requires numbers != []
ensures |result| == |numbers|
ensures forall i :: 0 < i < |result| ==> isMax(result[i], numbers[0..(i+1)])
""",
    1000,
    None,
    5,
    20,
    CHECK_PROOF, CHECK_CHEAT,
    ["Dafny"],
)


# HumanEvalX, Problem 3
problem_below0_dafny = (
    """
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
    ensures result """
    + "<==>"
    + """ exists n: nat :: n <= |ops| && sum(ops, n) < 0
{
""",
    1000,
    None,
    5,
    20,
    CHECK_PROOF, CHECK_CHEAT,
    ["Dafny"],
)


problem_intersperse_invariants_dafny = (
    """
Here is the method interperse without verification.
method intersperse_without_verification(numbers: seq<int>, delimiter: int) returns (interspersed: seq<int>)
// TODO: missing ensures here
{
    interspersed := [];
    for i := 0 to |numbers|
    // TODO: missing invariants here
    {
        if i > 0 {
            interspersed := interspersed + [delimiter];
        }
        interspersed := interspersed + [numbers[i]];
    }
}

Now, here is the same method with `ensures` clauses.
Make sure the body verifies by defining `invariant` clauses.
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
""",
    1000,
    None,
    5,
    20,
    CHECK_PROOF, CHECK_CHEAT,
    ["Dafny"],
)


# HumanEvalX, Problem 3
problem_intersperse_dafny = (
    """
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
""",
    1000,
    None,
    5,
    20,
    CHECK_PROOF, CHECK_CHEAT,
    ["Dafny"],
)


# Set the right-hand side to the selected problem.
(
    prompt,
    max_new_tokens,
    expansion_count,
    min_lines,
    max_depth,
    check_func,
    check_cheat_func,
    supported_langs,
) = problem_opt0_proof_coq

assert LANG in supported_langs

def remove_hints(prompt):
    lines = prompt.split("\n")
    lines = [line for line in lines if not line.startswith("### Hint: ")]
    return "\n".join(lines)

#prompt = remove_hints(prompt)

if False and 'factorial' in prompt and LANG == "Coq":
    prompt += f"""
### Hint: Use some lemmas provided in Out. You cannot solve the base case by `reflexivity` since `<` is not reflexive. You also need a lemma in the inductive case. Use `apply` to use a lemma.

```{LANG.lower()}

Require Import Arith.
Search (0 < 1) inside Nat.
Search (_ < _ -> _ < _ + _) inside Nat.

Fixpoint factorial
"""
#Check Nat.lt_0_1.
#Check Nat.lt_lt_add_r.

elif LANG == "Coq" and "Proof." in prompt:
    pass

elif LANG != "Lean4":
    prompt += f"""
```{LANG.lower()}
"""

elif LANG == "Lean4":
    prompt += """
```lean4
import Mathlib
"""
