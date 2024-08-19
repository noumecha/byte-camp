#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

    /* Syntaxe fopen 
    FILE *fopen(char *chemin_vers_le_fichier, char mode);*/
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL)
        printf("le fichier texte.txt n'a pas pu être ouvers\n");
    else
        printf("Ouverture du fichier texte.txt avec succès\n");
    if (fputc('u', fp) == EOF)
        printf("Echec de l'écriture dans le fichier test.txt\n");
    if (fputs("Noumecha spaker", fp) == EOF)
        printf("Echen d'écriture dans le fichier test.txt");
    if (fclose(fp) == EOF) 
        printf("Erreur lors de la fermeture du fichier texte.txt");
    /*Syntaxe Fclose 
    int fclose(FILE *flux);*/ 
    /** Ecriture d'un caractère
    int putc(int char, FILE *flux);
    int fputc(int char, FILE *flux);
    int putchar(int ch); */

    return 7;
}