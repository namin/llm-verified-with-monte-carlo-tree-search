import re
import requests

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterCoq(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def verifier_feedback(ok, not_ok):
    not_ok_first = not_ok[0:not_ok.index('.', len(ok))]
    r = checkDetails(not_ok_first)
    details = r['details']
    if details and details not in ok:
        print('DETAILS')
        print(details)
        text = ok
        text += '\n(* '+details+' *)\n'
        v = filterCoq(not_ok+"```")
        r = checkCoq(v)
        log = r['log']
        err = log[log.index(':'):]
        left = leftAfterError(v, log)
        rest = not_ok[len(ok):-len(left)]
        text += f"(* DO NOT DO \n{rest}\nbecause of\n{err} *)"
        return text
    return None

def checkDetails(msg):
    v = filterCoq(msg+"```")
    r = checkCoq(v, details=True)
    return r

def leftAfterError(v, log):
    start_line = log[log.index('line ')+len('line '):]
    num_line = int(start_line[0:start_line.index(',')])
    end_char = start_line[0:start_line.index(':')]
    char_index = int(end_char[end_char.rindex('-')+1:])
    left = v
    n = num_line-1
    while n > 0:
        n -= 1
        left = left[left.index('\n')+1:]
    left = left[char_index+1:]
    return left

def calculateScore(msg):
    v = filterCoq(msg+"```")
    if v == "":
        return None
    r = checkCoq(v)
    if r['status'] == 0:
        return 1.0
    log = r['log']
    print(log)
    if 'There are pending proofs' in log:
        return 1.0
    if 'Syntax Error: Lexer: Unterminated comment' in log:
        return 1.0
    if filterCoq(msg) == v:
        return -1.0
    left = leftAfterError(v, log)
    if  '.' in left or '\n' in left:
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

def checkCoq(v, details=False):
    r = requests.post(f"https://coq{'c' if details else ''}.livecode.ch/check", data = { 'v': v })
    r.raise_for_status()
    return r.json()
