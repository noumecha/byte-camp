#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    FILE *f = fopen("texte.txt", "r");
    // ouverture du fichier 
    if(f == NULL)
        printf("Erreur lors de l'ouverture du fichier texte.txt\n");
    else
        printf("Ouveture du fichier texte.txt avec succes\n");
    // lecture d'une ligne
    char line[12];
    /* Syntaxe 
    char *fgets(char *tampon, int taille, FILE *flux);*/
    fgets(line, sizeof line, f);
    printf("Chaine recuperer dans le fichiers : %s\n",line);
    // fermeture du fichier 
    if(fclose(f) == EOF)
        printf("Erreur lors de la fermture du fichier\n");
    else
        printf("Fermeture du fichier avec succes\n");
    return 0;
}