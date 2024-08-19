#include <stdio.h>
#include <stdlib.h>

void showTable(int *t, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("element %d du tableau tab : %d\n", i+1, t[i]);
    }
}

void showTableTwoDim(int (*t)[5], int taille, int taille1) {
    for (int i = 0 ; i < taille ; i++)
        for (int j = 0 ; j < taille1 ; j++)
            printf("t[%d][%d] = %d\n", i, j,t[i][j]);
}
int main(int argc, char **argv) {
 
    int tab[6] = {45, 10, 29, 6, 44, 75}; 
    showTable(tab, 6);
    /*déclaration d'un tableau multidimensionnel : 2 dimension 
    int tab1[4][7];
    // initialisation avec longueur implicite : 
    int tab2[][5] = {{3, 6, 9, 12},{[0] = 0, [1] = 1, [2] = 5, [4] = 39}};*/ 
    // initialisation avec longuer explicite : 
    int tab3[3][5] = {{6, 12, 18},{[1] = 33, [2] = 66}};
    // parcours d'un tableau multidimensionnel : 
    showTableTwoDim(tab3, 3, 5);
    /* pointeur sur un tableau : 
    type (*identificateur)[taille];
    // pointeur sur un tableau à n dimensions : 
    type (*identificateur)[taille1][taille2]...[taillen];*/
    // tableau literal : 
    showTable((int []){5, 6 , 9}, 3);

    return 7;
}