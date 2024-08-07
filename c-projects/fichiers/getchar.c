#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    /* Syntaxe fopen 
    FILE *fopen(char *chemin_vers_le_fichier, char mode);*/
    FILE *fp = fopen("texte.txt", "r");
    // ouverture du fichier
    if (fp == NULL)
        printf("le fichier texte.txt n'a pas pu etre ouvert\n");
    else
        printf("Ouverture du fichier texte.txt avec succes\n");
    // récupération d'un caractère
    int c = fgetc(fp);
    printf("caractère : %c\n", c);
    /*if (c != EOF)
        printf("%c\n", c);
    // récupération d'un chaine :
    char mot[7];
    if (fgets(mot, sizeof mot, fp) != NULL)
        printf("%s\n", mot);*/
    // fermeture du fichier
    if (fclose(fp) == EOF) 
        printf("Erreur lors de la fermeture du fichier texte.txt");
    else
        printf("Fermeture du fichier texte.txt");
    return 0;
}