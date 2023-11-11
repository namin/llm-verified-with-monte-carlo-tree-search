# LLM verified with Monte Carlo Tree Search

This prototype synthesizes verified code with an LLM.

Using Monte Carlo Tree Search (MCTS), it explores the space of possible generation of a verified program, and it checks at every step that it's on the right track by calling the verifier.

This prototype uses Dafny.

Logs for example runs can be found in the [log](log) directory.
Scroll to the very end of a log to see [a chosen solution](https://github.com/namin/llm-verified-with-monte-carlo-tree-search/blob/main/log/opt0_alt.txt#L7661).
Note that the linked solution is optimal for the problem.

By using this technique, weaker models that might not even know the generated language all that well can compete with stronger models.

## Running

This project has been tested on [the HAL machine](https://cselab.github.io/harvard_servers/). It relies on GPU access.

### Setup

Using `mamba` or equivalently `conda`:

```
mamba create --name llm-verified python=3.10
mamba activate llm-verified
pip install -r requirements.txt
```

### Execution

Pick an LLM in [llm.py](llm.py) and a prompt in [prompts.py](prompts.py), then:

```
python run.py
```

## TODOs

- [ ] Support other verifiers in addition to Dafny:
  - [ ] Coq
- [ ] Support other LLM infrastructures in addition to Hugging Face:
  - [ ] [Ollama](https://ollama.ai)
- [ ] Design a steerable interaction to give human or tool feedback to the LLM.
- [ ] Design a reinforcement learning scheme, whereas the LLM learns from trial.

## Credits

- The [montecarlo](montecarlo) library is adapted from [ImparaAI/monte-carlo-tree-search](https://github.com/ImparaAI/monte-carlo-tree-search).
- The inspirations comes from [_Planning with Large Language Models for Code Generation_ (ICLR 2023)](https://github.com/shunzh/mcts-for-llm).
