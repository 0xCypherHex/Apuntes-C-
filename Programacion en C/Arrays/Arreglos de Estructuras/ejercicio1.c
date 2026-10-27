#include <stdio.h>
#include <string.h>

struct StProducto {

  int iCodigo;
  char szNombre[30];
  float fPrecio;
};

int main(void) {

  const int TAMANO_INVENTARIO = 3;

  struct StProducto astProductos[TAMANO_INVENTARIO];

  for (int iIndex = 0; iIndex < TAMANO_INVENTARIO; iIndex++) {

    printf("\nProducto %d\n\n", iIndex);

    printf("Ingrese codigo: ");
    scanf("%d", &astProductos[iIndex].iCodigo);

    getchar();

    printf("Ingrese nombre: ");
    fgets(astProductos[iIndex].szNombre, sizeof(astProductos[iIndex].szNombre),
          stdin);

    size_t sLongitud = strlen(astProductos[iIndex].szNombre);

    if (sLongitud > 0 && astProductos[iIndex].szNombre[sLongitud - 1] == '\n') {

      astProductos[iIndex].szNombre[sLongitud - 1] = '\0';
    }

    printf("Ingrese Precio: ");
    scanf("%f", &astProductos[iIndex].fPrecio);

    getchar();
  }

  for (int iIndex = 0; iIndex < TAMANO_INVENTARIO; iIndex++) {

    printf("\nCodigo: %d\n", astProductos[iIndex].iCodigo);
    printf("Nombre: %s\n", astProductos[iIndex].szNombre);

    printf("Precio: %.2f\n\n", astProductos[iIndex].fPrecio);
  }

  return 0;
}