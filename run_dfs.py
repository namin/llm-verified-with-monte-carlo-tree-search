import llm

from lang import score_func, can_be_solution, verifier_feedback

from prompts import prompt, expansion_count, min_lines, check_func, check_cheat_func
from common import limit_depth, max_completion_depth

import random

solution = None

def generate_complete(text):
    text = llm.generate(text, 1)[0]
    score = score_func(text)
    if score is not None:
        if score < 0:
            return (text, score)
        else:
            if can_be_solution(text, min_lines, check_func):
                global solution
                solution = text
            return (text, score)
    else:
        return (text, 0.3)

def random_index(n):
    cs = []
    for i in range(0, n):
        for j in range(0, (n-i)**2):
            cs.append(i)
    return random.choice(cs)

def main():
    queue = [prompt]
    while solution is None and queue != []:
        text = queue[0]
        (text, score) = generate_complete(text)
        not_cheat = not check_cheat_func(text)
        if score > 0 and not_cheat:
            queue = [text] + queue
        else:
            i = random_index(len(queue))
            queue = queue[i:]
            if not_cheat and i==0:
                hint = verifier_feedback(queue[0], text)
                if hint:
                    queue = [hint] + queue

    print('CHOSEN SOLUTION')
    print(solution)

if __name__ == "__main__":
    main()
