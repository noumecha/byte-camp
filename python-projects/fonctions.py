# on déclare notre fonction ici
"""def somme(x,y):
    return x + y

a = int(input("entrez un 1er nombre"))
b = int(input("entrez un 2eme nombre"))

print(somme(a,b)) #ici on apelle la fonction"""

# espace de nommage des variables
"""def funct():
    a = 7
    print("dans la fonction funct() a vaut : ",a)

def funct2():
    print("dans funct2() a vaut : ",a)
a = 10
funct()
funct2()"""

# portée des variables au sein des fonctions
def func():
    a = 77
    print("dans func() as vaut : ", a)
print("valeur de a hors de la fonction func(): ", a)
