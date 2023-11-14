# A read-eval-print-loop for Lean 4

Run using `lake exe repl`.
Communicates via JSON on stdin and stdout.
Commands should be separated by blank lines.

The REPL works both in "command" mode and "tactic" mode.

## Command mode

In command mode, you send complete commands (e.g. declarations) to the REPL.

Commands may be of the form

```json
{ "cmd" : "def f := 2" }
```

```json
{ "cmd" : "example : f = 2 := rfl", "env" : 1 }
```

The `env` field, if present,
must contain a number received in the `env` field of a previous response,
and causes the command to be run in the existing environment.

If there is no `env` field, a new environment is created.

You can only use `import` commands when you do not specify the `env` field.

You can backtrack simply by using earlier values for `env`.

The response includes:
* A numeric label for the `Environment` after your command,
  which you can use as the starting point for subsequent commands.
* Any messages generated while processing your command.
* A list of the `sorry`s in your command, including
  * their expected type, and
  * a numeric label for the proof state at the `sorry`, which you can then use in tactic mode.

Example output:

```json
{"sorries":
 [{"pos": {"line": 1, "column": 18},
   "endPos": {"line": 1, "column": 23},
   "goal": "⊢ Nat",
   "proofState": 0}],
 "messages":
 [{"severity": "error",
   "pos": {"line": 1, "column": 23},
   "endPos": {"line": 1, "column": 26},
   "data":
   "type mismatch\n  rfl\nhas type\n  f = f : Prop\nbut is expected to have type\n  f = 2 : Prop"}],
 "env": 6}
```

showing any messages generated, and sorries with their goal states.

## Tactic mode (experimental)

The only way to enter tactic mode at present is to first issue a command containing a `sorry`,
and then using the `proofState` index returned for each `sorry`.

Example usage:
```json
{"cmd" : "def f : Nat := by sorry"}

{"sorries":
 [{"proofState": 0,
   "pos": {"line": 1, "column": 18},
   "goal": "⊢ Nat",
   "endPos": {"line": 1, "column": 23}}],
 "messages":
 [{"severity": "warning",
   "pos": {"line": 1, "column": 4},
   "endPos": {"line": 1, "column": 5},
   "data": "declaration uses 'sorry'"}],
 "env": 0}

{"tactic": "apply Int.natAbs", "proofState": 0}

{"proofState": 1, "goals": ["⊢ Int"]}

{"tactic": "exact -37", "proofState": 1}

{"proofState": 2, "goals": []}
```

At present there is nothing you can do with a completed proof state:
we would like to extend this so that you can replace the original `sorry` with your tactic script,
and obtain the resulting `Environment`

## Pickling

The REPL supports pickling environments and proof states to disk as `.olean` files.
As long as the same imports are available, it should be possible to move such an `.olean` file
to another machine and unpickle into a new REPL session.

The commands are

```json
{"pickleTo": "path/to/file.olean", "env": 7}

{"pickleTo": "path/to/file.olean", "proofState": 17}

{"unpickleEnvFrom": "path/to/file.olean"}

{"unpickleProofStateFrom": "path/to/file.olean"}
```

The unpickling commands will report the new "env" or "proofState" identifier that
you can use in subsequent commands.

Pickling is quite efficient:
* we don't record full `Environment`s, only the changes relative to imports
* unpickling uses memory mapping
* file sizes are generally small, but see https://github.com/digama0/leangz if compression is
  desirable

## Future work

* Replay tactic scripts from tactic mode back into the original `sorry`.
