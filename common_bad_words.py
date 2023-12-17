from prompts import cheat_marker
from transformers import AutoTokenizer
from model_config import BASE_MODEL_NAME

# from https://huggingface.co/docs/transformers/internal/generation_utils#transformers.NoBadWordsLogitsProcessor.example

tokenizer_with_prefix_space = AutoTokenizer.from_pretrained(BASE_MODEL_NAME, add_prefix_space=True)

def get_tokens_as_list(word_list):
    "Converts a sequence of words into a list of tokens"
    tokens_list = []
    for word in word_list:
        tokenized_word = tokenizer_with_prefix_space([word], add_special_tokens=False).input_ids[0]
        tokens_list.append(tokenized_word)
    return tokens_list

def get_bad_words_ids():
    return get_tokens_as_list([cheat_marker])

bad_words_ids = get_bad_words_ids()
