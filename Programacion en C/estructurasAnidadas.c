#include <stdio.h>

int main(void) {
    // Variables declaradas con Notación Húngara
    int iNumero = 0;

    printf("Ingresa un número entero: ");
    scanf("%d", &iNumero);

    // Primera condición: Evalúa si el número es positivo
    if (iNumero > 0) {
        // Condición anidada: Solo se evalúa si la condición anterior fue verdadera
        if (iNumero % 2 == 0) {
            printf("El número es positivo y PAR.\n");
        } else {
            printf("El número es positivo e IMPAR.\n");
        }
    } else if (iNumero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es exactamente cero.\n");
    }

    return 0;
}