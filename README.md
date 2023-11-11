# LLM verified with Monte Carlo Tree Search

Synthesize verified code with an LLM, using Monte Carlo Tree Search (MCTS) to explore the output step-by-step with intermediate verification.

This prototype uses Dafny.

Logs for example runs can be found in the [log](log) directory. Scroll to the very end of a log to see the chosen solution.

## TODOs

- [ ] Support other verifiers in addition to Dafny:
  - [ ] Coq
- [ ] Design a steerable interaction to give human or tool feedback to the LLM.

## Credits

- The [montecarlo](montecarlo) library is adapted from [ImparaAI/monte-carlo-tree-search](https://github.com/ImparaAI/monte-carlo-tree-search).
- The inspirations comes from [_Planning with Large Language Models for Code Generation_ (ICLR 2023)](https://github.com/shunzh/mcts-for-llm).
