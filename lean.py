import re
from pySagredo.proofsearch import ProofSearch
import pexpect
from typing import Optional
from collections.abc import Callable

def create_comment(msg: str) -> str:
    return f"/- {msg} -/"

def calculate_code_score_with_err(v: str, code_maybe_incomplete: Callable[[int],bool]) -> (Optional[float], Optional[str]):
    if v == "":
        return None, None
    # hack around the tokenizer not tokenizing '\n\n' as one id
    # if v.endswith('\n') and not v.endswith('\n\n'):
    #     if msg.count('```') % 2 == 1:
    #         return None, None
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, None
    critical_error = -1.0, r["error"]
    tmp_error = None, None
    if "unknown constant" in r["error"]:
        return critical_error
    elif "tactic 'rewrite' failed" in r["error"]:
        return critical_error
    if code_maybe_incomplete(None):
        if r["num_line_first"] >= v.count("\n"):
            return tmp_error
        if "missing cases" in r["error"]:
            return tmp_error
    return critical_error

re_code_lang = "```([Ll]ean4?)?(.*?)```"

def get_error_message(out: str):
    if "messages" in out:
        for m in out["messages"]:
            if m["severity"] == "error":
                return m
    return None


def check_code(lean_code_block: str) -> dict:
    proofsearch = ProofSearch(path_to_repl="repl")
    try:
        out = proofsearch.run_code(lean_code_block.strip(), verbose=True)
    except pexpect.exceptions.EOF:
        return {"status": 1, "num_first_line": 0, "error": ""}
    if out:  # failed due to timeout
        error_message = get_error_message(out)
        if error_message:
            return {
                "status": 1,
                "num_line_first": error_message["pos"]["line"],
                "error": error_message["data"],
            }
        else:
            return {"status": 0}
    else:
        return {
            "status": 1,
            "num_line_first": 0,
            "error": "Failed due to timeout after 20 seconds",
        }


if __name__ == "__main__":
    lean = f"""```lean
import Mathlib

def factorial : Nat → Nat
| 0 => 1
| n+1 => (n+1) * factorial n

theorem factorial_pos : ∀ n : Nat, 0 < factorial n
| 0 => Nat.zero_lt_one
| n+1 => Nat.mul_pos (Nat.succ_pos n) (factorial_pos n)

#eval factorial 5
```
"""
    from scoring import score_func
    score_func(lean)
