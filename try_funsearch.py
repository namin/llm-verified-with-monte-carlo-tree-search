from funsearch.implementation.funsearch import main
from funsearch.implementation.config import Config

f = open('funsearch/implementation/specification_nonsymmetric_admissible_set.txt')
PROMPT = f.read()
f.close()

main(PROMPT, [(10,15)], Config())
