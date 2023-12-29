from cmdline import get_args

args = get_args()
for _ in range(args.repeat_times):
    print(args.input_string)