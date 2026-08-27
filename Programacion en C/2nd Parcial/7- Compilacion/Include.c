#include <stdio.h>
#include "stats.h"

int main(){
    printf("SESION\n");

    float a = 9, b = 6;
    float av = average(a, b);
    float m = minimum(a, b);
    printf("%f, %f\n", av, m);
    return 0;
}
