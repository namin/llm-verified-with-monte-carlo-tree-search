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

For the PPO trainer (slow!), do:

```
python run_ppo.py
```

## TODOs

- [x] Support other verifiers in addition to Dafny:
  - [x] Coq
    - [ ] The current system struggles with Coq proofs. 
- [ ] Support other LLM infrastructures in addition to Hugging Face:
  - [ ] [Ollama](https://ollama.ai)
- [ ] Support test cases.
- [ ] Design a steerable interaction to give human or tool feedback to the LLM.
  - [x] Confirm completion at each step, and add a comment to steer.
  - [ ] Edit entire text, e.g. to add imports.
- [ ] Design higher level steerable schemes:
  - [ ] Synthesize Coq proofs.
- [ ] The LLM can get stuck repeating the same completion over and over again, if it doesn't have a diverse set of outputs.
- [x] Design a reinforcement learning scheme, whereas the LLM learns from trial.
  - [ ] Evaluate whether the model after PPO suffers degradation for some tasks, even unrelated.
  - [ ] Force the PPO solution to converge to an optimal known one, using it entirely for training rather than discovery.
- [ ] Get wandb to work.

## Credits

- The [montecarlo](montecarlo) library is adapted from [ImparaAI/monte-carlo-tree-search](https://github.com/ImparaAI/monte-carlo-tree-search).
- The inspiration comes from [_Planning with Large Language Models for Code Generation_ (ICLR 2023)](https://codeaimcts.github.io/).
