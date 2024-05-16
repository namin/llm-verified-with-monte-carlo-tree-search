import time
from common import limit_depth, max_completion_depth, count_depth, limit_tokens
import llm
from cmdline import args
import wandb

if args.use_wandb:
    wandb.init(
        entity=args.wandb_entity,
        project=args.wandb_project,
        group=args.wandb_group,
        config=args.dict(),
        name=args.wandb_name,
    )


def compute_gen_stat(pre_gen_time, pre_gen_toks, text, depth):
    if args.use_wandb:
        # Compute stats about generate_complete
        gen_stat = {}
        gen_stat["generate/gen_time"] = time.time() - pre_gen_time
        gen_stat["generate/gen_length"] = llm.token_counter - pre_gen_toks
        gen_stat["generate/score_sign"] = 2 * int(text is not None) - 1
        gen_stat["generate/completion_depth"] = depth
        return gen_stat
    else:
        return {}


def log_tree(montecarlo, gen_stat, node):
    if args.use_wandb:
        # Compute some tree stats over time
        stat = montecarlo.get_stat_dict()
        stat = {f"tree/{k}": v for k, v in stat.items()}
        stat["tree/node_depth"] = count_depth(node)

        # Final solution depth
        if montecarlo.solution is not None:
            solution_depth = 1
            parent = node.parent
            while parent is not None:
                solution_depth += 1
                parent = parent.parent
            stat["final/solution_depth"] = solution_depth

        wandb.log({**gen_stat, **stat})


def compute_summary(montecarlo, node_dups_counter, init_time):
    # Compute summary stats
    if args.use_wandb:
        stat = {}
        stat["final/time"] = time.time() - init_time
        stat["final/solved"] = not limit_tokens()
        stat["final/text"] = montecarlo.solution
        stat["final/n_tokens"] = llm.token_counter
        stat["final/node_dups"] = node_dups_counter
        # Log pass at t
        ts = [500, 1000, 2000, 5000]
        for t in ts:
            pass_at_t = llm.token_counter <= t
            stat[f"final/pass_at_{t}"] = int(pass_at_t)
        final_stat = montecarlo.get_stat_dict()
        final_stat = {f"final/{k}": v for k, v in final_stat.items()}
        stat = {**stat, **final_stat}
        wandb.log(stat)
