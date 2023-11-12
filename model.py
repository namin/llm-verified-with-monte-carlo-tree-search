base_model_name = "Phind/Phind-CodeLlama-34B-v2"
#base_model_name = "codellama/CodeLlama-34b-hf"
#base_model_name = "deepseek-ai/deepseek-coder-33b-instruct"
# optional checkpoint
peft_model_path = None
# PPO model -- overrides the above
ppo_model_path = "./my_ppo_model"
# set to None for run.py to instead use base model (and optionl peft)
ppo_model_path = None
