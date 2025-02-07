from mlx_lm import load, generate as mlx_generate
from mlx_lm.sample_utils import make_sampler
from typing import List

model_path = "mlx-community/Qwen2.5-Coder-14B-Instruct-4bit"
#model_path = "mlx-community/Qwen2.5-Coder-32B-8bit"
model, tokenizer = load(model_path)

sampler = make_sampler(temp=0.8)

def generate(prompt_input: str, num: int = 1) -> List[str]:
    prompt_input = prompt_input.replace("### ", "")
    messages=[
        {
            "role": "system",
            "content": "You will be provided with instructions and the start of code in quotes. Your goal is to complete the code just one chunk at a time. Do not repeat all the code but assume the user code is part of the answer."
        },
        {
            "role": "user",
            "content": prompt_input + '\n',
        }
    ]
    prompt = tokenizer.apply_chat_template(
        messages, add_generation_prompt=True
    )
    text = mlx_generate(model, tokenizer, prompt, sampler=sampler)
    return [prompt_input + text]

if __name__ == "__main__":
    print(generate("How are you?"))
