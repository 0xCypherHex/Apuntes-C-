#include <stdio.h>

int main(void) {
    // Declaración con Notación Húngara
    int iEdad = 0;

    printf("Ingresa tu edad: ");
    scanf("%d", &iEdad);

    // Estructura selectiva compuesta
    if (iEdad >= 18) {
        // Se ejecuta solo si la condición evalúa a verdadero (1)
        printf("Acceso permitido: Eres mayor de edad.\n");
    } else {
        // Se ejecuta solo si la condición evalúa a falso (0)
        printf("Acceso denegado: Eres menor de edad.\n");
    }

    return 0;
}