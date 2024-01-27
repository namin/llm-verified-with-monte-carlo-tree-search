# LLM verified with Monte Carlo Tree Search

This prototype synthesizes verified code with an LLM.

Using Monte Carlo Tree Search (MCTS), it explores the space of possible generation of a verified program, and it checks at every step that it's on the right track by calling the verifier.

This prototype uses Dafny, Coq, Lean, Scala or Rust.

Logs for example runs can be found in the [log](log) directory.
Scroll to the very end of a log to see [a chosen solution](https://github.com/namin/llm-verified-with-monte-carlo-tree-search/blob/main/log/opt0_alt.txt#L7661).
Note that the linked solution is optimal for the problem.

By using this technique, weaker models that might not even know the generated language all that well can compete with stronger models.

## Running

This project relies on GPU access. It has been tested on a multi-GPU machine with two NVIDIA A100s.

### Setup

Using `mamba` or equivalently `conda`:

```
mamba create --name llm-verified python=3.10
mamba activate llm-verified
pip install -r requirements.txt
```

(If you want to use Dafny) Install Dafny: Download a binary [here](https://github.com/dafny-lang/dafny/releases/latest).

(If you want to use Coq) Install Coq: [Install opam](https://opam.ocaml.org/doc/Install.html), then:

```
opam init
opam install coq
opam install "coq-serapi>=8.10.0+0.7.0"
opam repo add coq-released https://coq.inria.fr/opam/released
opam install coq-hammer
```

(If you want to use Lean) Install Lean: See detailed instructions [here](https://leanprover-community.github.io/get_started.html). Then,

```
git clone https://github.com/leanprover-community/repl.git
```

and add `require mathlib from git "https://github.com/leanprover-community/mathlib4"` to the file `repl/lakefile.lean` and run

```
curl https://raw.githubusercontent.com/leanprover-community/mathlib4/master/lean-toolchain -o lean-toolchain
lake update
lake build
```

in the `repl` directory.

### Execution

#### Baseline

To run the default experiment configuration, which uses the `Phind-CodeLlama-34B-v2` LLM to solve the `problem_opt0` as specified in `prompts.py` in Dafny, do:

```
python run.py
```

Note that `cmdline.py` handles the usage of command line arguments for the codebase. To see what arguments are available, do:

```
python cmdline.py --help
```

To run with specific arguments, simply add a `--[argument name] [desired argument value]` for each argument after the original command to run. For example, to execute `run.py` as before but with Coq instead of Dafny, do:

```
python run.py --language Coq
```

#### Interactive

For the run that interacts with the user, do:

```
python run_user.py
```

#### Verifier Feedback

For the run that feeds back verifier info, do:

```
python run_verifier_feedback.py
```

#### PPO

For the PPO trainer (slow!), do:

```
python run_ppo.py
```

#### DPO

For the DPO trainer, have a set of triples in `datasets/gen.jsonl`.
These can be obtained by concatenating existing triple files:

```
cd datasets
cat pm_gen.jsonl pm_proof_gen.jsonl opt0.jsonl >gen.jsonl 
```

or by running the DPO triple generator on an existiting problem:
```
python run_dpo_gen.jsonl
```

Once you have the file `datasets/gen.jsonl`, you can run the DPO trainer with:
```
python run_dpo.py
```

The resulting model will be in `./my_dpo_model` and can be loaded with the command-line argument `--base_model_name ./my_dpo_model`.

#### Diversity

For a run that selects the next completion diversely, do:

```
python run_diversity.py
```

#### Coq-specific runs

For a more extensive prompt populated with the goal to prove (Coq only) -- do:

```
python run_focus.py --language Coq
```

For a more extensive prompt which creates lemmas from failures (Coq only) -- do:

```
python run_meta.py --language Coq
```

