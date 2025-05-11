# générateur d'expression
liste = list(range(0, 9))
generateur_pairs = (i for i in liste if (i % 2) == 0)

print(generateur_pairs) # ne retourne rien

# pour visualiser son le comportement du generateur d'expression
# on peut utiiser une liste
print(list(generateur_pairs)) # cette fois-ci il affichera la liste