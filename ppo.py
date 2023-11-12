from peft import LoraConfig, PeftModel
import torch
from transformers import AutoModelForCausalLM, BitsAndBytesConfig, AutoTokenizer, TrainingArguments
from trl import AutoModelForCausalLMWithValueHead, PPOConfig, PPOTrainer

from model import base_model_name, peft_model_path

config = PPOConfig(
    model_name=base_model_name,
    learning_rate=1.41e-5,
    #log_with='wandb',
    mini_batch_size=1,
    batch_size=1,
    gradient_accumulation_steps=1,
    early_stopping=False,
    target_kl=6.0,
    kl_penalty="kl",
    seed=0,
    use_score_scaling=False,
    use_score_norm=False,
    score_clip=None,
)

peft_config = LoraConfig(
    lora_alpha=16,
    #lora_dropout=0.1,
    r=16,
    bias="none",
    task_type="CAUSAL_LM",
)

bnb_config = BitsAndBytesConfig(
    load_in_4bit=True,
    bnb_4bit_quant_type="nf4",
    bnb_4bit_compute_dtype=torch.float16,
)

base_model = AutoModelForCausalLM.from_pretrained(
    base_model_name,
    quantization_config=bnb_config,
    device_map="auto",
    trust_remote_code=True,
    use_auth_token=True,
)
base_model.config.use_cache = False

# More info: https://github.com/huggingface/transformers/pull/24906
base_model.config.pretraining_tp = 1

tokenizer = AutoTokenizer.from_pretrained(base_model_name, trust_remote_code=True)
tokenizer.pad_token = tokenizer.eos_token

model = PeftModel.from_pretrained(base_model, peft_model_path) if peft_model_path else base_model

model = AutoModelForCausalLMWithValueHead.from_pretrained(
    model,
    trust_remote_code=True,
    device_map="auto",
    peft_config=peft_config)

ppo_trainer = PPOTrainer(
    model=model,
    config=config,
    tokenizer=tokenizer,
)

stop_words_ids = [tokenizer(stop_word, return_tensors='pt')['input_ids'].squeeze().to('cuda') for stop_word in ["\n"]]

model_generation_args = dict(
    min_length = 5,
    top_k = 7,
    top_p = 0.9,
    do_sample = True,
    temperature = 0.8,
    #streamer=streamer,
    max_new_tokens=100,
    eos_token_id=stop_words_ids[0].tolist(), pad_token_id=tokenizer.eos_token_id
)

def generate(prompt):
    model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
    qs = [model_input["input_ids"].squeeze(0)]
    ts = ppo_trainer.generate(qs, batch_size=1, **model_generation_args)
    rs = [tokenizer.decode(t.squeeze(), skip_special_tokens=True) for t in ts]
    text = rs[0]
    return (text, (qs, ts))

# ppo_trainer.save_pretrained("my_ppo_model")
