#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,i=1,div=0;
    printf("Entrez un nombre : ");
    scanf("%d", &x);
    /** Syntaxe boucle while 
    while (i <= x) {
        if ( x % i == 0)
            div += 1;
        i++;
    }*/
    /** Syntaxe boucle do -- while 
    do {
        if ( x % i == 0)
            div += 1;
        i++;
    } while (i <= x);*/
    /** Syntaxe boucle for */
    for (int j = 1; j <= x ; j++) {
        if ( x % j == 0)
            div += 1;
    }
    (div == 2 || x == 1 ) ? printf("Le nombre est premier !") : printf("Le nombre n'est pas premier !");
}