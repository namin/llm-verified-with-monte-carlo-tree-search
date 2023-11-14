import re
import requests

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterDafny(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def verifier_feedback(ok, not_ok):
    _, error_case = calculateScoreHelper(not_ok)
    if error_case:
        err, num_line_first = error_case
        rest = not_ok
        n = num_line_first-1
        while n > 0:
            n -= 1
            rest = rest[rest.index('\n'):]
        try:
            rest = rest[:rest.index('\n')]
        except ValueError:
            pass
        text = ok
        text += f"\n/* {rest}\navoid\n{err}\n*/"
        return text
    return None

def calculateScore(msg):
    score, _ = calculateScoreHelper(msg)
    return score

def calculateScoreHelper(msg):
    v = filterDafny(msg+"```")
    if v == "":
        return None, None
    r = checkDafny(v)
    if r['status'] == 0:
        return 1.0, None
    log = r['out']
    print(log)
    first = log[log.index('ex.dfy(')+7:]
    num_line_first = int(first[0:first.index(',')])
    if num_line_first > 1+v.strip().count('\n'):
        return None, None
    else:
        err = first[first.index(':'):]
        try:
            err = err[:err.index('ex.dfy')]
        except ValueError:
            pass
        return -1.0, (err, num_line_first)

def score_func(sentence):
    print('TEXT')
    print(sentence)
    score = calculateScore(sentence)
    print('SCORE')
    print(score)
    return score

def filterDafny(msg):
    m = re.findall('```([Dd]afny)?(.*?)```', msg, re.MULTILINE|re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r

def checkDafny(v):
    r = requests.post("https://dafny.livecode.ch/check", data = { 'v': v })
    r.raise_for_status()
    return r.json()
