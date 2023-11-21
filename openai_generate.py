from joblib import Memory
from tenacity import (
    retry,
    stop_after_attempt,
    wait_random_exponential,
)
from openai import OpenAI
from model_config import OPENAI_MODEL
from typing import List

memory = Memory("cache/openai", verbose=0)


# @memory.cache
@retry(wait=wait_random_exponential(min=1, max=30), stop=stop_after_attempt(10))
def generate(prompt: str, num: int = 1, model: str = OPENAI_MODEL) -> List[str]:
    prompt = prompt.replace("### ", "")
    try:
        client = OpenAI()
        chat_completion = client.chat.completions.create(
            messages=[
                {
                    "role": "user",
                    "content": prompt,
                }
            ],
            model=model,
            top_p=0.9,
            temperature=0.8,
            max_tokens=1000,
        )
        return [prompt + "\n" + chat_completion.choices[0].message.content]
    except Exception as e:
        print(f"OpenAI API error: {e}")
        raise e


if __name__ == "__main__":
    print(generate("How are you?"))
