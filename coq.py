from execute import execute

from contextlib import redirect_stderr
import io
from alectryon.serapi import annotate

import re

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterCoq(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def verifier_feedback(ok, not_ok):
    try:
        not_ok_first = not_ok[0:not_ok.index('.', len(ok))]
    except ValueError:
        return None
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
    r = checkCoq(v, giveDetails=True)
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

def checkCoq(v, giveDetails=False):
    r = execute('coqc', 'v', v)
    status = r['status']
    log = r['log']
    outlog = r['out']
    
    details = ""
    context = ""
    if giveDetails and log != "":
        f = io.StringIO()
        with redirect_stderr(f):
            r = annotate([v])
        context = f.getvalue()
        gs = [x for x in r[0] if hasattr(x, "goals") and x.goals != []]
        if gs != []:
            details = pretty_goals(gs[-1].goals)
    
    return {'status': status, 'log': log, 'out': outlog, 'details': details, 'context': context}

def pretty_goals(goals):
    return "\n".join([pretty_goal(goal) for goal in goals])

def pretty_goal(goal):
    assumptions = ', '.join([pretty_hypothesis(h) for h in goal.hypotheses])
    if assumptions == '':
        assumptions = 'no assumptions'
    return f"Need to show {goal.conclusion} given {assumptions}."

def pretty_hypothesis(h):
    return f"{','.join(h.names)}:{h.type}"
