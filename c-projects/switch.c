#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Entrez votre note : \n");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Résultat médiocre \n");
        break;
    case 10:
    case 11:
        printf("Résultat passable \n");
        break;
    case 12:
    case 13:
    case 14:
    case 15:
        printf("Résultat bien \n");
        break;
    case 16:
    case 17:
    case 18:
        printf("Résultat Très bien \n");
        break;
    case 19:
    case 20:
        printf("Résultat Excellent \n");
        break;
    default:
        printf("Résultat non évalué \n");
        break;
    }
    return 0;
}