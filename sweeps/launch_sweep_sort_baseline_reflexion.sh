#!/bin/bash
#SBATCH --job-name=vmcts
#SBATCH --output=/n/home08/shenniger/llm-verified-with-monte-carlo-tree-search/sweeps/vmcts/logs_new_reflexion/%A_%a.out
#SBATCH --nodes=1              
#SBATCH --ntasks-per-node=1
#SBATCH --gpus-per-node=2
#SBATCH --cpus-per-task=16
#SBATCH --time=2:30:00
#SBATCH --mem=250GB		
#SBATCH --partition=gpu_requeue
#SBATCH --array=0-49%30

cd ~/llm-verified-with-monte-carlo-tree-search

# python run_timing.py --language Dafny --base_model_name meta-llama/Meta-Llama-3.1-70B --problem_name problem_insertion_sort_dafny_check --language Dafny --token_limit

# Custom environment
source ~/.bashrc
conda deactivate
conda activate llm-verified

export PYTHONPATH=.:${PYTHONPATH}

export discovery_factor=3.0
export widen_policy_value=0.1

export model_arg_temp=1.0
export model_arg_topp=0.95
export model_arg_topk=0
export token_limit=20000

# Single problem for debugging
# export problem_here=problem_opt0
# export remove_hints=True
# export run_number=$[$SLURM_ARRAY_TASK_ID]

# Sweep across problems
export run_number=$[$SLURM_ARRAY_TASK_ID] # 100 runs per hyperparameterbb
export script=$[$SLURM_ARRAY_TASK_ID] # 100 runs per hyperparameter

export script_names=(run_reflexion.py)
# export problem_names=(problem_unzip problem_days problem_food problem_max_and_lists)


export problem_here=problem_insertion_sort_dafny_full_spec_check
export script_here=run_reflexion.py

export language=Dafny

export base_model_name=meta-llama/Meta-Llama-3.1-70B-Instruct
# export base_model_name=bigcode/starcoder2-15b-instruct-v0.1

export remove_hints=False

export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=vmcts-sorting-final-instruct
export WANDB_NAME=$script_here/$run_number

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number

python $script_here --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --widen_policy_value=$widen_policy_value --discovery_factor=$discovery_factor --remove_hints=$remove_hints --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --token_limit=$token_limit --problem_name=$problem_here --language=$language --base_model_name=$base_model_name

