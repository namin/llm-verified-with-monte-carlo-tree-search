import llm_config
import torch

_, model, tokenizer = llm_config.load_model()

model_generation_args = llm_config.get_model_generation_args(tokenizer)

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
    num = 5
    from prompts import prompt, max_new_tokens
    from lang import score_func, can_be_solution
    args = model_generation_args.copy()
    args['min_length'] = max_new_tokens // 2
    args['max_new_tokens'] = max_new_tokens
    del args['eos_token_id']
    del args['pad_token_id']
    rs = gen(prompt, args, num)
    for r in rs:
        print('\n\nGENERATED PROPOSAL')
        #print(r) # printed by score_func
        s = score_func(r)
        if s > 0 and can_be_solution(r):
            print('ACCEPTABLE SOLUTION!')
