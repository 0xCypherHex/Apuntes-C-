#include <stdio.h>

int main(void) {

  int iFilas = 0;

  int iAsteriscos;

  printf("Digite la cantidad de filas: ");
  scanf("%d", &iFilas);

  for (int iContadorFilas = 0; iContadorFilas < iFilas; iContadorFilas++) {

    // Imprimir espacios
    for (int iEspacios = 0; iEspacios < iFilas - iContadorFilas - 1;
         iEspacios++) {
      printf(" ");
    }

    // Imprimir asteriscos
    for (iAsteriscos = 0; iAsteriscos < 2 * iContadorFilas + 1; iAsteriscos++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
