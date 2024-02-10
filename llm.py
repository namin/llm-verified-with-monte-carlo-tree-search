from model_config import MODEL_HOST
from typing import List

if MODEL_HOST == "openai":
    import openai_generate

    def generate(prompt: str, num: int) -> List[str]:
        return openai_generate.generate(prompt, num)

    def generate_full(prompt: str) -> str:
        return generate(prompt, 1)[0]
    
elif MODEL_HOST == "huggingface":
    import torch
    import huggingface_generate
    from transformers import TextStreamer

    _, model, tokenizer = huggingface_generate.load_model()
    model_generation_token_args = huggingface_generate.get_model_generation_token_args(tokenizer)

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

    def generate(prompt: str, num: int, return_hiddens=False, **kwargs) -> List[str]:
        model_generation_search_args = huggingface_generate.get_model_generation_search_args(num)
        model_generation_args = {**model_generation_token_args, **model_generation_search_args}
        return gen(prompt, model_generation_args, num, return_hiddens, **kwargs)

    def generate_full(prompt: str, **kwargs) -> str:
        streamer = TextStreamer(tokenizer)
        all_args = {
            **(dict(streamer=streamer,
                max_new_tokens=10000)), # NOTE: used to be 1000
            **kwargs}
        model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
        model.eval()
        r = None
        with torch.no_grad():
            r = tokenizer.decode(model.generate(**model_input,
                                                **all_args
                                                )[0],
                                 skip_special_tokens=True)
        return r
    
else:
    assert False
