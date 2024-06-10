#!/bin/bash
#SBATCH --job-name=vmcts
#SBATCH --output=/n/holyscratch01/kempner_fellows/Users/dbrandfonbrener/vmcts/logs/%A_%a.out
#SBATCH --nodes=1              
#SBATCH --ntasks-per-node=1
#SBATCH --gpus-per-node=1    
#SBATCH --cpus-per-task=16
#SBATCH --time=1:00:00
#SBATCH --mem=250GB		
#SBATCH --account=kempner_fellows
#SBATCH --partition=kempner_requeue
#SBATCH --constraint=a100
#SBATCH --array=0-499

# Custom environment
source ~/.bashrc
conda deactivate
conda activate verify

export PYTHONPATH=.:${PYTHONPATH}

export discovery_factors=(1.0 3.0 10.0)
export model_arg_temps=(0.6 0.8 1.0 1.2)
export model_arg_topp=0.95
export model_arg_topk=0
export token_limit=5000

# Single problem for debugging
# export problem_here=problem_opt0
# export remove_hints=True
# export run_number=$[$SLURM_ARRAY_TASK_ID]

# Sweep across problems
export run_number=$[$SLURM_ARRAY_TASK_ID/12] # 100 runs per hyperparameter

export hyperparam_number=$[$SLURM_ARRAY_TASK_ID%12]

export discovery_factor=${discovery_factors[$hyperparam_number/4]}
export model_arg_temp=${model_arg_temps[$hyperparam_number%4]}

export problem_here=problem_opt0 
export remove_hints=True

export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=rollout-hyperparam-1
export WANDB_NAME=$run_number/$model_arg_temp

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number
echo Problem: $problem_here
echo Temp: $model_arg_temp

python run_rollout_no_widen.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --discovery_factor=$discovery_factor --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --token_limit=$token_limit --problem_name=$problem_here --remove_hints=$remove_hints

