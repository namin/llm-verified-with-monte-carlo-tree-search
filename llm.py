from model_config import MODEL_HOST
from typing import List

if MODEL_HOST == "openai":
    import openai_generate

    def generate(promptL: str, num: str) -> List[str]:
        return openai_generate.generate(prompt, num)

elif MODEL_HOST == "huggingface":
    import torch
    import huggingface_generate

    _, model, tokenizer = huggingface_generate.load_model()
    model_generation_args = huggingface_generate.get_model_generation_args(tokenizer)  # todo: types

    def gen(prompt, model_generation_args, num=1) -> List[str]:
        num = num or 1
        model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
        model.eval()
        with torch.no_grad():
            ts = model.generate(
                **model_input, num_return_sequences=num, **model_generation_args
            )
            rs = [tokenizer.decode(t, skip_special_tokens=True) for t in ts]
        return rs

    def generate(prompt: str, num: str) -> List[str]:
        return gen(prompt, model_generation_args, num)

else:
    assert False
