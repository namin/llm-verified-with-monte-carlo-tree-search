from prompts import prompt, sanity_check

def main(main_iter, n_success_goal):
    i = 0
    n_success = 0
    while n_success < n_success_goal:
        print("ITERATION", i)
        i += 1

        old_prompt = prompt
        pending = sanity_check

        success_p, new_text, new_pending = main_iter(old_prompt, pending)
        while (success_p and new_pending) or not success_p:
            if success_p:
                old_prompt = new_text+"\n"+new_pending[0]
                pending = new_pending[1:]
            success_p, new_text, new_pending = main_iter(old_prompt, pending)
        if success_p:
            n_success += 1
            print('CHOSEN CHAIN')
            print(new_text)
