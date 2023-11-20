from model_config import MODEL_HOST

if MODEL_HOST == "openai":
    import openai_generate

    def generate(prompt, num):
        return openai_generate.generate(prompt, num)

elif MODEL_HOST == "huggingface":
    import hugginface_generate

    _, model, tokenizer = load_model()
    model_generation_args = get_model_generation_args(tokenizer)

    def gen(prompt, model_generation_args, num=1):
        num = num or 1
        model_input = tokenizer(prompt, return_tensors="pt").to("cuda")
        model.eval()
        with torch.no_grad():
            ts = model.generate(
                **model_input, num_return_sequences=num, **model_generation_args
            )
            rs = [tokenizer.decode(t, skip_special_tokens=True) for t in ts]
        return rs

    def generate(prompt, num):
        return gen(prompt, model_generation_args, num)

else:
    assert False
