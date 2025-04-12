#lang_dico = {"php":True, "javascript":True, "css":True, "html":False}
#for l in lang_dico:
#    print(f"{l} est un langage de programmation : {lang_dico[l]}")
mois = ('jan','fev','mar','avr','mai','jun','jui','aou','sep','oct','nov','dec')
jours = (31, (28, 29), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
year = dict(zip(mois, jours))
for y in year:
    print(f"{y} a {year[y]} jours")