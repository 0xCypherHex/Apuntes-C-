#include <stdio.h> // Biblioteca obligatoria para entrada y salida

int main(void) {
    // Declaración e inicialización con Notación Húngara
    int iEdad = 0;
    float fEstatura = 0.0f;

    // Solicitud y captura de datos de entrada
    printf("Ingresa tu edad: ");
    scanf("%d", &iEdad); // Usa '&' para enviar la dirección de memoria de iEdad

    printf("Ingresa tu estatura en metros: ");
    scanf("%f", &fEstatura); // Usa '&' para enviar la dirección de memoria de fEstatura

    // Salida de datos procesados
    printf("\n--- Registro Exitoso ---\n");
    printf("Edad ingresada: %d años\n", iEdad);
    printf("Estatura ingresada: %.2f metros\n", fEstatura);

    return 0; // Fin de la ejecución
}