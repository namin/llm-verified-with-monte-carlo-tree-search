#!/bin/bash
#SBATCH --job-name=vmcts
#SBATCH --output=/n/holyscratch01/kempner_fellows/Users/dbrandfonbrener/vmcts/logs/%A_%a.out
#SBATCH --nodes=1              
#SBATCH --ntasks-per-node=1
#SBATCH --gpus-per-node=1    
#SBATCH --cpus-per-task=16
#SBATCH --time=8:00:00
#SBATCH --mem=250GB		
#SBATCH --account=kempner_fellows
#SBATCH --partition=kempner
#SBATCH --array=0-5

# Custom environment
source ~/.bashrc
conda deactivate
conda activate verify

export PYTHONPATH=.:${PYTHONPATH}

export model_arg_temp=0.6
export model_arg_topp=0.95
export model_arg_topk=0

export n_samples=1000 # may hit time limit before this


# Sweep across problems
export run_number=$[$SLURM_ARRAY_TASK_ID/6] # 100 runs per hyperparameter
export hyperparam_number=$[$SLURM_ARRAY_TASK_ID%6]


export problem_names=(problem_fact_coq_check problem_opt0_coq_check problem_opt0_opt_coq_check problem_bst_coq_check problem_repeat_coq_check problem_lights_more_coq_check)
export problem_here=${problem_names[$hyperparam_number]}

export language=Coq
export remove_hints=False


export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=whole-coqchecks6-2
export WANDB_NAME=$run_number/$model_arg_temp

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number
echo Problem: $problem_here
echo Temp: $model_arg_temp

python run_whole.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --n_samples=$n_samples --problem_name=$problem_here --remove_hints=$remove_hints --language=$language

