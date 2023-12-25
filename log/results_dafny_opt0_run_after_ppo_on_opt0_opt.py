[2023-12-25 08:32:35,575] [INFO] [real_accelerator.py:158:get_accelerator] Setting ds_accelerator to cuda (auto detect)
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)

SCORE
1.0
['datatype Expr = Const(val: int)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)

SCORE
1.0
['              | Var(name: string)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

SCORE
1.0
['              | Add(left: Expr, right: Expr)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: function (string) returns (int)): int

  |
5 | function Evaluate(e: Expr, env: function (string) returns (int)): int
  |                                 ^

ex.dfy(5,32): Error: invalid TypeAndToken
1 parse errors detected in ex.dfy

SCORE
None
['function Evaluate(e: Expr, env: function (string) returns (int)): int\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: function (string) returns (int)): int
{

  |
5 | function Evaluate(e: Expr, env: function (string) returns (int)): int
  |                                 ^

ex.dfy(5,32): Error: invalid TypeAndToken
  |
6 | {
  |  ^

ex.dfy(6,1): Error: invalid UnaryExpression
2 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: function (string) returns (int)): int
{
  match e

  |
5 | function Evaluate(e: Expr, env: function (string) returns (int)): int
  |                                 ^

ex.dfy(5,32): Error: invalid TypeAndToken
  |
7 |   match e
  |          ^

ex.dfy(7,9): Error: rbrace expected
2 parse errors detected in ex.dfy

SCORE
-1.0
['  match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int

SCORE
1.0
['function Evaluate(e: Expr, env: string -> int): int\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{

  |
6 | {
  |  ^

ex.dfy(6,1): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e

  |
7 |     match e
  |            ^

ex.dfy(7,11): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val

  |
8 |     case Const(val) => val
  |                           ^

ex.dfy(8,26): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case Const(val) => val\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)

  |
9 |     case Var(name) => env(name)
  |                                ^

ex.dfy(9,31): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case Var(name) => env(name)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)

   |
10 |     case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
   |                                                                        ^

ex.dfy(10,71): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr

SCORE
1.0
['function Optimize(e: Expr): Expr\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{

   |
14 | {
   |  ^

ex.dfy(14,1): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e

   |
15 |     match e
   |            ^

ex.dfy(15,11): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>

   |
16 |     case Add(left, right) =>
   |                             ^

ex.dfy(16,28): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['    case Add(left, right) =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);

   |
17 |         var opt_left := Optimize(left);
   |                                        ^

ex.dfy(17,39): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['        var opt_left := Optimize(left);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);

   |
18 |         var opt_right := Optimize(right);
   |                                          ^

ex.dfy(18,41): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['        var opt_right := Optimize(right);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then

   |
19 |         if opt_left == Const(0) then
   |                                     ^

ex.dfy(19,36): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['        if opt_left == Const(0) then\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then
            return opt_right;

   |
20 |             return opt_right;
   |             ^

ex.dfy(20,12): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['            return opt_right;\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then
            return opt_right;
        else if opt_right == Const(0) then

   |
20 |             return opt_right;
   |             ^

ex.dfy(20,12): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
None
['        else if opt_right == Const(0) then\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then
            return opt_right;
        else if opt_right == Const(0) then
            return opt_left;

   |
20 |             return opt_right;
   |             ^

ex.dfy(20,12): Error: invalid UnaryExpression
1 parse errors detected in ex.dfy

SCORE
-1.0
['            return opt_left;\n']
['{\n']
['    match e\n']
['    case Add(left, right) =>\n']
['        var opt_left := Optimize(left);\n']
['        var opt_right := Optimize(right);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right

   |
19 |         if opt_left == Const(0) then opt_right
   |                                               ^

ex.dfy(19,46): Error: else expected
1 parse errors detected in ex.dfy

SCORE
None
['        if opt_left == Const(0) then opt_right\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left

   |
20 |         else if opt_right == Const(0) then opt_left
   |                                                    ^

ex.dfy(20,51): Error: else expected
1 parse errors detected in ex.dfy

SCORE
None
['        else if opt_right == Const(0) then opt_left\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)

   |
21 |         else Add(opt_left, opt_right)
   |                                      ^

ex.dfy(21,37): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['        else Add(opt_left, opt_right)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e

   |
22 |     case _ => e
   |                ^

ex.dfy(22,15): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case _ => e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}


SCORE
1.0
['\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)

SCORE
1.0
['lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
{

   |
26 | {
   |  ^

ex.dfy(26,1): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['{\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
{
    assert Evaluate(Optimize(e), env) == Evaluate(e, env);

   |
27 |     assert Evaluate(Optimize(e), env) == Evaluate(e, env);
   |                                                           ^

ex.dfy(27,58): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    assert Evaluate(Optimize(e), env) == Evaluate(e, env);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
{
    assert Evaluate(Optimize(e), env) == Evaluate(e, env);
}

ex.dfy(27,11): Error: assertion might not hold
   |
27 |     assert Evaluate(Optimize(e), env) == Evaluate(e, env);
   |            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


Dafny program verifier finished with 2 verified, 1 error

SCORE
None
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
{
    assert Evaluate(Optimize(e), env) == Evaluate(e, env);
}
```

ex.dfy(27,11): Error: assertion might not hold
   |
27 |     assert Evaluate(Optimize(e), env) == Evaluate(e, env);
   |            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


Dafny program verifier finished with 2 verified, 1 error

SCORE
-1.0
['```\n']
['{\n']
['    assert Evaluate(Optimize(e), env) == Evaluate(e, env);\n']
['}\n']
['```\n']
['lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)\n']
['{\n']
['    assert Evaluate(Optimize(e), env) == Evaluate(e, env);\n']
['}\n']
['```\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true

SCORE
1.0
['requires true\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)

SCORE
1.0
['ensures Evaluate(Optimize(e), env) == Evaluate(e, env)\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
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
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e

   |
29 |     match e
   |            ^

ex.dfy(29,11): Error: invalid MatchStmt
1 parse errors detected in ex.dfy

SCORE
None
['    match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.

   |
30 |     case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
   |                                                                                         ^

ex.dfy(30,88): Error: invalid Suffix
1 parse errors detected in ex.dfy

SCORE
None
['    case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
    case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.

   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |     ^

ex.dfy(31,4): Error: invalid Suffix
   |
30 |     case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
   |                      ^

ex.dfy(30,21): Error: missing semicolon at end of statement
   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |                                                                                     ^

ex.dfy(31,84): Error: invalid Suffix
3 parse errors detected in ex.dfy

SCORE
None
['    case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
    case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
    case Add(left, right) =>

   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |     ^

ex.dfy(31,4): Error: invalid Suffix
   |
30 |     case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
   |                      ^

ex.dfy(30,21): Error: missing semicolon at end of statement
   |
32 |     case Add(left, right) =>
   |     ^

ex.dfy(32,4): Error: invalid Suffix
   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |                    ^

ex.dfy(31,19): Error: missing semicolon at end of statement
   |
32 |     case Add(left, right) =>
   |                             ^

ex.dfy(32,28): Error: rbrace expected
5 parse errors detected in ex.dfy

SCORE
None
['    case Add(left, right) =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
    case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
    case Add(left, right) =>
        // Recursive case: Optimize sub-expressions and then prove by induction.

   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |     ^

ex.dfy(31,4): Error: invalid Suffix
   |
30 |     case Const(_) => () // Base case: Const expressions are unaffected by the optimizer.
   |                      ^

ex.dfy(30,21): Error: missing semicolon at end of statement
   |
32 |     case Add(left, right) =>
   |     ^

ex.dfy(32,4): Error: invalid Suffix
   |
31 |     case Var(_) => () // Base case: Var expressions are unaffected by the optimizer.
   |                    ^

ex.dfy(31,19): Error: missing semicolon at end of statement
   |
33 |         // Recursive case: Optimize sub-expressions and then prove by induction.
   |                                                                                 ^

ex.dfy(33,80): Error: rbrace expected
5 parse errors detected in ex.dfy

SCORE
-1.0
['        // Recursive case: Optimize sub-expressions and then prove by induction.\n']
['{\n']
['    match e\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>

   |
30 |     case Add(left, right) =>
   |                             ^

ex.dfy(30,28): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case Add(left, right) =>\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);

   |
31 |         var opt_left := Optimize(left);
   |                                        ^

ex.dfy(31,39): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['        var opt_left := Optimize(left);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);

   |
32 |         var opt_right := Optimize(right);
   |                                          ^

ex.dfy(32,41): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['        var opt_right := Optimize(right);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);

   |
33 |         OptimizerPreservesSemantics(left, env);
   |                                                ^

ex.dfy(33,47): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['        OptimizerPreservesSemantics(left, env);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);
        OptimizerPreservesSemantics(right, env);

   |
34 |         OptimizerPreservesSemantics(right, env);
   |                                                 ^

ex.dfy(34,48): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['        OptimizerPreservesSemantics(right, env);\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);
        OptimizerPreservesSemantics(right, env);
    case _ => 

   |
35 |     case _ =>
   |              ^

ex.dfy(35,13): Error: rbrace expected
1 parse errors detected in ex.dfy

SCORE
None
['    case _ => \n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);
        OptimizerPreservesSemantics(right, env);
    case _ => 
}

SCORE
1.0
['}\n']
TEXT
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);
        OptimizerPreservesSemantics(right, env);
    case _ => 
}
```

SCORE
1.0
['```\n']
CHOSEN SOLUTION
### Spec: In Dafny, write an ADT for arithmetic expressions comprising constants, variables and binary additions. Then write an evaluator taking an expression and an environment (a function that takes a variable name and returns a number) and returning the number resulting from evaluation. Then write an optimizer taking an expression and returning an expression with all additions by 0 removed. Then prove that the optimizer preserves the semantics as defined by the evaluation function.
### Hint: Recall that in Dafny, pattern match takes the form
match e
case Foo(x, y) => 1
case Bar(x) => 2
case _ => 3
### Hint: In the optimizer, recursively optimize the sub-expressions.
### Hint: For the proof, just do a simple pattern match (match not if) and call the lemma recursively without adding asserts.

```dafny
datatype Expr = Const(val: int)
              | Var(name: string)
              | Add(left: Expr, right: Expr)

function Evaluate(e: Expr, env: string -> int): int
{
    match e
    case Const(val) => val
    case Var(name) => env(name)
    case Add(left, right) => Evaluate(left, env) + Evaluate(right, env)
}

function Optimize(e: Expr): Expr
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        if opt_left == Const(0) then opt_right
        else if opt_right == Const(0) then opt_left
        else Add(opt_left, opt_right)
    case _ => e
}

lemma OptimizerPreservesSemantics(e: Expr, env: string -> int)
requires true
ensures Evaluate(Optimize(e), env) == Evaluate(e, env)
{
    match e
    case Add(left, right) =>
        var opt_left := Optimize(left);
        var opt_right := Optimize(right);
        OptimizerPreservesSemantics(left, env);
        OptimizerPreservesSemantics(right, env);
    case _ => 
}
```


STATS

number of nodes: 33
number of gen nodes: 17 (including leaves: 2)
number of back nodes: 16 (including leaves: 15)

expansion count: 22 (including failed: 6)

cache stats {'hit': 16, 'miss': 52}

real	2m35.149s
user	5m1.542s
sys	1m9.396s
