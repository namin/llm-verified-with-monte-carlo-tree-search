from joblib import Memory
from tenacity import (
    retry,
    stop_after_attempt,
    wait_random_exponential,
)
from openai import OpenAI
from model_config import OPENAI_MODEL, OPENAI_API_KEY, OPENAI_BASE_URL
from typing import List

memory = Memory("cache/openai", verbose=0)


# @memory.cache
@retry(wait=wait_random_exponential(min=1, max=30), stop=stop_after_attempt(10))
def generate(prompt: str, num: int = 1, model: str = OPENAI_MODEL) -> List[str]:
    prompt = prompt.replace("### ", "")
    try:
        client = OpenAI(base_url=OPENAI_BASE_URL,
                        api_key=OPENAI_API_KEY)
        chat_completion = client.chat.completions.create(
            messages=[
                {
                    "role": "system",
                    "content": "You will be provided with instructions and the start of code in quotes. Your goal is to complete the code just one chunk at a time. Do not repeat all the code but assume the user code is part of the answer."
                },
                {
                    "role": "user",
                    "content": prompt,
                }
            ],
            stop=["\n\n"], # TODO: generalize?
            model=model,
            top_p=0.9,
            temperature=0.8,
            max_tokens=1000,
        )
        resp = chat_completion.choices[0].message.content
        return [prompt + resp]
    except Exception as e:
        print(f"OpenAI API error: {e}")
        raise e


if __name__ == "__main__":
    print(generate("How are you?"))
