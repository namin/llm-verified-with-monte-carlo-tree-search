from scoring import (
    run_tests,
    score_func,
    score_func_whole,
    short_verifier_feedback,
    verifier_feedback,
    filter_code,
    filter_code_whole,
)

def can_be_solution(
    msg: str, min_lines: int, check_func=None, check_string=None, unittests=None
) -> bool:
    if not (msg.count("```") % 2 == 0):
        return False
    v = filter_code(msg)
    r = v.count("\n") >= min_lines
    if r and check_func:
        r = check_func(v)
    if r and check_string:
        print("FINAL CHECK")
        print(v + check_string)
        r = check_code(v + check_string)["status"] == 0
    if r and unittests:
        print("FINAL UNITTEST")
        r = run_unittests(v, unittests) == 0
    return r


def can_be_solution_whole(
    msg: str, min_lines: int, check_func=None, check_string=None
) -> bool:
    if not (msg.count("```") % 2 == 0):
        return False
    vs = filter_code_whole(msg)
    for v in vs:
        if can_be_solution("```" + v + "```", min_lines, check_func, check_string):
            return True
    return False


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
