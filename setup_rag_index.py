# set up the index ONCE
from llama_index.core import VectorStoreIndex, SimpleDirectoryReader, Settings
from settings_rag import settings_embed

settings_embed()
documents = SimpleDirectoryReader("devin_chunked_dafny_manual").load_data()
index = VectorStoreIndex.from_documents(documents)
index.storage_context.persist(persist_dir="./storage")




