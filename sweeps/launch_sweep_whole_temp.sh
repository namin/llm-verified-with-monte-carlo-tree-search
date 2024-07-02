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
#SBATCH --constraint=a100
#SBATCH --array=0-4

# Custom environment
source ~/.bashrc
conda deactivate
conda activate verify

export PYTHONPATH=.:${PYTHONPATH}

export model_arg_temps=(0.2 0.4 0.6 0.8 1.0)
export model_arg_topp=0.95
export model_arg_topk=0

export n_samples=1000 # probably will hit time limit before this

export run_number=$[$SLURM_ARRAY_TASK_ID/5] # 100 runs per hyperparameter
export hyperparam_number=$[$SLURM_ARRAY_TASK_ID%5]
export model_arg_temp_idx=$[$hyperparam_number]
export model_arg_temp=${model_arg_temps[$model_arg_temp_idx]}

export WANDB_USERNAME=seas
export WANDB_PROJECT=vmcts
export WANDB_GROUP=whole-sweep-3
export WANDB_NAME=$run_number/$model_arg_temp

SEED=$run_number

echo Using seed: $SEED
echo Run number: $run_number
echo Temp: $model_arg_temp
echo Top p: $model_arg_topp

python run_whole.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$WANDB_NAME --remove_hints=True --model_arg_temp=$model_arg_temp --model_arg_topp=$model_arg_topp --model_arg_topk=$model_arg_topk --n_samples=$n_samples

