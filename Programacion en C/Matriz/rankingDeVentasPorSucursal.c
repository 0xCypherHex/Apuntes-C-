
/*
    El programa debe solicitar el total de ventas mensuales de 5 sucursales
   distintas y amacenarlas en un arreglo. Posteriormente, el programa debe
   aplicar un algoritmo de ordenamiento para organizar los datos internamente de
   mayor a menor (descendente) e imprimir en consola el TOP 5 de ventas.
*/

#include <stdio.h>

int main(void) {

  int aiVentasSucursales[5] = {0};
  int iAuxiliar = 0;
  int iIndexExt = 0;
  int iIndexInt = 0;

  for (int iIndex = 0; iIndex < 5; iIndex++) {

    printf("Introduzca el el total de ventas de la sucursal %d :", iIndex);
    scanf("%d", &aiVentasSucursales[iIndex]);
  }

  // Algoritmo de ordenamiento por burbuja

  // Ciclo externo: ejecuta N - 1 pasadas
  for (iIndexExt = 0; iIndexExt < 5 - 1; iIndexExt++) {

    // Ciclo interno: compara elementos adyacentes
    for (iIndexInt = 0; iIndexInt < 5 - iIndexExt - 1; iIndexInt++) {

      // Criterio de comparación: descendente
      if (aiVentasSucursales[iIndexInt] < aiVentasSucursales[iIndexInt + 1]) {

        // Proceso de Intercambio
        iAuxiliar = aiVentasSucursales[iIndexInt];
        aiVentasSucursales[iIndexInt] = aiVentasSucursales[iIndexInt + 1];
        aiVentasSucursales[iIndexInt + 1] = iAuxiliar;
      }
    }
  }

  // Imprimir el TOP 5 de ventas

  for (iIndexExt = 0; iIndexExt < 5; iIndexExt++) {

    printf("El TOP %d es: %d\n", iIndexExt, aiVentasSucursales[iIndexExt]);
  }

  return 0;
}
