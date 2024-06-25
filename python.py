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
        hint = f"\n # {msg}: {err}\n"
        text = ok + hint
        return text
    return None

def calculateScore(msg: str) -> Optional[float]:
    score, _ = calculateScoreHelper(msg)
    return score

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
        return -1  # If neither character is founds
    else:
        return min(index1, index2)  # Return the minimum index

def calculateScoreHelper(msg: str) -> (Optional[float], Optional[str]):
    v = filter_code(msg + "```")
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
    if filter_code(msg).strip() != v and num_line_first >= v.count("\n"):
        return None, None
    err = log
    return -1.0, err

def runUnittests(msg: str) -> (Optional[float], Optional[str]):
    v = filter_code(msg + "```").strip()
    if v == "":
        return None, None
    r = check_code(v)
    if r["status"] == 0:
        return 1.0, None
    log = r["log"]
    print(log)
    marker = "ex.py\", line "
    first = log[log.rindex(marker) + len(marker):]
    num_line_first = int(first[0 : find_first_index(first, '\n', ',')])
    if filter_code(msg).strip() != v and num_line_first >= v.count("\n"):
        return None, None
    err = log
    return -1.0, err

def filter_code(msg: str) -> str:
    m = re.findall("```([Pp]ython)?(.*?)```", msg, re.MULTILINE | re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r

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
def run_unittests(msg: str, unittest=None):
    v = filter_code(msg + "```").strip()
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

def score_func(sentence: str, unittest) -> Optional[float]:
    print("TEXT")
    print(sentence)
    score = calculateScore(sentence)
    if unittest is None or score != 1:
        print("SCORE")
        print(score)
        return score
    else:
        print("Preliminary SCORE")
        print(score)
        tscore = run_unittests(sentence, unittest)
        if tscore != 0:
            print("Unittest tscore ", tscore, "FAILED. Lowering score.")
            print("NEW SCORE")
            print("-1")
            return -1
        else:
            print("Unittest succeeded, tscore = ", tscore, "and score remains", score)
            return score

score_func_whole = score_func
filter_code_whole = filter_code


