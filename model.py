# Pick one base model.
#base_model_name = "Phind/Phind-CodeLlama-34B-v2"
base_model_name = "codellama/CodeLlama-34b-hf"
#base_model_name = "deepseek-ai/deepseek-coder-33b-instruct"

# Provide an optional checkpoint on top of the base model.
peft_model_path = None

# Or pick an entire PPO model -- overrides all the above.
ppo_model_path = "./my_ppo_model"
# Set to None for run.py to instead use base model (and optional peft).
ppo_model_path = None
