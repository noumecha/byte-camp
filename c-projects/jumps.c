#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, min;
    printf("Entrez deux nombres : \n");
    scanf("%d %d", &a, &b);
    min = (a < b) ? a : b;
    int i;
    for (i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            goto trouve;
        }
    }
    return 7;
trouve:
    printf("le plus petit diviseur commun de %d et %d est %d", a, b, i);
    return 7;
}