from cmdline import args
import sys
import run
import time

n_trials = args.n_trials
experiment_name = args.experiment_name
mins_timeout = args.mins_timeout

trial_calls = []
trial_times = []

for i in range(n_trials):
    run.reset_cache()
    start_time = time.time()
    cache = run.main()
    end_time = time.time() 

    duration = end_time - start_time 

    calls_made = 0
    for key, value in cache.items():
        calls_made += value

    trial_calls.append(calls_made)
    trial_times.append(duration)
    
with open("test.txt", "a") as f:
    f.write(f"trial calls: {trial_calls}\n\n")

    

# probably use a switch statement to let the cli flag specify which experiment to run
# note that some run*.py files have a main() to call and others have a run() to call 