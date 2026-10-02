
/*
    Regla de oro: En C, el primer elemento de un arreglo SIEMPRE se encuentra en
    el índice 0, y el último elemento se encuentra en el índice $N - 1$ (donde
    $N$ es el tamaño total del arreglo).

    Para mantener la calidad y el estándar de nuestra materia, utilizaremos
   prefijos específicos para arreglos:


   - ai para un arreglo de enteros (array of int = aiTemperaturas).
   - af para un arreglo de flotantes (array of float = afCalificaciones).
   - ac para un arreglo de caracteres (array of -acchar = acNombre).

    */

#include <stdio.h>

int main(void) {

  // Declaración e inicialización en cero de un arreglo de 5 flotantes
  float afCalificaciones[5] = {0.0f};

  int iIndice = 0; // Variable de control para indexar el arreglo

  // 1. Llenado del arreglo
  printf("=== Captura de Calificaciones ===\n");

  for (iIndice = 0; iIndice < 5; iIndice++) {

    printf("Ingrese la calificacion del alumno [%d]: ", iIndice + 1);
    scanf("%f", &afCalificaciones[iIndice]);
  }

  // 2. Lectura y despliegue de los datos guardados
  printf("\n=== Lista de Calificaciones Capturadas ===\n");

  for (iIndice = 0; iIndice < 5; iIndice++) {

    printf("Alumno %d (Indice %d): %.2f\n", iIndice + 1, iIndice,
           afCalificaciones[iIndice]);
  }

  return 0;
}