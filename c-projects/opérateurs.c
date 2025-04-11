variable += 1; /* Icrémentation */
variable -= 1; /* Décrémentation */

++variable; /* Incrémentation */
--variable; /* Décrémentation */

variable++; /* Incrémentation */
variable--; /* Décrémentation */

identificateur = nouvelle_valeur;

type identificateur = valeur;

#include <stdio.h>

int main(void) {
    int age;
    printf("Quel est votre age ? ");
    scanf("%d", &age);
    printf("Vous avez %d an(s)\n", age);
    return 0;
}