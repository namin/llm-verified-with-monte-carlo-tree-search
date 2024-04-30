#!/bin/bash
#SBATCH --job-name=mcts-testing
#SBATCH --output=/n/home08/shenniger/llm-verified-with-monte-carlo-tree-search/mylog
#SBATCH --nodes=1              
#SBATCH --ntasks-per-node=1
#SBATCH --gpus-per-node=1    
#SBATCH --cpus-per-task=4
#SBATCH --time=24:00:00
#SBATCH --mem=250GB		
#SBATCH --partition=gpu_requeue
#SBATCH --constraint=h100
#SBATCH --array=1-100%5

# Custom environment
source ~/.bashrc
conda deactivate
conda activate llm-verified

export PYTHONPATH=.:${PYTHONPATH}
export WANDB_USERNAME=shenniger
export WANDB_PROJECT=vmcts
export WANDB_GROUP=initial-trial-run

echo -------------------------------
echo Here is my env:
env
echo -------------------------------
echo


# TODO: this does NOT set the problem name. Add this later.
SEED=$RANDOM
echo Using seed: $SEED
python run_intermediate_expansion.py --seed=$SEED --use_wandb=True --wandb_entity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$SLURM_ARRAY_TASK_ID

