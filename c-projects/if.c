#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Entrez votre age : \n");
    scanf("%d", &age);
    if (age < 18) {
        printf("Vous êtes mineur!\n");
    } else if (age > 18 && age < 21) {
        printf("Vous êtes adoslescent");
    } else if (age > 18 && age < 50) {
        printf("Vous êtes adulte et majeur"); 
    } else {
        printf("Vous êtes un vétéran");
    }
    return 0;
}

if(/* condition 1 */) {
    // code à exécuter si la condition est vraie
} else if (/* condition 2*/) {
    // code si condition 2 est vraie
} else if (/* condition 3*/) {
    // code si condition 3 est vraie
}