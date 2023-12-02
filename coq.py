from execute import execute, livecode
import requests
from contextlib import redirect_stderr
import io
from alectryon.serapi import annotate
import re
from typing import Optional


def can_be_solution(msg: str, min_lines: int, check_func=None) -> bool:
    v = filterCoq(msg)
    r = v.count("\n") >= min_lines
    if r and check_func:
        r = check_func(v)
    return r

def give_context(v: str) -> (str, str):
    r = checkCoq(v, giveDetails=True)
    return ((r["details"] or ""), r["out"])

def short_verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
    try:
        not_ok_first = not_ok[0 : not_ok.index(".", len(ok))]
    except ValueError:
        return None
    r = checkDetails(not_ok_first)
    #details = r["details"]
    #if not details:
    #    return None
    v = filterCoq(not_ok + "```")
    r = checkCoq(v)
    log = r["log"]
    err = log[log.index(":")+1 :].strip()
    left = leftAfterError(v, log)
    rest = not_ok[len(ok.strip()) : len(not_ok)-len(left)].strip()
    if rest:
        return (rest, err)
    return None

def verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
    try:
        not_ok_first = not_ok[0 : not_ok.index(".", len(ok))]
    except ValueError:
        return None
    r = checkDetails(not_ok_first)
    details = r["details"]
    if details and details not in ok:
        print("DETAILS")
        print(details)
        text = ok
        text += "\n(* " + details + " *)\n"
        v = filterCoq(not_ok + "```")
        r = checkCoq(v)
        log = r["log"]
        err = log[log.index(":")+1 :].strip()
        left = leftAfterError(v, log)
        rest = not_ok[len(ok.strip()) : len(not_ok)-len(left)].strip()
        if rest:
            text += f"(* DO NOT:\n{rest}\nbecause of:\n{err} *)"
        return text
    return None


def checkDetails(msg: str) -> dict:
    v = filterCoq(msg + "```")
    r = checkCoq(v, giveDetails=True)
    return r

def leftAfterError(v: str, log: str) -> str:
    try:
        return leftAfterErrorHelper(v, log)
    except ValueError:
        return ''

def leftAfterErrorHelper(v: str, log: str) -> str:
    start_line = log[log.index("line ") + len("line ") :]
    num_line = int(start_line[0 : start_line.index(",")])
    end_char = start_line[0 : start_line.index(":")]
    char_index = int(end_char[end_char.rindex("-") + 1 :])
    left = v
    n = num_line - 1
    while n > 0:
        n -= 1
        left = left[left.index("\n") + 1 :]
    left = left[char_index + 1 :]
    return left


def calculateScore(msg: str) -> Optional[float]:
    v = filterCoq(msg + "```")
    if v == "":
        return None
    r = checkCoq(v)
    if r["status"] == 0:
        return 1.0
    log = r["log"]
    print(log)
    if filterCoq(msg) == v:
        return -1.0
    if "There are pending proofs" in log:
        return 1.0
    if "Syntax error: [ltac_use_default] expected after [tactic] (in [tactic_command])." in log:
        return -1.0
    if "Syntax" in log or "not found in the current environment" in log or "Cannot find a physical path bound to logical path" in log:
        left = leftAfterError(v, log)
        if "." in left:
            return -1.0
        else:
            return None
    else:
        return -1.0


def score_func(sentence: str) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculateScore(sentence)
    print("SCORE")
    print(score)
    return score


def filterCoq(msg: str) -> str:
    m = re.findall("```([Cc]oq)?(.*?)```", msg, re.MULTILINE | re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r


def checkCoq(v: str, giveDetails: bool = False) -> dict:
    if livecode:
        r = requests.post(
            f"https://coq{'c' if giveDetails else ''}.livecode.ch/check", data={"v": v}
        )
        r.raise_for_status()
        return r.json()

    r = execute("coqc", "v", v)
    status = r["status"]
    log = r["log"]
    outlog = r["out"]

    details = ""
    context = ""
    if giveDetails and log != "":
        f = io.StringIO()
        with redirect_stderr(f):
            r = annotate([v])
        context = f.getvalue()
        gs = [x for x in r[0] if hasattr(x, "goals") and x.goals != []]
        if gs != []:
            details = pretty_goals(gs[-1].goals)

    return {
        "status": status,
        "log": log,
        "out": outlog,
        "details": details,
        "context": context,
    }

# def give_context(v):
#     details = None
#     r = annotate([v])
#     gs = [x for x in r[0] if hasattr(x, "goals") and x.goals != []]
#     if gs != []:
#         details = pretty_goals(gs[-1].goals)
#     return details

def pretty_goals(goals):
    return "\n".join([pretty_goal(goal) for goal in goals])


def pretty_goal(goal):
    assumptions = "\n".join([pretty_hypothesis(h) for h in goal.hypotheses])
    if assumptions == "":
        assumptions = "(none)"
    return f"### Need to show\n\n{goal.conclusion}\n\n### given assumptions\n\n{assumptions}."


def pretty_hypothesis(h):
    return f"{', '.join(h.names)} : {h.type}"


filter_code = filterCoq
check_code = checkCoq
