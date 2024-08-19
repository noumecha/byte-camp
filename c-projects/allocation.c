#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    // allocation d'un objet :
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Echec de l'allocaition \n");
    }
    *p = 10;
    printf("%d\n", *p);
    free(p);
    // allocation d'un tableau : 
    int *pt = malloc(sizeof(int) * 10);
    if (p == NULL){
        printf("Echec de l'allocaition du tableau \n");
    }
    for (int i = 0; i < 10; i++){
        pt[i] = i * 10;
        printf("pt[%d] = %d\n", i, pt[i]);
    }
    free(pt);
    return 7;
}