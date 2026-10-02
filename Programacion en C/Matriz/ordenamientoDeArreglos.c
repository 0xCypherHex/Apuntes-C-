/*

    EL intercambio de valores (swap):

    Para cambiar el orden de dos elementos dentro de un arreglo en C,
    necesitamos entender cómo funciona el intercambio en la memoria. Si
    intentamos hacer:

    aiNumeros[0] = aiNumeros[1];
    aiNumeros[1] = aiNumeros[0]; // ¡ERROR! El valor original de aiNumeros[0] ya
    // se sobrescribió.

    Perdemos el valor original de aiNumeros[0]. Para solucionar esto, ocupamos
    una variable temporal o auxiliar (iAuxiliar) que sirva como "casillero de
    respaldo".

    Esquema en Memoria del Intercambio (Swap):

  aiNumeros[0] = 8            aiNumeros[1] = 3            iAuxiliar = ?

  1. Guardar copia:           iAuxiliar = aiNumeros[0]    (iAuxiliar vale 8)
  2. Sobrescribir:           aiNumeros[0] = aiNumeros[1]  (aiNumeros[0] vale 3)
  3. Recuperar respaldo:     aiNumeros[1] = iAuxiliar     (aiNumeros[1] vale 8)

    El método de la burbuja:

    Existen diversos algoritmos de ordenamiento (Burbuja, Selección, Inserción,
    Quicksort). El Método de la Burbuja es el más didáctico para iniciar en la
    programación estructurada.

    ¿Cómo funciona en flujos de datos?

    - Compara pares contiguos de elementos (aiNumeros[j] y aiNumeros[j + 1]).
    - Si el elemento de la izquierda es mayor que el de la derecha, los
      intercambia (para orden ascendente).
    - Repite este proceso $N - 1$ veces. En cada pasada completa, el número más
      grande "flota" hacia la última posición de la derecha, exactamente como
  una burbuja de aire que sube a la superficie.

*/

// Ordenamiento Ascendente

#include <stdio.h>

int main(void) {

  // Declaración e inicialización de un arreglo desordenado
  int aiNumeros[5] = {25, 12, 5, 89, 42};
  int iTamano = 5;
  int iIndiceExt = 0; // Controla el número de pasadas completas
  int iIndiceInt = 0; // Recorre las parejas adyacentes
  int iAuxiliar = 0;  // Variable temporal para el intercambio (swap)

  printf("=== Arreglo Original ===\n");

  for (iIndiceExt = 0; iIndiceExt < iTamano; iIndiceExt++) {

    printf("%d ", aiNumeros[iIndiceExt]);
  }

  printf("\n\n");

  // Algoritmo de Ordenamiento por Burbuja
  // Ciclo externo: ejecuta N - 1 pasadas
  for (iIndiceExt = 0; iIndiceExt < iTamano - 1; iIndiceExt++) {

    // Ciclo interno: compara elementos adyacentes
    for (iIndiceInt = 0; iIndiceInt < iTamano - 1 - iIndiceExt; iIndiceInt++) {

      // Criterio de comparación (Ascendente: si el de la izquierda es mayor que
      // el de la derecha)
      if (aiNumeros[iIndiceInt] > aiNumeros[iIndiceInt + 1]) {

        // Proceso de Intercambio (Swap) en RAM
        iAuxiliar = aiNumeros[iIndiceInt];
        aiNumeros[iIndiceInt] = aiNumeros[iIndiceInt + 1];
        aiNumeros[iIndiceInt + 1] = iAuxiliar;
      }
    }
  }

  printf("=== Arreglo Ordenado (Ascendente) ===\n");

  for (iIndiceExt = 0; iIndiceExt < iTamano; iIndiceExt++) {

    printf("%d ", aiNumeros[iIndiceExt]);
  }

  printf("\n");

  return 0;
}