ALL_LANGS = ["Dafny", "Coq", "Lean4", "Scala"]

# Pick a language:
LANG = 'Coq'
# LANG = "Dafny"
# LANG = "Lean4"
# LANG = "Scala"

# Set features for the language:
if LANG == "Dafny":
    COMMENT = lambda inp: "\n// " + inp + "\n"
    STOP_WORD = "\n"

elif LANG == "Coq":
    COMMENT = lambda inp: " (* " + inp + " *) "
    STOP_WORD = "."

elif LANG == "Lean4":
    COMMENT = lambda inp: " /- " + inp + " -/ "
    STOP_WORD = "\n\n"

elif LANG == "Scala":
    COMMENT = lambda inp: " /* " + inp + " */ "
    STOP_WORD = "\n"

else:
    assert False
