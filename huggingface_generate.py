import torch
from transformers import AutoModelForCausalLM, BitsAndBytesConfig, AutoTokenizer
from trl import AutoModelForCausalLMWithValueHead
from peft import PeftModel
from lang_config import STOP_WORD
from model_config import BASE_MODEL_NAME, PEFT_MODEL_PATH, PPO_MODEL_PATH, CUSTOM_STOP, SAME_FOR_MANY_SAMPLES, BEAM_SEARCH, MODEL_ARG_TOP_K, MODEL_ARG_TOP_P, MODEL_ARG_TEMP
from typing import List


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


def stop_words_ids(tokenizer: AutoTokenizer) -> List[int]:
    # Hack: we want the stop word as it is encoded glued to another word.
    stop_word_id = tokenizer.encode("hello" + STOP_WORD, add_special_tokens=False)[-1]
    quote_word_id = tokenizer.encode("```", add_special_tokens=False)[-1]
    return [stop_word_id, quote_word_id]


def get_model_generation_token_args(
        tokenizer: AutoTokenizer, custom_stop: bool = CUSTOM_STOP
):
    return dict(
        min_length=5,
        max_new_tokens=100,
        eos_token_id=stop_words_ids(tokenizer)
        if custom_stop
        else tokenizer.eos_token_id,
        pad_token_id=tokenizer.eos_token_id,
    )

def get_model_generation_search_args(
        num: int,
        beam_search: bool = BEAM_SEARCH
):
    if beam_search:
        return dict(
            num_beams=num,
            num_beam_groups=num,
            diversity_penalty=0.9,
        )
    else:
        return dict(
            top_k=MODEL_ARG_TOP_K if MODEL_ARG_TOP_K is not None else 50 if num>1 and not SAME_FOR_MANY_SAMPLES else 7,
            top_p=MODEL_ARG_TOP_P if MODEL_ARG_TOP_P is not None else 0.9,
            do_sample=True,
            temperature=MODEL_ARG_TEMP if MODEL_ARG_TEMP is not None else 0.9 if num>1 and not SAME_FOR_MANY_SAMPLES else 0.8,
        )
