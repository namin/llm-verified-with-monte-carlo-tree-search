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
#SBATCH --array=0-1599%20

# Custom environment
source ~/.bashrc
conda deactivate
conda activate verify

export PYTHONPATH=.:${PYTHONPATH}

# Grid of size 16
export discovery_factors=(1.0 3.0 10.0 30.0)
export widen_policy_values=(0.05 0.1 0.2 0.5)

export model_arg_temp=1.0
export model_arg_topp=0.95
export model_arg_topk=0
export token_limit=5000

export run_number=$[$SLURM_ARRAY_TASK_ID/16] # 100 runs per hyperparameter
export hyperparam_number=$[$SLURM_ARRAY_TASK_ID%16]
export discovery_here_idx=$[$hyperparam_number%4]
export widen_here_idx=$[$hyperparam_number/4]
export discovery_here=${discovery_factors[$discovery_here_idx]}
export widen_here=${widen_policy_values[$widen_here_idx]}

export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=exploration-sweep-5
export WANDB_NAME=$run_number/$discovery_here/$widen_here

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number
echo Discovery factor: $discovery_here
echo Widen policy value: $widen_here

python run_intermediate_expansion.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --widen_policy_value=$widen_here --discovery_factor=$discovery_here --remove_hints=True --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --token_limit=$token_limit

