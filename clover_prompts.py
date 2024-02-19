min_lines = 5
expansion_count = None

# Finds a non-trivial coding line.
def check_func(v):
    lines = v.split('\n')  # Split the string into lines
    for line in lines:
        # Strip leading and trailing whitespace and check if it starts with '//'
        if not line.lstrip().startswith('//'):
            return True  # Found a line that doesn't start with '//'
    return False  # All lines start with '//'
