from model_config import MODEL_HOST
from typing import List

if MODEL_HOST == "openai":
    import openai_generate

    def generate(prompt: str, num: str) -> List[str]:
        return openai_generate.generate(prompt, num)

elif MODEL_HOST == "huggingface":
    import torch
    import huggingface_generate

    _, model, tokenizer = huggingface_generate.load_model()
    model_generation_args = huggingface_generate.get_model_generation_args(
        tokenizer
    )  # todo: types

    def gen(prompt, model_generation_args, num=1, return_hiddens=False) -> List[str]:
        num = num or 1
        model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
        model.eval()
        with torch.no_grad():
            generate_dict = model.generate(
                **model_input,
                num_return_sequences=num,
                output_hidden_states=return_hiddens,
                return_dict_in_generate=True,
                **model_generation_args
            )
            ts = generate_dict.sequences
            rs = [tokenizer.decode(t, skip_special_tokens=True) for t in ts]
        if return_hiddens:
            last_layer = generate_dict.hidden_states[-1][-1][:, -1, :]
            return rs, last_layer.reshape(num, -1)
        return rs

    def generate(prompt: str, num: str, return_hiddens=False) -> List[str]:
        return gen(prompt, model_generation_args, num, return_hiddens)

else:
    assert False
