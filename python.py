from execute import execute, livecode
import requests
import re
from typing import Optional
from collections.abc import Callable

def create_comment(msg: str) -> str:
    return f"'''\n{msg}\n'''"

def find_first_index(string, char1, char2):
    try:
        index1 = string.index(char1)
    except ValueError:
        index1 = float('inf')  # If char1 is not found, set to infinity

    try:
        index2 = string.index(char2)
    except ValueError:
        index2 = float('inf')  # If char2 is not found, set to infinity

    if index1 == float('inf') and index2 == float('inf'):
        return -1  # If neither character is found
    else:
        return min(index1, index2)  # Return the minimum index

def calculate_code_score_with_err(v: str, code_maybe_incomplete: Callable[[int],bool]) -> (Optional[float], Optional[str]):
    # If the last line is not return, we should keep generating code
    if v == "" or (not v.splitlines()[-1].strip().startswith('return')): 
        return None, None
    v = v.strip()
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, None
    log = r["log"]
    print(log)
    marker = "ex.py\", line "
    first = log[log.rindex(marker) + len(marker):]
    num_line_first = int(first[0 : find_first_index(first, '\n', ',')])
    if code_maybe_incomplete(num_line_first):
        return None, None
    err = log
    return -1.0, err

re_code_lang = "```([Pp]ython)?(.*?)```"

def check_code(v: str) -> dict:
    return execute("python3", "py", v, use_sandbox=True)

test_fwk = """
import sys
runningAllTests = True
def test(x):
	if not x:
		print('FALSE')
		sys.exit(1)
def finalReport():
	global runningAllTests
	if not runningAllTests:
		print('INCONCLUSIVE')
		sys.exit(0)
	else:
		print('TRUE')
		sys.exit(0)
"""
def run_unittests(v: str, unittest=None):
    file = v
    file += test_fwk
    foundAll = True
    for key, value in unittest.items():
        if v.find(key) != -1:
            file += value + "\n"
        else:
            file += "runningAllTests = False\n"
    file += "\nfinalReport()\n"
    print(file)
    return check_code(file)["status"]

