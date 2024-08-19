#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Entrez votre age : \n");
    scanf("%d", &age);
    (age >= 0 && age < 21) ? printf("Vous etes mineur") : printf("Vous etes desormais majeur");
    return 7;
}