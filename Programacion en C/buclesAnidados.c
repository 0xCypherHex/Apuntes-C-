
/*
Las estructuras repetitivas anidadas consisten en colocar un bucle (ya sea for,
while o do-while) dentro del cuerpo de otro bucle.
*/

#include <stdio.h>

int main(void) {
  // Declaración de variables de control usando Notación Húngara
  int iFila = 0;
  int iColumna = 0;

  // Ciclo externo: Controla las filas (3 repeticiones)
  for (iFila = 1; iFila <= 3; iFila++) {

    // Ciclo interno: Controla las columnas (se ejecuta 3 veces por cada fila)
    for (iColumna = 1; iColumna <= 3; iColumna++) {
      printf("[%d,%d] ", iFila,
             iColumna); // Imprime coordenadas sin salto de línea
    }

    // Salto de línea crucial: se ejecuta al terminar cada fila completa
    printf("\n");
  }

  return 0;
}