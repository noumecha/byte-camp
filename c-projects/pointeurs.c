#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char **argv) {
    /** Syntaxe déclaration pointeur 
    int a,b;
    printf("Entrez deux nombres entiers : \n");
    scanf("%d %d", &a, &b);
    int *pa, *pb, **ppa;
    pa = &a;
    pb = &b;
    ppa = &pa;
    printf("printf a = %d\n", **ppa);
    printf("Valeurs initiales : a = %d et b = %d\n", *pa, *pb);
    swap(pa,pb);
    printf("Valeurs finales après changement : a = %d, b = %d", a, b);*/
    // pointeur générique : 
    int x;
    void *p;
    p = &x;
    printf("Entrer un nombre entier : \n");
    scanf("%d", &x);
    printf("l'adresse de la variable est : %p\n", p);
    return 7;
}