import torch
from transformers import AutoModelForCausalLM, BitsAndBytesConfig, AutoTokenizer
from trl import AutoModelForCausalLMWithValueHead
from peft import PeftModel
from lang import stop_word
from model import base_model_name, peft_model_path, ppo_model_path

custom_stop = True

bnb_config = BitsAndBytesConfig(
    load_in_4bit=True,
    bnb_4bit_quant_type="nf4",
    bnb_4bit_compute_dtype=torch.float16,
)

def load_model():
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
    model = PeftModel.from_pretrained(base_model, peft_model_path) if peft_model_path else base_model
    return (base_model, model, tokenizer)

def stop_words_ids(tokenizer):
    # Hack: we want the stop word as it is encoded glued to another word.
    stop_word_id = tokenizer.encode("hello"+stop_word, add_special_tokens=False)[-1]
    quote_word_id = tokenizer.encode("```", add_special_tokens=False)[-1]
    return [stop_word_id, quote_word_id]

def get_model_generation_args(tokenizer):
    return dict(
        min_length = 5,
        top_k = 7,
        top_p = 0.9,
        do_sample = True,
        temperature = 0.8,
        #streamer=streamer,
        max_new_tokens=100,
        eos_token_id=stop_words_ids(tokenizer) if custom_stop else tokenizer.eos_token_id,
        pad_token_id=tokenizer.eos_token_id
    )

