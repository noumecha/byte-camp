#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int main() {

    errno = 0;
    double x = pow(-1, 0.5);
    if(errno == 0)
        printf("x = %f\n", x);
    return EXIT_SUCCESS;
}