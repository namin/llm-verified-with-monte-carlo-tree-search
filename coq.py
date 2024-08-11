from execute import execute, livecode
import requests
from contextlib import redirect_stderr
import io
from alectryon.serapi import annotate
import re
from typing import Optional, Tuple
from collections.abc import Callable

def create_comment(msg: str) -> str:
    return f"(* {msg} *)"

def give_context(v: str) -> (str, str):
    r = check_code(v, give_details=True)
    return ((r["details"] or ""), r["out"])

def short_verifier_feedback(ok: str, not_ok: str) -> Optional[Tuple[str,str]]:
    try:
        not_ok_first = not_ok[0 : not_ok.index(".", len(ok))]
    except ValueError:
        return None
    r = check_details(not_ok_first)
    v = filter_code(not_ok + "```")
    r = check_code(v)
    log = r["log"]
    try:
        err = log[log.index(":")+1 :].strip()
    except ValueError:
        return None
    left = left_after_error(v, log)
    rest = not_ok[len(ok.strip()) : len(not_ok)-len(left)].strip()
    if rest:
        return (rest, err)
    return None

def verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
    try:
        not_ok_first = not_ok[0 : not_ok.index(".", len(ok))]
    except ValueError:
        return None
    r = check_details(not_ok_first)
    details = r["details"]
    if details and details not in ok:
        print("DETAILS")
        print(details)
        text = ok
        text += "\n(* " + details + " *)\n"
        v = filter_code(not_ok + "```")
        r = check_code(v)
        log = r["log"]
        err = log[log.index(":")+1 :].strip()
        left = left_after_error(v, log)
        rest = not_ok[len(ok.strip()) : len(not_ok)-len(left)].strip()
        if rest:
            text += f"(* DO NOT:\n{rest}\nbecause of:\n{err} *)"
        return text
    return None

def check_details(msg: str) -> dict:
    v = filter_code(msg + "```")
    r = check_code(v, give_details=True)
    return r

def left_after_error(v: str, log: str) -> str:
    try:
        return left_after_error_helper(v, log)
    except ValueError:
        return ''

def left_after_error_helper(v: str, log: str) -> str:
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

def calculate_code_score_with_err(v: str, code_maybe_incomplete: Callable[[Optional[int]],bool]) -> (Optional[float], Optional[str]):
    if v == "":
        return None, v
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, v
    log = r["log"]
    print(log)
    left = left_after_error(v, log)
    v0 = v[:len(v)-len(left)]
    if code_maybe_incomplete(None):
        return -1.0, v0
    if "There are pending proofs" in log:
        return 1.0, v
    if "Syntax error: [ltac_use_default] expected after [tactic] (in [tactic_command])." in log:
        return -1.0, v0
    if "Syntax" in log or "not found in the current environment" in log or "Cannot find a physical path bound to logical path" in log:
        if "." in left:
            return -1.0, v0
        else:
            return None, v
    else:
        return -1.0, v0

re_code_lang = "```([Cc]oq)?(.*?)```"


def check_code(v: str, give_details: bool = False) -> dict:
    if livecode:
        r = requests.post(
            f"https://coq{'c' if give_details else ''}.livecode.ch/check", data={"v": v}
        )
        r.raise_for_status()
        return r.json()

    r = execute("coqc", "v", v)
    status = r["status"]
    log = r["log"]
    outlog = r["out"]

    details = ""
    context = ""
    if give_details and log != "":
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

def pretty_goals(goals):
    return "\n".join([pretty_goal(goal) for goal in goals])


def pretty_goal(goal):
    name_lst = all_names(goal.hypotheses)
    names = ", ".join(name_lst)
    if names != "":
        names = "\n\n" + names + " as follows."
    assumptions = "\n".join([pretty_hypothesis(h) for h in goal.hypotheses])
    if assumptions == "":
        assumptions = "(none)"
    return f"### Need to show\n\n{goal.conclusion}\n\n### given assumptions{names}\n\n{assumptions}."


def pretty_hypothesis(h):
    return f"{', '.join(h.names)} : {h.type}"

def all_names(hs):
    r = []
    for h in hs:
        r += h.names
    return r

def extract_lemma(v):
    f = io.StringIO()
    with redirect_stderr(f):
        r = annotate([v])
    err = f.getvalue()
    gs = [x for x in r[0] if hasattr(x, "goals") and x.goals != []]
    if gs != []:
        g = gs[-1].goals[0]
        return g, err
    return None, err

def lemma_statement(g):
    s = ""
    for h in g.hypotheses:
        s += "forall " + " ".join(h.names) + " : " + h.type + ", "
    s += g.conclusion
    return s

def lemma_args(g):
    return " ".join([" ".join(h.names) for h in g.hypotheses])

def new_conclusion(goal, code):
    conclusion = goal.conclusion.split(",")[-1].strip() # TODO: a bit crude?
    return conclusion not in code
