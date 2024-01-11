from dataclasses import dataclass, field
from transformers import HfArgumentParser, set_seed

@dataclass
class CommonArguments:
    diversity: bool = field(default=False, metadata={"help": "Diversity flag for `common_diversity.py"})
    max_completion_depth: int = field(default=30, metadata={"help": "Limit for the depth of the mcts"})
    livecode: bool = field(default=False, metadata={"help": "Use livecode API checker or local compiler"})
    language: str = field(default="Dafny", metadata={"help": "Choose language from 'Dafny', 'Coq', 'Lean4', 'Rust', 'Scala'"})
    model_host: str = field(default="huggingface", metadata={"help": "Choose between 'huggingface' or 'openai'"})
    base_model_name: str = field(default="Phind/Phind-CodeLlama-34B-v2", metadata={"help": "LLM name"})
    peft_model_path: str = field(default=None, metadata={"help": "Provide an optional checkpoint on top of the base model"})
    ppo_model_path: str = field(default=None, metadata={"help": "Pick an entire PPO model "})
    custom_stop: bool = field(default=True, metadata={"help": "Set to True to use custom stop words"})
    same_for_many_samples: bool = field(default=True, metadata={"help": "Sample the same whether generating one or many samples"})
    beam_search: bool = field(default=False, metadata={"help": "Set to True to use beam search instead of sampling"})
    model_arg_topk: float = field(default=None, metadata={"help": "Specify top k parameter for llm generation"})
    model_arg_topp: float = field(default=None, metadata={"help": "Specify top p parameter for llm generation"})
    model_arg_temp: float = field(default=None, metadata={"help": "Specify temperature parameter for llm generation"})
    problem_name: str = field(default="problem_opt0", metadata={"help": "Choose which problem to solve from `prompts.py` "})
    n_success_goal: int = field(default=1, metadata={"help": "Number of success goals for `run_check` and `run_ppo`"})
    use_hammer: bool = field(default=False, metadata={"help": "Use hammer"})
    show_mistakes: bool = field(default=False, metadata={"help": "Show mistakes"})
    reflect: bool = field(default=False, metadata={"help": "Reflect on mistakes"})
    interactive: bool = field(default=False, metadata={"help": "Run in interactive mode"})
    extract_lemma_depth: int = field(default=0, metadata={"help": "Depth for extracing lemma"})
    explore_many: bool = field(default=False, metadata={"help": "Explore multiple paths"})
    n_iter: int = field(default=10, metadata={"help": "Number of iterations to run ppo for"})
    n_samples: int = field(default=10, metadata={"help": "Number of samples forwhole sampling"})
    greedy: bool = field(default=True, metadata={"help": "Sample greedily"})
    remove_hints: bool = field(default=False, metadata={"help": "Remove hints from prompt"})
    show_hint_match_dafny: bool = field(default=True, metadata={"help": "Show Dafny hint about pattern matching syntax"})
    n_trials: int = field(default=10, metadata={"help": "Number of trials to run on a specified experiment"})
    experiment_name: str = field(default="run.py", metadata={"help": "Pick an experiment to run "})
    mins_timeout: float = field(default=None, metadata={"help": "Set a default timeout for each trial "})
    seed: int = field(default=None, metadata={"help": "Set the seed for reproducible behavior"})


def get_args():
    parser = HfArgumentParser(CommonArguments)
    args = parser.parse_args_into_dataclasses()[0]
    return args

args = get_args()
if args.seed is not None:
    set_seed(args.seed)