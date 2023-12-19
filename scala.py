from execute import execute, livecode
import requests
import re
from typing import Optional

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

def calculateScoreHelper(msg: str) -> (Optional[float], Optional[str]):
    v = filter_code(msg + "```").strip()
    if v == "":
        return None, None
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, None
    log = r["log"]
    print(log)
    first = log[log.rindex("ex.scala:") + 9 :]
    num_line_first = int(first[0 : first.index(":")])
    if filter_code(msg).strip() != v and num_line_first >= v.count("\n"):
        return None, None
    else:
        err = log
        return -1.0, err

def score_func(sentence: str) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculateScore(sentence)
    print("SCORE")
    print(score)
    return score

def filter_code(msg: str) -> str:
    m = re.findall("```([Ss]cala)?(.*?)```", msg, re.MULTILINE | re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r

def check_code(v: str) -> dict:
    return execute("scalac --color never -explain", "scala", v)
