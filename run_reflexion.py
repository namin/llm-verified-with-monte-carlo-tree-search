import time
from cmdline import args
from lang import can_be_solution_whole
from lang import code_of_msg
from prompts import prompt, min_lines, check_func, check_string
from scoring import calculate_score_err_whole
from reflection import reflect
import llm
from common import limit_tokens
from lang_config import LANG

import wandb

if args.use_wandb:
    wandb.init(
        entity=args.wandb_entity,
        project=args.wandb_project,
        group=args.wandb_group,
        config=args.dict(),
        name=args.wandb_name,
    )


def buildPrompt(prompt, text=None, err=None):
    if text is not None:
        r = reflect(code_of_msg(text), None, err)
    else:
        r = None
    if "CODE" in prompt:
        prompt = prompt.split("CODE")[0]
    if r:
        prompt += "\nTURN:\n"
        prompt += r
    prompt += "\n\nCODE:\n"
    prompt += "\n\n```dafny\n"
    return prompt


def trial(prompt, trial_id=0):
    print("PROMPT: [[\n", prompt, "\n]]")
    stats = {"trial_id": trial_id}
    init_n_tokens = llm.token_counter
    init_time = time.time()

    text = llm.generate_full(prompt, max_new_tokens=1000)
    score, err = calculate_score_err_whole(text)
    is_solution = (
        score is not None
        and score > 0
        and can_be_solution_whole(text, min_lines, check_func, check_string)
    )

    score_sign = 0 if score is None else (1 if score > 0 else -1)
    stats["time"] = time.time() - init_time
    stats["text"] = text
    stats["is_solution"] = 1 if is_solution else 0
    stats["score_sign"] = score_sign
    stats["n_tokens"] = llm.token_counter - init_n_tokens

    if is_solution:
        print("DONE")
        return True, text, stats
    else:
        return False, buildPrompt(prompt, text, err), stats


def main(prompt=prompt):
    prompt = buildPrompt(prompt.replace(f"```{LANG.lower()}", ""))
    init_time = time.time()

    done = False
    trials = 0
    while not done:
        trials += 1
        solved, prompt, stats = trial(prompt, trial_id=trials)
        if args.use_wandb:
            wandb.log(stats)
        print("Token counter: ", llm.token_counter, ", Trial: ", trials)
        done = solved or limit_tokens()
        print("Token limit: ", limit_tokens())

    if args.use_wandb:
        final_stats = {}
        final_stats["final/n_trials"] = trials
        final_stats["final/n_tokens"] = llm.token_counter
        final_stats["final/time"] = time.time() - init_time
        final_stats["final/solved"] = 1 if solved else 0
        wandb.log(final_stats)


if __name__ == "__main__":
    main()
