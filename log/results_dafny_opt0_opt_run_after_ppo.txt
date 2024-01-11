[2023-12-25 08:29:26,993] [INFO] [real_accelerator.py:158:get_accelerator] Setting ds_accelerator to cuda (auto detect)
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =

  |
1 | datatype Expr =
  |                ^

ex.dfy(1,15): Error: invalid NoUSIdentOrDigits
1 parse errors detected in ex.dfy

SCORE
None
['datatype Expr =\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)

SCORE
1.0
['  | Const(value: int)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)

SCORE
1.0
['  | Var(name: string)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

SCORE
1.0
['  | Add(left: Expr, right: Expr)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {

  |
6 | predicate optimal(e: Expr) {
  |                             ^

ex.dfy(6,28): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['predicate optimal(e: Expr) {\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e

  |
7 |   match e
  |          ^

ex.dfy(7,9): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false

  |
8 |   case Add(Const(0), _) => false
  |                                 ^

ex.dfy(8,32): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case Add(Const(0), _) => false\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false

  |
9 |   case Add(_, Const(0)) => false
  |                                 ^

ex.dfy(9,32): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case Add(_, Const(0)) => false\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)

   |
10 |   case Add(e1, e2) => optimal(e1) && optimal(e2)
   |                                                 ^

ex.dfy(10,48): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case Add(e1, e2) => optimal(e1) && optimal(e2)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true

   |
11 |   case _ => true
   |                 ^

ex.dfy(11,16): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case _ => true\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr

SCORE
1.0
['function optimize(e: Expr): Expr\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{

   |
15 | {
   |  ^

ex.dfy(15,1): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e

   |
16 |   match e
   |          ^

ex.dfy(16,9): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>

   |
17 |   case Add(e1, e2) =>
   |                      ^

ex.dfy(17,21): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['  case Add(e1, e2) =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);

   |
18 |     var o1 := optimize(e1);
   |                            ^

ex.dfy(18,27): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['    var o1 := optimize(e1);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);

   |
19 |     var o2 := optimize(e2);
   |                            ^

ex.dfy(19,27): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['    var o2 := optimize(e2);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2

   |
20 |     if o1 == Const(0) then o2
   |                              ^

ex.dfy(20,29): Error: else expected
1 parse errors detected in ex.dfy

SCORE
None
['    if o1 == Const(0) then o2\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1

   |
21 |     else if o2 == Const(0) then o1
   |                                   ^

ex.dfy(21,34): Error: else expected
1 parse errors detected in ex.dfy

SCORE
None
['    else if o2 == Const(0) then o1\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)

   |
22 |     else Add(o1, o2)
   |                     ^

ex.dfy(22,20): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    else Add(o1, o2)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e

   |
23 |   case _ => e
   |              ^

ex.dfy(23,13): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case _ => e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)

SCORE
1.0
['lemma OptimizerOptimal(e: Expr)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))

SCORE
1.0
['  ensures optimal(optimize(e))\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{

   |
28 | {
   |  ^

ex.dfy(28,1): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e

   |
29 |   match e
   |          ^

ex.dfy(29,9): Error: invalid MatchStmt
1 parse errors detected in ex.dfy

SCORE
None
['  match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>

   |
30 |   case Add(e1, e2) =>
   |                      ^

ex.dfy(30,21): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case Add(e1, e2) =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);

   |
31 |     var o1 := optimize(e1);
   |                            ^

ex.dfy(31,27): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    var o1 := optimize(e1);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);

   |
32 |     var o2 := optimize(e2);
   |                            ^

ex.dfy(32,27): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    var o2 := optimize(e2);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);

   |
33 |     OptimizerOptimal(e1);
   |                          ^

ex.dfy(33,25): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    OptimizerOptimal(e1);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);
    OptimizerOptimal(e2);

   |
34 |     OptimizerOptimal(e2);
   |                          ^

ex.dfy(34,25): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    OptimizerOptimal(e2);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);
    OptimizerOptimal(e2);
  case _ =>

   |
35 |   case _ =>
   |            ^

ex.dfy(35,11): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['  case _ =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);
    OptimizerOptimal(e2);
  case _ =>
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);
    OptimizerOptimal(e2);
  case _ =>
}
``` import { Component, OnInit } from '@angular/core';

SCORE
1.0
["``` import { Component, OnInit } from '@angular/core';\n"]
CHOSEN SOLUTION
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary addition. Then write a predicate `optimal` that holds on an expression if it has no additions by 0. Then write an optimizer `optimize` that removes all additions by 0. Then write a lemma `OptimizerOptimal` that ensures `optimal(optimize(e))` for all expressions `e`.
### Hint: This is the definiton of the `optimal` predicate:
predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}
### Hint: Don't use the same structure for `optimize` as for `optimal`. Instead, follow the next hint.
### Hint: In the addition case, the `optimize` function should recursively optimize the sub-expressions and then match on the optimized sub-expressions.
### Hint: Do NOT use `requires` anywhere.
### Hint: Write the lemma as
lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr =
  | Const(value: int)
  | Var(name: string)
  | Add(left: Expr, right: Expr)

predicate optimal(e: Expr) {
  match e
  case Add(Const(0), _) => false
  case Add(_, Const(0)) => false
  case Add(e1, e2) => optimal(e1) && optimal(e2)
  case _ => true
}

function optimize(e: Expr): Expr
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    if o1 == Const(0) then o2
    else if o2 == Const(0) then o1
    else Add(o1, o2)
  case _ => e
}

lemma OptimizerOptimal(e: Expr)
  ensures optimal(optimize(e))
{
  match e
  case Add(e1, e2) =>
    var o1 := optimize(e1);
    var o2 := optimize(e2);
    OptimizerOptimal(e1);
    OptimizerOptimal(e2);
  case _ =>
}
``` import { Component, OnInit } from '@angular/core';


STATS

number of nodes: 27
number of gen nodes: 14 (including leaves: 1)
number of back nodes: 13 (including leaves: 13)

expansion count: 13 (including failed: 0)

cache stats {'hit': 0, 'miss': 37}

real	1m55.450s
user	4m22.811s
sys	1m5.260s
