#include<stdio.h>

int main () {

    int a=11,b=12;
    char c='Z';
    float d=8.91234;

    printf("%X%i%c%.3f", a, b, c, d);

    // el %.3f le dice que solo imprima los primeros tres decimales
    // %X imprime su valor en hexadecimal

    return 0;
}