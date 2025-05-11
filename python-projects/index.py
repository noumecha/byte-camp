"""# Dans le fichier index on importe nos modules contenu dans 
# le repertoire projet_repertoire
from projet_repertoire.sous_paquet.module_a import bonjour as bjr
from projet_repertoire.sous_paquet.module_a import prensetez_vous as pr
bjr() #appele de la fonction bonjour du module_a
pr() # appele de la fonction présentez_vous du module_a"""

# utilisation des docstrings et des annotations de typ
def somme(a: int, b: int) -> int:
    """ fonction faisant la somme de deux nombre """
    return a + b
somme(4,7)