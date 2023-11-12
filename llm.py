import torch
from transformers import AutoModelForCausalLM, BitsAndBytesConfig, AutoTokenizer, TextStreamer
from trl import AutoModelForCausalLMWithValueHead
from peft import PeftModel
from model import base_model_name, peft_model_path, ppo_model_path

bnb_config = BitsAndBytesConfig(
    load_in_4bit=True,
    bnb_4bit_quant_type="nf4",
    bnb_4bit_compute_dtype=torch.float16,
)
if ppo_model_path is None:
    base_model = AutoModelForCausalLM.from_pretrained(
        base_model_name,
        quantization_config=bnb_config,
        device_map="auto",
        trust_remote_code=True,
        use_auth_token=True
    )
    tokenizer = AutoTokenizer.from_pretrained(base_model_name, trust_remote_code=True)
else:
    base_model = AutoModelForCausalLMWithValueHead.from_pretrained(ppo_model_path, quantization_config=bnb_config)
    tokenizer = AutoTokenizer.from_pretrained(ppo_model_path)
tokenizer.pad_token = tokenizer.eos_token
if ppo_model_path is None:
    model = PeftModel.from_pretrained(base_model, peft_model_path) if peft_model_path else base_model
else:
    model = base_model
streamer = TextStreamer(tokenizer)

stop_words_ids = [tokenizer(stop_word, return_tensors='pt')['input_ids'].squeeze().to('cuda') for stop_word in ["\n"]]

model_generation_args = dict(
    top_k = 7,
    top_p = 0.9,
    do_sample = True,
    temperature = 0.8,
    #streamer=streamer,
    max_new_tokens=100,
    eos_token_id=stop_words_ids[0], pad_token_id=tokenizer.eos_token_id
)

def generate(prompt, num):
    return gen(prompt, model_generation_args, num)

def gen(prompt, model_generation_args, num=1):
    num = num or 1
    model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
    model.eval()
    with torch.no_grad():
        ts = model.generate(**model_input,
                            num_return_sequences = num,
                            **model_generation_args)
        rs = [tokenizer.decode(t, skip_special_tokens=True) for t in ts]
    return rs

if __name__ == '__main__':
    from prompts import prompt, max_new_tokens
    rs = gen(prompt, {'max_new_tokens': max_new_tokens})
    print(rs[0])
