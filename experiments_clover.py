import time
from cmdline import args
from clover_loader import dfy_annotation_iterator
from clover_config import TRAIN_PROMPTS, TEST_PROMPTS

args.clover = True

experiment_name = args.experiment_name

match experiment_name:
    case "run.py":
        from run import main as main_run, reset_cache
    case "run_intermediate_expansion.py":
        from run_intermediate_expansion import main as main_run, reset_cache
    case "run_whole.py":
        from run_whole import main as main_run, reset_cache
    case "run_verifier_feedback.py":
        from run_verifier_feedback import main as main_run, reset_cache
    case _:
        print('invalid program name')
        exit()

def main(mins_timeout = 10):
    secs_timeout = mins_timeout * 60
    if mins_timeout is not None:
        secs_timeout = mins_timeout * 60

    count = 0
    total = 0
    for prompt in dfy_annotation_iterator():
        # check if prompt is in test or train set
        method_name_start = prompt.find('method ') + len('method ')
        method_name_end = method_name_start
        while method_name_end < len(prompt) and prompt[method_name_end].isalnum():
            method_name_end += 1
        method_name = prompt[method_name_start:method_name_end]
        
        if TEST_PROMPTS and method_name not in TEST_PROMPTS:
            continue
        if method_name in TRAIN_PROMPTS:
            continue

        print(f"------Prompt: {total}")
        print(f"---Solved so far: {count}")
        
        reset_cache()
        start_time = time.time()
        cache = main_run(mins_timeout = mins_timeout, prompt = prompt)
        end_time = time.time()

        duration_sec = round(end_time - start_time)
        print(f"duration in seconds: {duration_sec}")

        calls_made = 0
        for key, value in cache.items():
            calls_made += value

        if secs_timeout is not None and duration_sec >= secs_timeout:
            pass
        else:
            count += 1
        total += 1
    
    ratio_correct = count / total
    print(f"Ratio correct: {ratio_correct}")
    return ratio_correct

if __name__ == "__main__":
    main()
