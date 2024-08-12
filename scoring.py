from lang_config import LANG
from typing import Optional, Tuple, List

run_tests = False
if LANG == "Dafny":
    from dafny import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
    )
elif LANG == "Coq":
    from coq import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
        verifier_feedback,
        short_verifier_feedback,
    )
elif LANG == "Lean4":
    from lean import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
    )
elif LANG == "Rust":
    from rust import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
    )
elif LANG == "Scala":
    from scala import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
    )
elif LANG == "Python":
    from python import (
        create_comment,
        calculate_code_score_with_err,
        check_code,
        re_code_lang,
        run_unittests,
    )
    run_tests = True
else:
    assert False
if not run_tests:
    def run_unittests(v: str, unittest=None):
        return 0

from common_lang import make_filter_code, findall_code
filter_code = make_filter_code(re_code_lang)

def code_of_msg(msg: str) -> str:
    return filter_code(msg + "```").strip()

def make_code_is_incomplete(msg, v):
    return

def calculate_score_with_err(msg: str) -> (Optional[float], Optional[str], Optional[str]):
    v = code_of_msg(msg)
    code_maybe_incomplete = lambda num_line_first: filter_code(msg).strip() != v and (num_line_first is None or num_line_first >= v.count("\n"))
    score, err = calculate_code_score_with_err(v, code_maybe_incomplete)
    return score, err, v

def calculate_score(msg: str) -> (Optional[float], Optional[str]):
    score, _, v = calculate_score_with_err(msg)
    return score, v

def create_hint(msg: str, err: str) -> str:
    return '\n'+create_comment(f"{msg}: {err}")+'\n'

if 'short_verifier_feedback' not in globals():
    def short_verifier_feedback(ok: str, not_ok: str) -> Optional[Tuple[str,str]]:
        _, err, _ = calculate_score_with_err(not_ok)
        if err:
            err = err.strip()
            return (None, err)
        return None

if 'verifier_feedback' not in globals():
    def verifier_feedback(ok: str, not_ok: str) -> Optional[str]:
        msg = "Consider previous issue"
        if msg in ok:
            return None
        _, err, _ = calculate_score_with_err(not_ok)
        if err:
            err = err.strip()
            hint = create_hint(msg, err)
            text = ok + hint
            return text
        return None

def score_unittest(v: str, score: float, unittest: str) -> Optional[float]:
    print("Preliminary SCORE")
    print(score)
    tscore = run_unittests(v, unittest)
    if tscore != 0:
        print("Unittest tscore ", tscore, "FAILED. Lowering score.")
        print("NEW SCORE")
        print("-1.0")
        return -1.0
    else:
        print("Unittest succeeded, tscore = ", tscore, "and score remains", score)
        return score

def amend_score(v: str, score: float, unittest: Optional[str] = None) -> Optional[float]:
    if unittest is None or score != 1.0:
        print("SCORE")
        print(score)
        return score
    else:
        assert v is not None
        return score_unittest(v, score, unittest)

def score_func(msg: str, unittest: Optional[str] = None, ret_code: bool = False) -> (Optional[float] | Tuple[Optional[float], str]):
    print("TEXT")
    print(msg)
    score, v = calculate_score(msg)
    score = amend_score(v, score, unittest)
    if ret_code:
        return score, v
    else:
        return score

def score_func_code(msg: str, unittest: Optional[str] = None) -> Tuple[Optional[float], str]:
    return score_func(msg, unittest, ret_code = True)
    
### Functions to work specifically with text output from run_whole.py

def filter_code_whole(msg: str) -> list[str]:
    return findall_code(msg, re_code_lang)

def code_is_complete(x):
    return False # code_maybe_incomplete is False

def calculate_score_with_err_whole(msg: str) -> (Optional[float], Optional[str], Optional[str]):
    vs = [s.strip() for s in filter_code_whole(msg + "```")]
    for v in vs:
        score, score_err = calculate_code_score_with_err(v, code_is_complete)
        if score is not None and score > 0.5:
            return score, score_err, v
    err = ""
    return -1.0, err, None

# favor the best score (possibly with code along)
# between the two scoring methods:
# - whole scores each chunck of code separately
# - default scores the concatenation of all chunks together
def best_of_scores(score, err, v, score_whole, err_whole, v_whole):
    if score == 1.0:
        return 1.0, err, v
    elif score_whole == 1.0:
        return 1.0, err_whole, v_whole
    elif score is None:
        return score_whole, err_whole, None
    else:
        return score, err, None

def calculate_score_err_whole(msg: str, unittest: Optional[str] = None) -> Tuple[Optional[float], Optional[str]]:
    score_whole, err_whole, v_whole = calculate_score_with_err_whole(msg)
    score, err, v = calculate_score_with_err(msg)
    print("SCORE")
    print(score)
    print("SCORE_WHOLE")
    print(score_whole)
    final_score, final_err, final_code = best_of_scores(score, err, v, score_whole, err_whole, v_whole)
    return amend_score(final_code, final_score, unittest), final_err

def score_func_whole(msg: str) -> Optional[float]:
    print("TEXT")
    print(msg)
    score, _ = calculate_score_err_whole(msg)
    print("SCORE_FINAL")
    print(score)
    return score
