#include <stdio.h>
#include <stdlib.h>

struct personne
{
    int age;
    double size;
    double weight;
};

struct complexe {
    double reel;
    double img;
};

int main() {
    // Syntaxe structure litterale : 
    (type) {element1, element2};
    // Exemple : 
    (struct temps) {.heures = 14, .minutes = 30, .secondes = 45};
    struct personne p = {24, 187.5, 68.5};
    struct personne p1 = {.size = 132.6, .age = 15, .weight = 87};
    struct personne *ptr = &p1;
    ptr->age = 25;
    printf("age de p1 = %d\n", p1.age);
    printf("personne 1 : age = %d; taille = %.1f; poids = %.1f\n", p.age, p.size, p.weight);
    struct complexe c = {7.7, 9.5};
    printf("c=%.1f + %.1fi\n", c.reel, c.img);
    return 0;
}