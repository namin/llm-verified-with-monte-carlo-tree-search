# This program is just to test if the huggingface command line arg parser
# works by printing an input string a specified number of times

from cmdline import get_args

args = get_args()
for _ in range(args.repeat_times):
    print(args.input_string)