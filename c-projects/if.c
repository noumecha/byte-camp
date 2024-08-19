#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Entrez votre age : \n");
    scanf("%d", &age);
    if (age < 18) {
        printf("Vous êtes mineur!\n");
    } else if (age == 18 && age < 21) {
        printf("Vous êtes désormains majeur!\n");
    } else if (age > 21 && age <= 50) {
        printf("Vous êtes un adulte !\n");
    } else {
        printf("Vous êtes desormais un vétéran!\n");
    }
    return 0;
}