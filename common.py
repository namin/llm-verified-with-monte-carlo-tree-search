from prompts import max_depth
from cmdline import args

max_completion_depth = args.max_completion_depth

# max_completion_depth = 30

def count_depth(node, f=lambda x: x):
    depth = 1
    curr = node

    while (curr.parent is not None):
        if f(curr.state) != f(curr.parent.state):
            depth += 1
        curr = curr.parent

    return depth

def limit_depth(node, f=lambda x: x):
    if max_depth is not None:
        depth = count_depth(node, f)
        if depth >= max_depth:
            node.update_win_value(-100)
            return True
    return False
