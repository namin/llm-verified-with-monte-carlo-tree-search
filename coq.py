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
    # TODO: make this clearer
    first = log[log.index('line ')+len('line '):]
    num_line_first = int(first[0:first.index(',')])
    char = first[first.index('-')+1:]
    char_index = int(char[0:char.index(':')])
    left = v
    n = num_line_first-1
    while n > 0:
        n -= 1
        left = left[left.index('\n')+1:]
    left = left[char_index+1:]
    if  '.' in left:
        return -1.0
    else:
        return None

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
