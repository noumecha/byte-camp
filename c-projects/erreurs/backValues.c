#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,t;
    /*printf("Entre deux nombres séparer par un espace : \n");
    if(scanf("%d %d", &x, &y) != 2) { 
        printf("Reesayer : \n");
    } else {
        printf("Vous avez entrer : %d et %d\n",x,y);
    }*/
    t = 0;
    do {
        printf("Essayer :  \n");
        if(scanf("%d %d", &x, &y) == 2) {
            printf("Vous avez entrer : %d et %d\n",x,y);
            t = 1;
        } else {
            printf("Vous n'avez pas saisies deux nombres : \n");
            printf("%d %d\n",&x,&y);
            t = 0;
        }
    } while (t == 0);
    return EXIT_SUCCESS;
}