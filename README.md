[![arXiv](https://img.shields.io/badge/arXiv-2402.08147-pink.svg)](https://arxiv.org/abs/2402.08147)

# LLM verified with Monte Carlo Tree Search

This prototype synthesizes verified code with an LLM.

Using Monte Carlo Tree Search (MCTS), it explores the space of possible generation of a verified program, and it checks at every step that it's on the right track by calling the verifier.

This prototype uses Dafny, Coq, Lean, Scala or Rust.

Logs for example runs can be found in the [log](log) directory.
Scroll to the very end of a log to see [a chosen solution](https://github.com/namin/llm-verified-with-monte-carlo-tree-search/blob/main/log/opt0_alt.txt#L7661).
Note that the linked solution is optimal for the problem.

By using this technique, weaker models that might not even know the generated language all that well can compete with stronger models.

[Draft](https://arxiv.org/abs/2402.08147)

## Running

This project relies on GPU access. It has been tested on a multi-GPU machine with two NVIDIA A100s.

### Setup

Clone the github repo. Note that it has linked submodules so it should be cloned with the following command:
```
git clone --recurse-submodules https://github.com/namin/llm-verified-with-monte-carlo-tree-search.git
```

Note that you will be prompted to paste your huggingface authentication token.
```
conda create --name llm-verified python=3.10
conda activate llm-verified
pip install -r requirements.txt
huggingface-cli login
```

(If you want to use the singularity sandbox) Download the `llm-verified` docker image (created by the Dockerfile here and pushed to the [hub](https://hub.docker.com/r/namin/llm-verified)) and put it in `~/singularity`.
```
mkdir -p ~/singularity
cd ~/singularity
singularity pull docker://namin/llm-verified
```

(If you want to use the docker alternative) Download the Docker image: `docker pull namin/llm-verified`. Use the command line `--docker_sandbox`.

(If you want to use Dafny) Install Dafny: Download a binary [here](https://github.com/dafny-lang/dafny/releases/latest).

Please confirm that Dafny verification works before experimenting, for example by using the `okdafny.py` script we provide.  We have sometimes run into issues where z3 was not set up correctly, and Dafny skipped the verification process without returning an error code. Should you run into these problems, compile z3 from source and place the executable into your PATH.

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

Once you have the file `datasets/gen.jsonl`, you can run the DPO trainer with the following.
You can set the `CUDA_VISIBLE_DEVICES` environment variable to whichever device number you want, informed by availability from `nvidia-smi`.
```
export CUDA_VISIBLE_DEVICES=1
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
#### Running any experiments on any supported data source

To a run a certain flavor of experiment on one of the prompts used in the VMCTS paper, do something like the following. For example, to run the logic in `run_intermediate_expansion.py` on `opt0`, do:
```
python experiments.py --experiment_name run_intermediate_expansion.py --n_trials 10 --mins_timeout 10 --language Dafny --problem_name problem_opt0 --seed 42 --remove_hints True
```

To run a certain flavor of experiment on the Clover benchmark dataset, do something like the following. For example, to run the logic in `run_intermediate_expansion.py` on Clover, do:
```
python experiments_clover.py --experiment_name run_intermediate_expansion.py
```

To log the results of any experiment in the log/ directory, place the following before the experiment command:
```
./log.sh log/name_of_log_file.txt
```
For example, to log the results of the intermediate expansion experiment on `opt0` you could run:
```
./log.sh log/intermediate-expansion-01.txt python experiments.py --experiment_name run_intermediate_expansion.py --n_trials 10 --mins_timeout 10 --language Dafny --problem_name problem_opt0 --seed 42 --remove_hints True
```

### Adding unit tests
Add your unit tests to the `test_dict`, the final element of the prompt tuple.
Each key-value pair in this dictionary represents one or more unit tests. The key is some
string that has to occur in the generated code for the tests to run. The value is
a set of tests (think of assertions) that make up the test. Within the value string,
use the `test(bool)` function. Example: `{'evaluate': "test(fac(5) == 120)"}`.
You can either put each single assertion on its own line (`test(fac(5) == 120)\ntest(fac(4) == 30)`),
in its own key-value-pair, or `and` all of them together (`test(fac(5) == 120 and fac(4) == 30)`).

# Citation
```
@misc{brandfonbrener2024vermctssynthesizingmultistepprograms,
      title={VerMCTS: Synthesizing Multi-Step Programs using a Verifier, a Large Language Model, and Tree Search}, 
      author={David Brandfonbrener and Simon Henniger and Sibi Raja and Tarun Prasad and Chloe Loughridge and Federico Cassano and Sabrina Ruixin Hu and Jianang Yang and William E. Byrd and Robert Zinkov and Nada Amin},
      year={2024},
      eprint={2402.08147},
      archivePrefix={arXiv},
      primaryClass={cs.SE},
      url={https://arxiv.org/abs/2402.08147}, 
}
```
