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

export discovery_factor=3.0
export widen_policy_value=0.1
export model_arg_temp=1.0
export model_arg_topp=0.95
export model_arg_topk=0
export token_limit=5000

# Single problem for debugging
# export problem_here=problem_opt0
# export remove_hints=True
# export run_number=$[$SLURM_ARRAY_TASK_ID]

# Sweep across problems
export run_number=$[$SLURM_ARRAY_TASK_ID/5] # 100 runs per hyperparameter
export hyperparam_number=$[$SLURM_ARRAY_TASK_ID%5]

export problem_names=(problem_opt0 problem_fact problem_opt0_opt problem_bst problem_repeat)
export problem_here=${problem_names[$hyperparam_number]}

if [ $problem_here == "problem_opt0" ] || [ $problem_here == "problem_fact" ];
then
    export remove_hints=True
else
    export remove_hints=False
fi

export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=rollout-dafny5-1
export WANDB_NAME=$run_number/$model_arg_temp

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number
echo Problem: $problem_here
echo Temp: $model_arg_temp

python run_rollout_no_widen.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --widen_policy_value=$widen_policy_value --discovery_factor=$discovery_factor --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --token_limit=$token_limit --problem_name=$problem_here --remove_hints=$remove_hints

