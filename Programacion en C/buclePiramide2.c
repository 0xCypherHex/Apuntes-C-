#include <stdio.h>

int main(void) {

  int iFilas = 0;
  int iAsteriscos;

  printf("Digite la cantidad de filas: ");
  scanf("%d", &iFilas);

  for (int i = 1; i <= iFilas; i++) {

    for (iAsteriscos = 1; iAsteriscos <= i; iAsteriscos++) {

      printf("*");
    }

    printf("\n");
  }

  return 0;
}