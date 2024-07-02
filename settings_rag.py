from llama_index.core import Settings
from llama_index.embeddings.huggingface import HuggingFaceEmbedding


def settings_embed():
    Settings.embed_model = HuggingFaceEmbedding(
        model_name="BAAI/bge-small-en-v1.5"
    )