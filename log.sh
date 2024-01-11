#!/bin/bash

log_file=$1
shift
# ./log file_name run.py cli_flags
echo -e "\n\n========" >> "$log_file"
echo -e "Experiment configuration: $@ \n\n" >> "$log_file"

SECONDS=0
"$@" 2>&1 >> "$log_file"
duration=$SECONDS
echo -e "To complete all experiments, $(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed.\n\n" >> "$log_file"