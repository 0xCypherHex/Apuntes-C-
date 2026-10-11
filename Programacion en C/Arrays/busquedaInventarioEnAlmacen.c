/*

    Construir un programa que represente el mapa de un almacen mediante una
   matriz bidimensional (por ejemplo, 3 filas por 3 columnas), precargada con
   codigo o identificadores numericos de productos.

    Debe solicitar al usuario el codigo de producto que desea localizar. Usar el
    algoritmo de busqueda secuencial para recorrer las filas y columnas del
   almacen. Si encuentra el codigo desplegar las coordenadas de su ubicacion.
   Por el contrario emitir un mensaje de que no se encontro.

*/

#include <stdio.h>

int main(void) {

  int aiMapaAlmacen[3][3] = {{101, 102, 103}, {201, 202, 203}, {301, 302, 303}};

  int iFila = 0;
  int iColumna = 0;

  int iEncontrado = 0; // Bandera que indica si se encontró el prducto

  int iCodigoProducto = 0;

  printf("Ingrese el código del producto que desea encontrar: ");
  scanf("%d", &iCodigoProducto);

  // Busqueda secuencial en la matriz bidimensional

  for (iFila = 0; iFila < 3; iFila++) {

    for (iColumna = 0; iColumna < 3; iColumna++) {

      if (aiMapaAlmacen[iFila][iColumna] == iCodigoProducto) {

        printf("El producto con el código %d se encuentra en la fila %d "
               "columna %d.\n",
               iCodigoProducto, iFila, iColumna);

        iEncontrado = 1;
        break; // Salimos del bucle
      }
    }
    if (iEncontrado == 1) {
      break; // Salimos del bucle externo cuando se encuentre el producto
    }
  }

  if (iEncontrado == 0) {

    printf("El producto %d no se encontró.\n", iCodigoProducto);
  }

  return 0;
}