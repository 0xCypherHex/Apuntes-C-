#include <stdio.h>
#include <string.h>

struct StLibro {

  int iISBN;
  char szTitulo[50];
  float fPrecio;
};

int main(void) {

  struct StLibro stDatosLibro;

  printf("Introduzca el ISBN: ");
  scanf("%d", &stDatosLibro.iISBN);

  // Limpiar bufer del teclado \n
  getchar();

  printf("Introduzca el titulo del libro: ");
  fgets(stDatosLibro.szTitulo, sizeof(stDatosLibro.szTitulo), stdin);

  printf("Introduzca el precio del libro: ");
  scanf("%f", &stDatosLibro.fPrecio);

  printf("Datos del libro: \n\n ISBN: %d \n Titulo: %s \n Precio: %.2f \n",
         stDatosLibro.iISBN, stDatosLibro.szTitulo, stDatosLibro.fPrecio);

  return 0;
}
