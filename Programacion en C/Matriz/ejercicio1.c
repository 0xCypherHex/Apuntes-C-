#include <stdio.h>

int main(void) {

  int aaiDatos[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  int iFila = 0;
  int iColumna = 0;

  for (iFila = 0; iFila < 3; iFila++) {

    for (iColumna = 0; iColumna < 3; iColumna++) {

      printf("Ingrese el valor de la fila %d columna %d: ", iFila + 1,
             iColumna + 1);
      scanf("%d", &aaiDatos[iFila][iColumna]);
    }
    printf("\n");
  }

  int iSuma = 0;

  for (int iTerador = 0; iTerador < 3; iTerador++) {

    iSuma += aaiDatos[iTerador][iTerador];
  }

  printf("La suma de su diagonal es: %d\n ", iSuma);

  return 0;
}