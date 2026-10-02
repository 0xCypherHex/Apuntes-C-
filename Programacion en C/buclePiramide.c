#include <stdio.h>

int main(void) {

  int iFilas = 0;

  int iAsteriscos;

  printf("Digite la cantidad de filas: ");
  scanf("%d", &iFilas);

  for (int i = 0; i < iFilas; i++) {

    // Imprimir espacios
    for (int j = 0; j < iFilas - i - 1; j++) {
      printf(" ");
    }

    // Imprimir asteriscos
    for (iAsteriscos = 0; iAsteriscos < 2 * i + 1; iAsteriscos++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
