import re
from pySagredo.proofsearch import ProofSearch


def can_be_solution(msg, min_lines, check_fun=None):
    v = filterLean(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r


def verifier_feedback(ok, not_ok):
    msg = "Consider previous issue"
    if msg in ok:
        return None
    _, err = calculateScoreHelper(not_ok)
    if err:
        err = err.strip()
        hint = f"\n/- {msg}: {err} -/\n"
        text = ok+hint
        return text
    return None


def calculateScore(msg):
    score, _ = calculateScoreHelper(msg)
    return score


def calculateScoreHelper(msg):
    v = filterLean(msg+"```")
    if v == "":
        return None, None
    # hack around the tokenizer not tokenizing '\n\n' as one id
    if v.endswith('\n') and not v.endswith('\n\n'):
        if msg.count('```') % 2 == 1:
            return None, None
    r = checkLean(v)
    if r['status'] == 0:
        return 1.0, None
    if r["num_line_first"] > 1+v.strip().count('\n'):
        return None, None
    else:
        return -1.0, r["error"]


def score_func(sentence):
    print('TEXT')
    print(sentence)
    score = calculateScore(sentence)
    print('SCORE')
    print(score)
    return score


def filterLean(msg):
    m = re.findall('```([Ll]ean)?(.*?)```', msg, re.MULTILINE|re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r


def checkLean(lean_code_block):
    proofsearch = ProofSearch(path_to_repl="repl")
    out = proofsearch.run_code(lean_code_block.strip(), verbose=True)
    if list(out.keys()) == ["env"]:
        return {"status": 0}
    elif list(out.keys()) == ["messages", "env"]:
        if len(out["messages"]) == 0:
            return {"status": 0}
        elif all(m["severity"]!="error" for m in out["messages"]):
            return {"status": 0}
        else:
            return {"status": 1, "num_line_first": out["messages"][0]["pos"]["line"], "error": out["messages"][0]["data"]}


if __name__=="__main__":
    lean = f"""```lean
open Nat (add_assoc add_comm)

theorem hello_world (a b c : Nat)
  : a + b + c = a + c + b := by
  rw [add_assoc, add_comm b, ←add_assoc]

theorem foo (a : Nat) : a + 1 = Nat.succ a := by rfl
```
"""
    print(calculateScoreHelper(lean))
