import re
import requests

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterDafny(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def calculateScore(msg):
    v = filterDafny(msg+"```")
    if v == "":
        return None
    r = checkDafny(v)
    if r['status'] == 0:
        return 0.6
    log = r['out']
    first = log[log.index('ex.dfy(')+7:]
    num_line_first = int(first[0:first.index(',')])
    if num_line_first > 1+v.strip().count('\n'):
        return None
    else:
        return -1.0

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
