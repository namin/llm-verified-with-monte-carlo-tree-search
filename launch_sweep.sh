#!/bin/bash
#SBATCH --job-name=
#SBATCH --account=TODO
#SBATCH --output=TODO
#SBATCH --nodes=1              
#SBATCH --ntasks-per-node=1
#SBATCH --gpus-per-node=1    
#SBATCH --cpus-per-task=24
#SBATCH --time=24:00:00
#SBATCH --mem=250GB		
#SBATCH --partition=TODO
#SBATCH --constraint=h100
#SBATCH --array=1-100%10

# Custom environment
source ~/.bashrc
conda deactivate
conda activate llm-verified

export PYTHONPATH=.:${PYTHONPATH}
export WANDB_USERNAME=TODO
export WANDB_PROJECT=llm-mcts
export WANDB_GROUP=initial-trial-run

# TODO: this does NOT set the problem name. Add this later.
python run_intermediate_expansion.py --seed=$SLURM_TASK_ID --wandb_etity=$WANDB_USERNAME --wandb_project=$WANDB_PROJECT --wandb_group=$WANDB_GROUP --wandb_name=$SLURM_TASK_ID
