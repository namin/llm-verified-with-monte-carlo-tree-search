from cmdline import args
import sys
import time
import numpy as np

n_trials = args.n_trials
experiment_name = args.experiment_name
mins_timeout = args.mins_timeout

secs_timeout = None
if mins_timeout is not None:
    secs_timeout = mins_timeout * 60


# probably use a switch statement to let the cli flag specify which experiment to run
# note that some run*.py files have a main() to call and others have a run() to call 

match experiment_name:
    case "run.py":
        from run import main, reset_cache
    
    case "run_whole.py":
        from run_whole import main, reset_cache

    case "run_verifier_feedback.py":
        from run_verifier_feedback import main, reset_cache

    case "run_meta.py":
        from run_meta import main, reset_cache

    case "run_incomplete.py":
        from run_incomplete import main, reset_cache

    case "run_focus.py":
        from run_focus import main, reset_cache

    case "run_diversity.py":
        from run_diversity import main, reset_cache

    case "run_dfs_no_backtrack.py":
        from run_dfs_no_backtrack import main, reset_cache

    case "run_dfs_backtrack_to_perfect.py":
        from run_dfs_backtrack_to_perfect import main, reset_cache
    
    case "run_intermediate_expansion.py":
        from run_intermediate_expansion import main, reset_cache

    case "run_clover.py":
        from run_clover import main, reset_cache

    case _:
        print('invalid program name')
        exit()

trial_calls_all = []
trial_times_all = []

trial_calls_no_timeout = []
trial_times_no_timeout = []

trial_calls_timeout = []
trial_times_timeout = []

def print_summary(trial_calls, trial_times, trial_type):
    if trial_calls == []:
        return

    min_time = np.min(trial_times)
    max_time = np.max(trial_times)
    avg_time = np.mean(trial_times)
    std_dev_time = np.std(trial_times)

    min_calls = np.min(trial_calls)
    max_calls = np.max(trial_calls)
    avg_calls = np.mean(trial_calls)
    std_dev_calls = np.std(trial_calls)

    print(f"=====SUMMARY STATISTICS FOR {trial_type} TRIALS=====\n")
    print(f"Experiment: {experiment_name} for {n_trials} trials\n")
    print(f"Trial times: {trial_times}\n")
    print(f"Trial calls: {trial_calls}\n\n")
    print(f"Time Statistics:\n")
    print(f"  Min: {min_time:.2f} sec, Max: {max_time:.2f} sec, Average: {avg_time:.2f} sec, Standard Deviation: {std_dev_time:.2f} sec\n")
    print(f"Call Statistics:\n")
    print(f"  Min: {min_calls} calls, Max: {max_calls} calls, Average: {avg_calls:.2f} calls, Standard Deviation: {std_dev_calls:.2f} calls\n")


for i in range(n_trials):
    print("Trial ", i+1)
    reset_cache()
    start_time = time.time()
    cache = main(mins_timeout)
    end_time = time.time() 

    duration_sec = round(end_time - start_time) 

    calls_made = 0
    for key, value in cache.items():
        calls_made += value

    trial_calls_all.append(calls_made)
    trial_times_all.append(duration_sec)

    if secs_timeout is not None and duration_sec >= secs_timeout:
        trial_calls_timeout.append(calls_made)
        trial_times_timeout.append(duration_sec)
    elif secs_timeout is not None:
        trial_calls_no_timeout.append(calls_made)
        trial_times_no_timeout.append(duration_sec)

    print_summary(trial_calls_all, trial_times_all, "ALL")
    print_summary(trial_calls_timeout, trial_times_timeout, "TIMED OUT")
    print_summary(trial_calls_no_timeout, trial_times_no_timeout, "NON_TIMED OUT")
