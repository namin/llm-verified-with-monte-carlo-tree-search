weird = "lemma broken() ensures 1 == 0 {}"
works = "lemma works() ensures 0 == 0 {}"

from dafny import checkDafny
if checkDafny(weird)["status"] == 0:
    print("Your verifier is accepting INCORRECT CODE. This causes results that are silently wrong! Try recompiling z3.")
else:
    if checkDafny(works)["status"] == 0:
        print("Your Dafny install seems OK.")
    else:
        print("Your Dafny install appears broken. Try running \"dafny\" on your own to fix it.")

