import torch
from transformers import AutoModelForCausalLM, BitsAndBytesConfig, AutoTokenizer
from trl import AutoModelForCausalLMWithValueHead
from peft import PeftModel
from lang_config import STOP_WORD
from model_config import BASE_MODEL_NAME, PEFT_MODEL_PATH, PPO_MODEL_PATH, CUSTOM_STOP


def load_model(
    base_model_name: str = BASE_MODEL_NAME,
    ppo_model_path: str = PPO_MODEL_PATH,
    peft_model_path: str = PEFT_MODEL_PATH,
) -> (AutoModelForCausalLM, PeftModel, AutoTokenizer):
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
            use_auth_token=True,
        )
        tokenizer = AutoTokenizer.from_pretrained(
            base_model_name, trust_remote_code=True
        )
    else:
        base_model = AutoModelForCausalLMWithValueHead.from_pretrained(
            ppo_model_path, quantization_config=bnb_config
        )
        tokenizer = AutoTokenizer.from_pretrained(ppo_model_path)
    tokenizer.pad_token = tokenizer.eos_token
    model = (
        PeftModel.from_pretrained(base_model, peft_model_path)
        if peft_model_path
        else base_model
    )
    return (base_model, model, tokenizer)


def stop_words_ids(tokenizer: AutoTokenizer):
    # Hack: we want the stop word as it is encoded glued to another word.
    stop_word_id = tokenizer.encode("hello" + STOP_WORD, add_special_tokens=False)[-1]
    quote_word_id = tokenizer.encode("```", add_special_tokens=False)[-1]
    return [stop_word_id, quote_word_id]


def get_model_generation_args(
    tokenizer: AutoTokenizer, custom_stop: bool = CUSTOM_STOP
):
    return dict(
        min_length=5,
        top_k=7,
        top_p=0.9,
        do_sample=True,
        temperature=0.8,
        # streamer=streamer,
        max_new_tokens=100,
        eos_token_id=stop_words_ids(tokenizer)
        if custom_stop
        else tokenizer.eos_token_id,
        pad_token_id=tokenizer.eos_token_id,
    )
