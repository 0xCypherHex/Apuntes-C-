/*

Un arreglo de estructuras es una colección homogénea y de tamaño fijo donde cada
elemento del vector es una variable de tipo struct.

En la memoria RAM, un arreglo de estructuras se almacena como un bloque contiguo
de memoria donde los elementos ([0], [1], [2], etc.) se alojan uno tras otro de
forma estrictamente secuencial. A su vez, dentro de cada elemento, sus miembros
ocupan posiciones contiguas.

Arreglo en Memoria RAM: struct StProducto astInventario[3]

 Elemento [0]                           Elemento [1] Elemento [2]
+----------+---------------+---------+ +----------+---------------+---------+
+----------+---------------+---------+ | iCodigo  | szNombre      | fPrecio | |
iCodigo  | szNombre      | fPrecio | | iCodigo  | szNombre      | fPrecio | | (4
B)    | (30 B)        | (4 B)   | | (4 B)    | (30 B)        | (4 B)   | | (4 B)
| (30 B)        | (4 B)   |
+----------+---------------+---------+ +----------+---------------+---------+
+----------+---------------+---------+ 0x7FFF00 0x7FFF26 0x7FFF4C

arreglo[indice].miembro

Lectura de valor: printf("%f\n", astInventario[i].fPrecio);
Escritura con scanf: scanf("%d", &astInventario[i].fPrecio);
Escritura con strcpy: strcpy(astInventario[i].szNombre. "Vitor");

*/

#include <stdio.h>
#include <string.h>

#define TAMANO_INVENTARIO 3

/* Definición de la plantilla de la estructura */
struct StProducto {
  int iCodigo;
  char szNombre[30];
  float fPrecio;
};

int main(void) {
  /* Declaración de un arreglo de 3 estructuras StProducto */
  struct StProducto astInventario[TAMANO_INVENTARIO];
  int iIndex = 0;

  /* Llenado estático del arreglo para fines demostrativos */
  astInventario[0].iCodigo = 101;
  strcpy(astInventario[0].szNombre, "Galletas de Chocolate");
  astInventario[0].fPrecio = 18.50f;

  astInventario[1].iCodigo = 102;
  strcpy(astInventario[1].szNombre, "Refresco 600ml");
  astInventario[1].fPrecio = 22.00f;

  astInventario[2].iCodigo = 103;
  strcpy(astInventario[2].szNombre, "Agua Mineral");
  astInventario[2].fPrecio = 15.00f;

  /* Recorrido e impresión del arreglo mediante un ciclo for */
  printf("=== INVENTARIO DE PRODUCTOS ===\n\n");
  for (iIndex = 0; iIndex < TAMANO_INVENTARIO; iIndex++) {
    printf("Producto %d:\n", iIndex + 1);
    printf("  Codigo: %d\n", astInventario[iIndex].iCodigo);
    printf("  Nombre: %s\n", astInventario[iIndex].szNombre);
    printf("  Precio: $%.2f\n", astInventario[iIndex].fPrecio);
    printf("-------------------------------\n");
  }

  return 0;
}
