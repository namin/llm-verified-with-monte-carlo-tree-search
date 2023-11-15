import hashlib
import os

def execute(cmd, ext, v):
    TMP_DIR = f'/tmp/{ext}/'
    key = hashlib.md5(v.encode('utf-8')).hexdigest()
    dir = "%s%s/" % (TMP_DIR, key)
    old_dir = os.getcwd()
    if not os.path.exists(dir):
        os.makedirs(dir)
    os.chdir(dir)

    try:
        fn = f'ex.{ext}'
        outfn = 'out.txt'
        errfn = 'err.txt'

        f = open(fn, 'w')
        f.write(v)
        f.close()

        status = os.system("%s %s >%s 2>%s" % (cmd, fn, outfn, errfn))

        f = open(outfn, 'r')
        outlog = f.read()
        f.close()

        f = open(errfn, 'r')
        log = f.read()
        f.close()
    finally:
        os.chdir(old_dir)

    return {'status': status, 'log': log, 'out': outlog}
