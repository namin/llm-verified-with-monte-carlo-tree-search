from lang_config import LANG
from lang import filter_code
from common_interactive import diffprompt

from typing import Optional

import llm

def generate_from_messages(messages):
    prompt = llm.tokenizer.apply_chat_template(messages, tokenize=False)
    r = llm.generate_full(prompt, max_new_tokens=200)
    r = diffprompt(prompt, [r])[0]
    return r
    
def reflect_code(code: str, snippet: Optional[str], err: str) -> str:
    snippet_text = f"""in the snippet:
{snippet}
""" if snippet else ""
    messages = [
        {"role": "user", "content": f"""You are a {LANG} programming assistant. You will be given some code and an error. Your goal is to write the entire code to correct it.

```{LANG.lower()}
{code}
```

The error is:
{err}
{snippet_text}
"""}
    ]
    r = generate_from_messages(messages)
    r = filter_code(r)
    return r

def reflect(code: str, snippet: Optional[str], err: str) -> str:
    snippet_text = f"""in the snippet:
{snippet}
""" if snippet else ""
    # adapted from F.3 Reflection Prompt
    # in https://arxiv.org/pdf/2310.04406v2.pdf
    messages = [
        {"role": "user", "content": f"""You are a {LANG} programming assistant. You will be given some code and an error. Your goal is to write a few sentences to explain why the code is wrong as indicated by the error. You will need this as guidance when you try again later. Only provide the few sentence description in your answer, not the implementation.

```{LANG.lower()}
{code}
```

{"The error is:" if err or snippet_text else ""}
{err}
{snippet_text}
"""}
    ]
    r = generate_from_messages(messages)
    r = r.replace("```", "")
    return r
