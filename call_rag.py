from llama_index.core import Settings
from llama_index.core.query_engine import RetrieverQueryEngine
from llama_index.llms.huggingface import HuggingFaceLLM
import torch
from transformers import BitsAndBytesConfig
from llama_index.core.prompts import PromptTemplate
from llama_index.core import StorageContext, load_index_from_storage
import settings_rag

def load_storage():
    storage_context = StorageContext.from_defaults(persist_dir="./storage")
    index = load_index_from_storage(storage_context)
    return index
index = load_storage()

def messages_to_prompt(messages):
    prompt = ""
    for message in messages:
        if message.role == 'system':
            prompt += f"<|system|>\n{message.content}</s>\n"
        elif message.role == 'user':
            prompt += f"<|user|>\n{message.content}</s>\n"
        elif message.role == 'assistant':
            prompt += f"<|assistant|>\n{message.content}</s>\n"

    # ensure we start with a system prompt, insert blank if needed
    if not prompt.startswith("<|system|>\n"):
        prompt = "<|system|>\n</s>\n" + prompt

    # add final assistant prompt
    prompt = prompt + "<|assistant|>\n"
    return prompt 


setup_llm_called = False
def setup_llm():
    global setup_llm_called
    if setup_llm_called:
        return
    setup_llm_called = True
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

def augment(prompt, code):
    setup_llm()
    query_engine = index.as_query_engine()
    response = query_engine.query("Hint for what the next line should be in the given in-progress solution: " + code + " to answer the problem: " + prompt + "Put response in the format of '### Hint: '.")
    response_str = str(response)
    cleaned_response = response_str.replace("```", "")
    return cleaned_response

# TODO: like the rest of this RAG setup, this is Dafny-specific
def query_keywords(query):
    if "ADT" in query:
        return ["`match`", "`datatype`", "`case`"]
    else:
        return []

retriever = index.as_retriever(similarity_top_k=2)
def retrieve(prompt, code):
    query = prompt + "\nCode so far:\n```dafny\n" + code + "\n```\n"
    keywords = query_keywords(query)
    nodes = []
    if keywords:
        query += "\nKeywords: "+", ".join(keywords)
        nodes += retriever.retrieve(" ".join(keywords))
    #print("QUERY [[", query, "]]")
    if not nodes:
        nodes += retriever.retrieve(query)
    #print("Retrieving Nodes [[\n", nodes, "\n]]")
    texts = list(set(["\nFrom "+node.metadata['file_name']+"\n"+node.text+"\n" for node in nodes]))
    text = "\n".join(texts)
    #print("Retrieving [[\n", text, "\n]]")
    return text
