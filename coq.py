import re
import requests

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterCoq(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def calculateScore(msg):
    v = filterCoq(msg+"```")
    if v == "":
        return None
    r = checkCoq(v)
    if r['status'] == 0:
        return 1.0
    log = r['log']
    print(log)
    if log.startswith('Error: There are pending proofs'):
        return 1.0
    first = log[log.index('line ')+len('line '):]
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

def filterCoq(msg):
    m = re.findall('```([Cc]oq)?(.*?)```', msg, re.MULTILINE|re.DOTALL)
    r = "\n".join([x[1] for x in m])
    return r

def checkCoq(v):
    r = requests.post("https://coq.livecode.ch/check", data = { 'v': v })
    r.raise_for_status()
    return r.json()
