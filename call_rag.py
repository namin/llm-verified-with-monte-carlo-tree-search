from llama_index.core import Settings
from llama_index.llms.huggingface import HuggingFaceLLM
import torch
from transformers import BitsAndBytesConfig
from llama_index.core.prompts import PromptTemplate
from settings_rag import settings_embed

'''def messages_to_prompt(messages):
    prompt = ""
    for message in messages:
        if message.role == 'system':
            prompt += f"<|system|>\n{message.content}</s>\n"
        elif message.role == 'user':
            prompt += f"<|user|>\n{message.content}</s>\n"
        elif message.role == 'assistant':
            prompt += f"<|assistant|>\n{message.content}</s>\n"
        print("augmenting")

    # ensure we start with a system prompt, insert blank if needed
    if not prompt.startswith("<|system|>\n"):
        prompt = "<|system|>\n</s>\n" + prompt

    # add final assistant prompt
    prompt = prompt + "<|assistant|>\n"
    return prompt '''

def messages_to_prompt(messages):
    prompt = ""
    for message in messages:
        if message.role == 'system':
            prompt += f"\n{message.content}</s>\n"
        elif message.role == 'user':
            prompt += f"\n{message.content}</s>\n"
        elif message.role == 'assistant':
            prompt += f"\n{message.content}</s>\n"
        print("augmenting")

    # ensure we start with a system prompt, insert blank if needed
    if not prompt.startswith("\n"):
        prompt = "\n</s>\n" + prompt

    # add final assistant prompt
    prompt = prompt + "\n"
    return prompt


quantization_config = BitsAndBytesConfig(
    load_in_4bit=True,
    bnb_4bit_compute_dtype=torch.float16,
    bnb_4bit_quant_type="nf4",
    bnb_4bit_use_double_quant=True,
)

Settings.llm = HuggingFaceLLM(
    model_name="HuggingFaceH4/zephyr-7b-alpha",
    tokenizer_name="HuggingFaceH4/zephyr-7b-alpha",
    query_wrapper_prompt=PromptTemplate("<|system|>\n</s>\n<|user|>\n{query_str}</s>\n<|assistant|>\n"),
    context_window=3900,
    max_new_tokens=256,
    model_kwargs={"quantization_config": quantization_config},
    # tokenizer_kwargs={},
    generate_kwargs={"temperature": 0.7, "top_k": 50, "top_p": 0.95},
    messages_to_prompt=messages_to_prompt,
    device_map="auto", #gpu, cpu, auto
    )


def augment(index, prompt, code):
  # bge-base embedding model
    settings_embed()
    query_engine = index.as_query_engine()
    response = query_engine.query("Hint for what the next line should be in the given in-progress solution: " + code + " to answer the problem: " + prompt + "Put response in the format of '### Hint: '. Type the code plain text: do not use '''dafny to indicate code. ")
    response_str = str(response)
    cleaned_response = response_str.replace("```", "")
    return str(cleaned_response)
