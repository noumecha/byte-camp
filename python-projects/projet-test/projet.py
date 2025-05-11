# autre méthode d'importer les modules
from mon_module import presentation
from mon_module import author as x
print(x) # j'utilise ma variable depuis mon projet
presentation() # j'utilise ma fonction depuis mon projet

# importation d'un repertoire ailleurs
import paquet.sous_paquet.sous_sous_paquet... etc