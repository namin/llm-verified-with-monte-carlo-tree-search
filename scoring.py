from lang_config import LANG
import re
from typing import Optional, Tuple, List

run_tests = False
if LANG == "Dafny":
    from dafny import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang
    )
elif LANG == "Coq":
    from coq import (
        score_func,
        score_func_whole,
        verifier_feedback,
        short_verifier_feedback,
        filter_code,
        filter_code_whole,
        check_code,
    )
elif LANG == "Lean4":
    from lean import (
        score_func,
        verifier_feedback,
        filter_code,
        check_code,
    )
elif LANG == "Rust":
    from rust import (
        score_func,
        verifier_feedback,
        filter_code,
        check_code,
    )
elif LANG == "Scala":
    from scala import (
        score_func,
        verifier_feedback,
        filter_code,
        check_code,
    )
elif LANG == "Python":
    from python import (
        score_func,
        score_func_whole,
        verifier_feedback,
        filter_code,
        filter_code_whole,
        check_code,
        run_unittests,
    )
    run_tests = True
else:
    assert False

def findall_code(msg, re_code):
    m = re.findall(re_code, msg, re.MULTILINE | re.DOTALL)
    return [x[1] for x in m]

def filter_code(msg: str) -> str:
    r = "\n".join(findall_code(msg, re_code_lang))
    return r

def make_code_is_incomplete(msg, v):
    return

def calculate_score_with_err(msg: str) -> (Optional[float], Optional[str]):
    v = filter_code(msg + "```").strip()
    code_maybe_incomplete = lambda num_line_first: filter_code(msg).strip() != v and num_line_first >= v.count("\n")
    return calculate_code_score_with_err(v, code_maybe_incomplete)

def calculate_score(msg: str) -> Optional[float]:
    score, _ = calculate_score_with_err(msg)
    return score

def short_verifier_feedback(ok: str, not_ok: str) -> Optional[Tuple[str,str]]:
    _, err = calculate_score_with_err(not_ok)
    if err:
        err = err.strip()
        return (None, err)
    return None

def create_hint(msg: str, err: str) -> str:
    return create_comment(f"{msg}: {err}")

def verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
    msg = "Consider previous issue"
    if msg in ok:
        return None
    _, err = calculate_score_with_err(not_ok)
    if err:
        err = err.strip()
        hint = create_hint(msg, err)
        text = ok + hint
        return text
    return None

def score_func(sentence: str) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculate_score(sentence)
    print("SCORE")
    print(score)
    return score

### Functions to work specifically with text output from run_whole.py

def filter_code_whole(msg: str) -> list[str]:
    return findall_code(msg, re_code_lang)

def calculate_score_with_err_whole(msg: str) -> (Optional[float], Optional[str]):
    vs = [s.strip() for s in filter_code_whole(msg + "```")]
    for v in vs:
        score, score_err = calcuate_code_score(v)
        if score is not None and score > 0.5:
            return score, score_err
    err = ""
    return -1.0, err

def calculate_score_whole(msg: str) -> Optional[float]:
    score_whole, _ = calculate_score_with_err_whole(msg)
    score, _ = calculate_score_with_err(msg)
    print("SCORE")
    print(score)
    print("SCORE_WHOLE")
    print(score_whole)
    # always return the better of the two scores
    if score_whole:
        if score_whole == 1.0:
            return 1.0
        if score is None:
            return score_whole
        return score
    return score

def score_func_whole(sentence: str) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculate_score_whole(sentence)
    print("SCORE_FINAL")
    print(score)
    return score
