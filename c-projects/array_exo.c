#include <stdio.h>

int *tableau(void)
{
    static int tab[5] = {  1, 2, 3, 4, 5 };
    return tab;
}
int main(void)
{
    int *p = tableau();
    printf("%d\n", p[0]); 
    return 0;
}