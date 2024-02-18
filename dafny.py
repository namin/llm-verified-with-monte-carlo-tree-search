from execute import execute, livecode
import requests
import re
from typing import Optional, Tuple

def short_verifier_feedback(ok: str, not_ok: str) -> Optional[Tuple[str,str]]:
    _, err = calculateScoreHelper(not_ok)
    if err:
        err = err.strip()
        return (None, err)
    return None
    
def verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
    msg = "Consider previous issue"
    if msg in ok:
        return None
    _, err = calculateScoreHelper(not_ok)
    if err:
        err = err.strip()
        hint = f"\n/* {msg}: {err} */\n"
        text = ok + hint
        return text
    return None


def calculateScore(msg: str) -> Optional[float]:
    score, _ = calculateScoreHelper(msg)
    return score


def lastBraceMissing(v, log):
    line = v.count("\n")+1
    if line>1:
        i = v.rindex("\n")
    else:
        i = 0
    column = len(v)-i-1
    msg = f"dfy({line},{column}): Error: rbrace expected"
    print("message", msg)
    return msg in log


def braceScoreHelper(v: str, rec = 10) -> (Optional[float], Optional[str]):
    if rec <= 0:
        return None, None
    r = checkDafny(v+"\n}")
    if r["status"] == 0:
        return None, None
    log = r["out"]
    print(log)
    if lastBraceMissing(v, log):
        return braceScoreHelper(v+"\n}", rec-1)
    ok_errors = ["Error: missing case in match", "Error: a postcondition could not be proved on this return path", "loop invariant"]
    hard_errors = ["parse errors detected", "resolution/type errors", "Error"]
    if any([x in log for x in ok_errors]):
        return None, None    
    if any([x in log for x in hard_errors]):
        return -1.0, ""
    #inp = input('pause')
    return None, None

def calculateScoreHelper(msg: str) -> (Optional[float], Optional[str]):
    v = filterDafny(msg + "```").strip()
    if v == "":
        return None, None
    r = checkDafny(v)
    if r["status"] == 0:
        return 1.0, None
    log = r["out"]
    print(log)
    if lastBraceMissing(v, log):
        print("adding }")
        return braceScoreHelper(v)
    elif "Error: rbrace expected" in log:
        return -1.0, ""
    try:
        first = log[log.index("ex.dfy(") + 7 :]
    except ValueError:
        # might be a timeout
        return -1.0, ""
    num_line_first = int(first[0 : first.index(",")])
    if filterDafny(msg).strip() != v and num_line_first >= v.count("\n"):
        return None, None
    else:
        err = first[first.index(":") :]
        try:
            err = err[: err.index("ex.dfy")]
        except ValueError:
            pass
        return -1.0, err


def score_func(sentence: str) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculateScore(sentence)
    print("SCORE")
    print(score)
    return score


def filterDafny(msg: str) -> str:
    m = re.findall("```([Dd]afny)?(.*?)```", msg, re.MULTILINE | re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r


def checkDafny(v: str) -> dict:
    if livecode:
        r = requests.post("https://dafny.livecode.ch/check", data={"v": v})
        r.raise_for_status()
        return r.json()
    return execute("dafny verify", "dfy", v)


filter_code = filterDafny
check_code = checkDafny
