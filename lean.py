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
    v = filterLean(msg+"```").strip()
    if v == "":
        return None, None
    # hack around the tokenizer not tokenizing '\n\n' as one id
    # if v.endswith('\n') and not v.endswith('\n\n'):
    #     if msg.count('```') % 2 == 1:
    #         return None, None
    r = checkLean(v)
    if r['status'] == 0:
        return 1.0, None
    critical_error =  -1.0, r["error"]
    tmp_error = None, None
    if "unknown constant" in r["error"]:
        return critical_error
    if filterLean(msg).strip() != v:
        if r["num_line_first"] >= v.count('\n'):
            return tmp_error
        if "missing cases" in r["error"]:
            return tmp_error
    return critical_error


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

def getErrorMessage(out):
    if "messages" in out:
        for m in out["messages"]:
            if m["severity"] == "error":
                return m
    return None

def checkLean(lean_code_block):
    proofsearch = ProofSearch(path_to_repl="repl")
    out = proofsearch.run_code(lean_code_block.strip(), verbose=True)
    error_message = getErrorMessage(out)
    if error_message:
        return {
            "status": 1,
            "num_line_first": error_message["pos"]["line"],
            "error": error_message["data"]
        }
    else:
        return {"status": 0}

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
