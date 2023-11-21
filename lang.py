from lang_config import LANG

if LANG == "Dafny":
    from dafny import (
        score_func,
        can_be_solution,
        verifier_feedback,
        filter_code,
        check_code,
    )
elif LANG == "Coq":
    from coq import (
        score_func,
        can_be_solution,
        verifier_feedback,
        filter_code,
        check_code,
    )
elif LANG == "Lean4":
    from lean import (
        score_func,
        can_be_solution,
        verifier_feedback,
        filter_code,
        check_code,
    )

else:
    assert False


def find_largest_new_block(old_text: str, text: str) -> str:
    return find_largest_new_block_code(
        filter_code(old_text + "```").strip(), filter_code(text + "```").strip()
    )


def find_largest_new_block_code(old_code: str, code: str) -> str:
    while len(old_code) < len(code):
        r = check_code(code)
        if r["status"] == 0:
            return code
        try:
            code = code[0 : code.rindex(stop_word)].strip()
        except ValueError:
            return None
    return None
