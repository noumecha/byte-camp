#include <stdio.h>
#include <stdlib.h>
/** Syntaxe prototype d'une fonction : 
type nom(paramètres); */
/** Exemple d'utilisation d'une fonction */
int min(int x, int y) {
    int min = (x < y) ? x : y;
    return min;
}
void ppcd (int a, int b) {
    int i;
    for (i = 2; i <= min(a,b); i++) {
        if (a % i == 0 && b % i == 0) {
            printf("le plus petit diviseur commun de %d et %d est %d", a, b, i);
        }
    }
}

int main () {
    int n, m;
    printf("Entrez deux nombres : \n");
    scanf("%d %d", &n, &m);
    ppcd(n, m);
    return 0;
}