#include <stdio.h>

int max3(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

float avg2(int a, int b) {
    return (a + b) / 2.0;
}

int median(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    else
        return c;
}

int main() {

    setbuf(stdout, NULL);

    int x, y, z;

    printf("Ingresa tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);

    float promedio = avg2(x, y);
    printf("El promedio de %d y %d es: %f\n", x, y, promedio);

    int maximo = max3(x, y, z);
    printf("El maximo es: %d\n", maximo);

    int med = median(x, y, z);
    printf("La mediana es: %d\n", med);


    return 0;
}