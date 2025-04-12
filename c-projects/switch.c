#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Entrez votre note : \n");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
    case 9:
        printf("Résultat médiocre \n");
        break;
    case 10:
    case 11:
        printf("Résultat passable \n");
        break;
    case 15:
        printf("Résultat bien \n");
        break;
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

switch (variable) 
{
    case valeur1:
        /* instruction pour valeur 1 */
        break;
    case valeur2:
        /* instructions pour valeur 2 */
        break;
    ...
    case valeurn:
        /* instruction pour valeur n */
        break;
    default:
        /* instruction par défaut */
        break;
}