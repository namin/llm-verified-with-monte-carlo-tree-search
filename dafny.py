from execute import execute, livecode
import requests
from typing import Optional, Tuple, List
from collections.abc import Callable

def create_comment(msg: str) -> str:
    return f"\n/* {msg} */\n"

def calculate_code_score_with_err(v: str, code_maybe_incomplete: Callable[[int],bool]) -> (Optional[float], Optional[str]):
    if v == "":
        return None, None
    r = check_code(v)
    if "This ensures clause is part of a bodyless function" in r["out"]:
        return None, "axioms are forbidden"
    if r["status"] == 0:
        return 1.0, None
    log = r["out"]
    print(log)
    try:
        first = log[log.index("ex.dfy(") + 7 :]
    except ValueError:
        # might be a timeout
        return -1.0, ""
    num_line_first = int(first[0 : first.index(",")])
    if code_maybe_incomplete(num_line_first):
        return None, None
    else:
        err = first[first.index(":") :]
        try:
            err = err[: err.index("ex.dfy")]
        except ValueError:
            pass
        return -1.0, err

re_code_lang = "```([Dd]afny)?(.*?)```"

def check_code(v: str) -> dict:
    if livecode:
        r = requests.post("https://dafny.livecode.ch/check", data={"v": v})
        r.raise_for_status()
        return r.json()
    return execute("dafny verify", "dfy", v)

