from execute import execute, livecode
import requests
import re
from typing import Optional
from collections.abc import Callable

def create_comment(msg: str) -> str:
    return f"/* {msg} */"

def calculate_code_score_with_err(v: str, code_maybe_incomplete: Callable[[int],bool]) -> (Optional[float], Optional[str]):
    if v == "":
        return None, None
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, None
    log = r["log"]
    print(log)
    first = log[log.rindex("ex.scala:") + 9 :]
    num_line_first = int(first[0 : first.index(":")])
    if code_maybe_incomplete(num_line_first):
        return None, None
    else:
        err = log
        return -1.0, err

re_code_lang = "```([Ss]cala)?(.*?)```"

def check_code(v: str) -> dict:
    return execute("scalac --color never -explain", "scala", v)
