/*

Si un arreglo unidimensional (vector) es como una lista o una sola fila de
casilleros, un arreglo bidimensional (matriz) es como un tablero o una hoja de
cálculo organizada en filas y columnas.

Aunque mentalmente nos imaginamos una matriz como un tablero con dos dimensiones
(filas y columnas), la memoria RAM física siempre es lineal y de una sola
dimensión.

El compilador de C organiza las matrices en memoria utilizando un esquema
denominado Row-Major Order (orden por filas). Esto significa que almacena en
direcciones contiguas toda la primera fila completa, inmediatamente después toda
la segunda fila, y así sucesivamente.

Regla de Sintaxis y Acceso: En C, el primer corchete indica la Fila y el segundo
indica la Columna: aaiMatriz[iFila][iColumna]. Ambos índices inician siempre en
0.

Para arreglos bidimensionales utilizaremos el prefijo doble aa (array of arrays
/ matriz) seguido por la letra del tipo de dato primitivo:

- aai = Matriz de enteros (array of array of int).
- aaf = Matriz de flotantes (array of array of float).
- aac = Matriz de caracteres (array of array of char).

*/

// Ejemplo

#include <stdio.h>

// Para manipular una matriz utilizamos bucles anidados: el bucle externo
// controla la fila (iFila) y el interno recorre columnas (iColumna)

int main(void) {

  // Declaración e inicialización explícita de una matriz de 2 filas por 3
  // columnas
  int aaiMatriz[2][3] = {
      {10, 20, 30}, // Elementos de la Fila 0
      {40, 50, 60}  // Elementos de la Fila 1
  };

  int iFila = 0;
  int iColumna = 0;

  printf("=== Impresion de la Matriz por Filas y Columnas ===\n\n");

  // Ciclo externo: Recorre cada fila
  for (iFila = 0; iFila < 2; iFila++) {

    // Ciclo interno: Recorre cada columna de la fila actual
    for (iColumna = 0; iColumna < 3; iColumna++) {
      printf("[%d][%d] = %d\t", iFila, iColumna, aaiMatriz[iFila][iColumna]);
    }

    // Al terminar de imprimir las columnas de la fila actual, hacemos un salto
    // de línea
    printf("\n");
  }

  return 0;
}
