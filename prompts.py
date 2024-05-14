from lang_config import LANG, ALL_LANGS
from cmdline import args

if args.clover:
    prompt = None
    from clover_prompts import min_lines, expansion_count, check_func
    assert LANG == "Dafny"
else:
    from default_prompts import prompt, max_new_tokens, expansion_count, min_lines, max_depth, check_func, check_cheat_func, supported_langs, sanity_check, check_string
