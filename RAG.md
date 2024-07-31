# Running RAG

- install LlamaIndex

    - ```pip install llama-index-core llama-index-embeddings-huggingface llama-index-llms-huggingface```

- install other necessary libraries if not already installed

    - ``` pip install torch transformers```

- add documents that will be the context for RAG

    - these documents can be in one or in multiple directories

- run ```setup_rag_index.py``` to create the index from your desired documents. 

    - change the list of ```directories``` as needed
    - run ```python setup_rag_index.py ```


- run ```python run_intermediate_expansion_rag.py --problem_name PROBLEM_NAME --lang 'LANG'```

    - For instance, for the problem ```problem_opt0``` in ```default_prompts.py``` in Dafny, we can run  ```python run_intermediate_expansion_rag.py --problem_name problem_opt0 --lang 'Dafny'```

