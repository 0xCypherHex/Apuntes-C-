#include <stdio.h>

/*
    Actividad 2.8 Declaraciones y expresiones
*/


int main(void) {
    // Declaraciones usando Notación Húngara
    float fNota1 = 8.0f;
    float fNota2 = 9.5f;
    float fNota3 = 7.4f;
    float fPromedio = 0.0f;
    int iEsAprobado = 0; // En C no existe tipo boolean nativo clásico: 1 es true, 0 es false

    // Expresión aritmética
    fPromedio = (fNota1 + fNota2 + fNota3) / 3.0f;

    // Expresión relacional y lógica combinada
    iEsAprobado = (fPromedio >= 6.0f) && (fNota1 >= 6.0f);

    printf("Promedio: %.2f | Estatus Aprobado (1=Si, 0=No): %d\n", fPromedio, iEsAprobado);

    return 0;
}