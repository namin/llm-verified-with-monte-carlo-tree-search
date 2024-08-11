def findall_code(msg, re_code):
    m = re.findall(re_code, msg, re.MULTILINE | re.DOTALL)
    return [x[1] for x in m]

def filter_code_re(msg: str, re_code: str) -> str:
    r = "\n".join(findall_code(msg, re_code))
    return r

def make_filter_code(re_code: str) -> str:
    return lambda msg: filter_code_re(msg, re_code)
