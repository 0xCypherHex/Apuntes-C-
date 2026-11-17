#include<stdio.h>
#include<math.h>

int main (void) {

    const double dNum1 = 819.56723901;

    double dNum1RedondeadoAbajo = floor(dNum1);
    double dNum1RedondeadoArriba = ceil(dNum1);    

    double dNum1ElevadoAlCuadrado = pow(dNum1, 2);

    // Raiz cuadrada

    double dNum1Raiz = sqrt(dNum1);

    printf("Numero redondeado hacia abajo: %lf\n", dNum1RedondeadoAbajo);
    printf("Numero redondeado hacia arriba: %lf\n", dNum1RedondeadoArriba);
    printf("Elevado al cuadrado: %lf\n", dNum1ElevadoAlCuadrado);
    printf("Raiz del numero: %lf\n", dNum1Raiz);

    return 0;
}