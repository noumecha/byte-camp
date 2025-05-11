# une liste grace à la comrpréhension de liste python
liste = list(range(10))
print(liste)

# on veut une liste contenant les éléments paires de liste 
# normalment on écrira :
liste2 = []
for i in liste:
    if (i % 2) == 0:
        liste2.append(i)
print(liste2)

# en utilisant la compréhension de liste on peut écrire plus facilement
liste3 = [i for i in liste if (i % 2) == 0]
print(liste3) # plus simplement en 2 lignes de code