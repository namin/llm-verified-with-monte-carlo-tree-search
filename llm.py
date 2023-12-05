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
    model_generation_args = huggingface_generate.get_model_generation_args(tokenizer)

    def gen(
        prompt, model_generation_args, num=1, return_hiddens=False, **kwargs
    ) -> List[str]:
        args = {**model_generation_args, **kwargs}
        num = num or 1
        model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
        model.eval()
        with torch.no_grad():
            generate_dict = model.generate(
                **model_input,
                num_return_sequences=num,
                output_hidden_states=return_hiddens,
                return_dict_in_generate=True,
                use_cache=True,
                **args
            )
            ts = generate_dict.sequences
            rs = [tokenizer.decode(t, skip_special_tokens=True) for t in ts]
        if return_hiddens:
            # Select features for last token by ignoring padding tokens
            eos_idxs = []
            for t in ts:
                suffix = t[len(model_input["input_ids"][0]) :]
                if tokenizer.eos_token_id in suffix:
                    eos_idxs.append(suffix.tolist().index(tokenizer.eos_token_id))
                else:
                    eos_idxs.append(len(suffix))
            layer_idx = -1
            layer = [
                generate_dict.hidden_states[eos_idxs[i] - 1][layer_idx][i, -1, :]
                for i in range(num)
            ]
            layer = torch.stack(layer, dim=0).reshape(num, -1)
            return rs, layer
        return rs

    def generate(prompt: str, num: str, return_hiddens=False, **kwargs) -> List[str]:
        return gen(prompt, model_generation_args, num, return_hiddens, **kwargs)

else:
    assert False
