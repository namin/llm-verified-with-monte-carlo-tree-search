from funsearch.implementation.funsearch import main
from funsearch.implementation.config import Config

f = open('funsearch/implementation/specification_nonsymmetric_admissible_set.txt')
PROMPT = f.read()
f.close()

main(PROMPT, [(10,5),(11,7),(12,7),(24,17),(15,10),(90,89)], Config())
