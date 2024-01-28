import hashlib
import os

from cmdline import args

livecode = args.livecode

# Only set to True for lightweight testing.
# livecode = False

if livecode:
    print("WARNING: livecode is True. Be gentle!")


# todo: variable names and types
def execute(cmd, ext, v):
    HOME = os.environ["HOME"]
    TMP_DIR = f"{HOME}/tmp/llm-verified/{ext}/"
    key = hashlib.md5(v.encode("utf-8")).hexdigest()
    dir = "%s%s/" % (TMP_DIR, key)
    old_dir = os.getcwd()
    if not os.path.exists(dir):
        os.makedirs(dir)
    os.chdir(dir)

    try:
        fn = f"ex.{ext}"
        outfn = "out.txt"
        errfn = "err.txt"

        f = open(fn, "w")
        f.write(v)
        f.close()

        status = os.system("timeout 10 %s %s >%s 2>%s" % (cmd, fn, outfn, errfn))

        f = open(outfn, "r")
        outlog = f.read()
        f.close()

        f = open(errfn, "r", encoding='utf-8')
        log = f.read()
        f.close()

        sys_error_prefix = "sh: line 1:"
        if log.startswith(sys_error_prefix):
            raise RuntimeError(
                log[len(sys_error_prefix) :]
                + " -- install tool locally or set livecode to True for lightweight testing"
            )
    finally:
        os.chdir(old_dir)

    return {"status": status, "log": log, "out": outlog}
