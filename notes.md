## Command line flags

1. Go through each file and make a note of which flags it uses

Perhaps make each flag optional:

- `common_diversity`: `DIVERSITY`
- `common.py`: `max_completion_depth`
- `execute.py`: `livecode`
- `lang_config.py`: `LANG`
- `model_config.py`: `MODEL_HOST`, BASE_MODEL_NAME, PEFT_MODEL_PATH, PPO_MODEL_PATH, CUSTOM_STOP, SAME_FOR_MANY_SAMPLES, BEAM_SEARCH, MODEL_ARG_TOP_K = 0.0, MODEL_ARG_TOP_P = 1.0, MODEL_ARG_TEMP = 1.0
- `prompts.py`: make a `problem_name` flag and change line 683 with it. right now, we manually type what problem we want in that line, and that is how the prompt is extracted


- `run_check.py`: n_success_goal
- `run_focus.py`: USE_HAMMER = True, SHOW_MISTAKES = False, INTERACTIVE = False
- `run_meta.py`: USE_HAMMER = True, EXTRACT_LEMMA_DEPTH = 1, EXPLORE_MANY = True

- `run_ppo_block.py`: n_iter
- `run_ppo_check.py`: n_success_goal
- `run_ppo_user.py`: n_iter,
- `run_ppo.py`: n_iter
- `run_whole.py`: GREEDY


2. Create a cmdline.py file that stores all the flags

3. Go through each file that I listed above and instead of hardcoding flags, import from `cmdline.py`