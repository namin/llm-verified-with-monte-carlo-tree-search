from dataclasses import dataclass, field
from transformers import HfArgumentParser

@dataclass
class CommonArguments:
    input_string: str = field(default=None, metadata={"help": "a sample input string"})
    repeat_times: int = field(default=1, metadata={"help": "number of times to repeat the input"})
    _diversity: bool = field(default=True, metadata={"help": "Diversity flag for `common_diversity.py"})
    _max_completion_depth: int = field(default=30, metadata={"help": "Limit for the depth of the mcts"})
    _livecode: bool = field(default=False, metadata={"help": "Use livecode API checker or local compiler"})
    _language: str = field(default="Dafny", metadata={"help": "Choose language from 'Dafny', 'Coq', 'Lean4', 'Rust', 'Scala'"})
    _model_host: str = field(default="huggingface", metadata={"help": "Choose between 'huggingface' or 'openai'"})
    _base_model_name: str = field(default="Phind/Phind-CodeLlama-34B-v2", metadata={"help": "LLM name"})
    _peft_model_path: str = field(default=None, metadata={"help": "Provide an optional checkpoint on top of the base model"})
    _ppo_model_path: str = field(default=None, metadata={"help": "Pick an entire PPO model "})
    _custom_stop: bool = field(default=True, metadata={"help": "Set to True to use custom stop words"})
    _same_for_many_samples: bool = field(default=True, metadata={"help": "Sample the same whether generating one or many samples"})
    _beam_search: bool = field(default=False, metadata={"help": "Set to True to use beam search instead of sampling"})
    _model_arg_topk: float = field(default=None, metadata={"help": "Specify top k parameter for llm generation"})
    _model_arg_topp: float = field(default=None, metadata={"help": "Specify top p parameter for llm generation"})
    _model_arg_temp: float = field(default=None, metadata={"help": "Specify temperature parameter for llm generation"})
    _problem_name: str = field(default="problem_opt0", metadata={"help": "Choose which problem to solve from `prompts.py` "})
    _n_success_goal: int = field(default=1, metadata={"help": "Number of success goals for `run_check` and `run_ppo`"})
    _use_hammer: bool = field(default=True, metadata={"help": "Use hammer"})
    _show_mistakes: bool = field(default=False, metadata={"help": "Show mistakes"})
    _interactive: bool = field(default=False, metadata={"help": "Run in interactive mode"})
    _extract_lemma_depth: int = field(default=1, metadata={"help": "Depth for extracing lemma"})
    _explore_many: bool = field(default=True, metadata={"help": "Explore multiple paths"})
    _n_iter: int = field(default=10, metadata={"help": "Number of iterations to run ppo for"})
    _greedy: bool = field(default=True, metadata={"help": "Sample greedily"})


def get_args():
    parser = HfArgumentParser(CommonArguments)
    args = parser.parse_args_into_dataclasses()[0]
    return args
