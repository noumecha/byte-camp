# exemple de gestion d'exception
"""try:
    print("Ici la code fonction bien")
    raise Exception("il y'a un bug") # on catch l'exception
    print("on arrive jamais ici") # ce code ne s'éxécute pas
except Exception as e: # on récupère l'objet exception et on l'appelle e
    # l'exécution continue
    print(f"ici on écrit un code pour corriger l'exception [{e}]")
print("et après le code continue")"""

# gestion d'exception 
def a():
    raise Exception('Coucou de a()')
def b():
    print('b() commence')
    a()
    print('b() finit')

try:
    b()
except Exception as e:
    print("l'exception vous envoie le message :", e)