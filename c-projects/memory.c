#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("_Bool : %zu\n", sizeof(_Bool));
    printf("char : %zu\n", sizeof(char));
    printf("short : %zu\n", sizeof(short));
    printf("int : %zu\n", sizeof(int));
    printf("long : %zu\n", sizeof(long));
    printf("float : %zu\n", sizeof(float));
    printf("double : %zu\n", sizeof(double));
    printf("long double : %zu\n", sizeof(long double));
    printf("affichage de la taille d'un multiplet en utilisant une valeur : %zu\n", sizeof 5);

    return 7;
}