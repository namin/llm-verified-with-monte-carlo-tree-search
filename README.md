# LLM verified with Monte Carlo Tree Search

This prototype synthesizes verified code with an LLM.

Using Monte Carlo Tree Search (MCTS), it explores the space of possible generation of a verified program, and it checks at every step that it's on the right track by calling the verifier.

This prototype uses Dafny or Coq.

Logs for example runs can be found in the [log](log) directory.
Scroll to the very end of a log to see [a chosen solution](https://github.com/namin/llm-verified-with-monte-carlo-tree-search/blob/main/log/opt0_alt.txt#L7661).
Note that the linked solution is optimal for the problem.

By using this technique, weaker models that might not even know the generated language all that well can compete with stronger models.

We can also reinforce the snippets that succeed positively and that fail negatively through [PPO training](https://huggingface.co/docs/trl/main/en/ppo_trainer).
The model after PPO can solve the prompts without backtracking!
For example, the [log](https://github.com/namin/llm-verified-with-monte-carlo-tree-search/blob/main/log/fact_run_after_ppo_opt0.txt) for solving the problem `fact` after PPO training on another problem, `opt0`.

- [TODOs](TODO.md)

## Running

This project relies on GPU access. It has been tested on a multi-GPU machine with two NVIDIA A100s.

### Setup

Using `mamba` or equivalently `conda`:

```
mamba create --name llm-verified python=3.10
mamba activate llm-verified
pip install -r requirements.txt
```

### Execution

Pick a language in [lang.py](lang.py), an LLM in [model.py](model.py), and a prompt in [prompts.py](prompts.py), then:

```
python run.py
```

For the run that interacts with the user, do:

```
python run_user.py
```

For the run that feeds back verifier info (Coq only), do:

```
python run_verifier_feedback.py
```

For the PPO trainer (slow!), do:

```
python run_ppo.py
```

## Credits

- The [montecarlo](montecarlo) library is adapted from [ImparaAI/monte-carlo-tree-search](https://github.com/ImparaAI/monte-carlo-tree-search).
- The inspiration comes from [_Planning with Large Language Models for Code Generation_ (ICLR 2023)](https://codeaimcts.github.io/).
