# TODO: sweep hyperparams for sensitivity

# First priority:

# model_arg_temp = 0.9
# node.discovery_factor = 0.35
# child policy value on widen nodes = 0.2


# Lower priority:

# max depth = 40 (set on per problem basis....)
# model_arg_topp = 0.95
# update win value = 1 or -1
# max depth penalty = max depth
# model_arg_top_k = removed


# TODOs:
# 1. expose all the hyperparameters to the command line
# 2. write a sweep on problem_opt_0 over the high-priority hyperparameters
#    a. 20 seeds for every configuration (cap time at 15 minutes)
#    b. Two exploration values together:
#       i. discovery_factor = [0.1, 0.3, 1.0]
#       ii. widen policy value = [0.1, 0.2, 0.5]
#    c. Model temperature by itself:
#       i. model_arg_temp = [0.3, 0.5, 0.7, 0.9, 1.1]
