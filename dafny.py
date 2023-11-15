import hashlib
import os
import re

def can_be_solution(msg, min_lines, check_fun=None):
    v = filterDafny(msg)
    r = v.count('\n') >= min_lines
    if r and check_fun:
        r = check_fun(v)
    return r

def verifier_feedback(ok, not_ok):
    msg = "Consider previous issue"
    if msg in ok:
        return None
    _, err = calculateScoreHelper(not_ok)
    if err:
        err = err.strip()
        hint = f"\n/* {msg}: {err} */\n"
        text = ok+hint
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
        return -1.0, err

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
    TMP_DIR = '/tmp/dafny/'
    key = hashlib.md5(v.encode('utf-8')).hexdigest()
    dir = "%s%s/" % (TMP_DIR, key)
    old_dir = os.getcwd()
    if not os.path.exists(dir):
        os.makedirs(dir)
    os.chdir(dir)

    try:
        fn = 'ex.dfy'
        outfn = 'out.txt'
        errfn = 'err.txt'

        f = open(fn, 'w')
        f.write(v)
        f.close()

        status = os.system("dafny verify %s >%s 2>%s" % (fn, outfn, errfn))

        f = open(outfn, 'r')
        outlog = f.read()
        f.close()

        f = open(errfn, 'r')
        log = f.read()
        f.close()
    finally:
        os.chdir(old_dir)

    return {'status': status, 'log': log, 'out': outlog}
