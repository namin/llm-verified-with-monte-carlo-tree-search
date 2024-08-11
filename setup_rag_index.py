from llama_index.core import VectorStoreIndex, SimpleDirectoryReader
from settings_rag import settings_embed

# Function to load documents from multiple directories
def load_documents_from_directories(directories):
    all_documents = []
    for directory in directories:
        reader = SimpleDirectoryReader(directory)
        documents = reader.load_data()
        all_documents.extend(documents)
        print(directory, " has been successfully indexed!")
    return all_documents

# List of directories to index:
# - devin_chunked_dafny_manual
#   from https://github.com/metareflection/devin_chunked_dafny_manual
# - dafny_qa
#   from https://github.com/shenniger/dafny-llm-examples
#   cp dafny-llm-examples/data_prep/snippets/qa.* dafny_qa/
directories = ["devin_chunked_dafny_manual", "dafny_qa"]

# Set up embedding model settings
settings_embed()

# Load documents from the specified directories
documents = load_documents_from_directories(directories)

# Create the index from the documents
index = VectorStoreIndex.from_documents(documents)

# Persist the index
index.storage_context.persist(persist_dir="./storage")
