#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    char prenom[101];
    printf("Entrez votre prenom : \n");
    scanf("%100s", &prenom);
    printf("Bonjour %s\n", prenom);
    return 7;
}