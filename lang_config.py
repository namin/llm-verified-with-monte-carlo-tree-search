ALL_LANGS = ["Dafny", "Coq", "Lean4"]

# Pick a language:
# LANG = "Dafny"
# LANG = 'Coq'
LANG = "Lean4"

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

else:
    assert False
