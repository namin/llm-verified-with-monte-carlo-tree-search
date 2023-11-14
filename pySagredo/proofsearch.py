import pexpect
import json
import os


class ProofSearch:
    def __init__(self, path_to_repl):
        # debug
        # print(f"LOOKING FOR REPL IN {path_to_repl}")
        self.proc = pexpect.spawn(
            "lake env lean --run REPL/Main.lean", cwd=path_to_repl, encoding="utf-8"
        )
        self.proc.debug = True

    def run_code(self, code, env=None, verbose=False):
        if env:
            command = (
                '{ "cmd" : "' + repr(code)[1:-1] + f'", "env" : {env}' + " }"
            )  # [1:-1] removes single quotes
        else:
            command = (
                '{ "cmd" : "' + repr(code)[1:-1] + '" }'
            )  # [1:-1] removes single quotes

        if verbose:
            print(command)
        self.proc.sendline(command)
        self.proc.expect_exact(command + "\r\n")

        # debugging
        # print(self.proc.before)

        self.proc.sendline()
        self.proc.expect_exact("\r\n")
        try:
            index = self.proc.expect('env": \d+\}', timeout=20)
            output = self.proc.before + self.proc.match.group()
            if verbose:
                print(output)
            return json.loads(output)
        except pexpect.exceptions.TIMEOUT:
            print("FAILED DUE TO TIMEOUT")


def main():
    """For testing purposes"""
    path = os.environ.get("PATH_TO_LEAN_REPL")

    print("lean repl path: ", path)

    proofsearch = ProofSearch(path)

    # should return empty sorries and goals
    proofsearch.run_code("import Mathlib.Data.List.Basic\ndef f := 2", verbose=True)
    # should return goal state
    proofsearch.run_code("example : 2 = 2 := by", verbose=True)
    # should return error
    proofsearch.run_code("example : 2 = 3 := rfl", verbose=True)

    # should return goal state
    feedback = proofsearch.run_code("def f := 37", verbose=True)
    env = feedback["env"]
    proofsearch.run_code("#check (rfl: f = 37)", env=env, verbose=True)


if __name__ == "__main__":
    main()
