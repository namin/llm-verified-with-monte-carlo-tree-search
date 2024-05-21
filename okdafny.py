weird = "lemma broken() ensures 1 == 0 {}"

from dafny import checkDafny
if checkDafny(weird)["status"] == 1024:
    print("Your Dafny install seems OK.")
else:
    print("Your verifier is likely BROKEN. Try recompiling z3.")

