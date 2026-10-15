#include <stdio.h>

void vImprimirEncabezado() {

  printf("=== MI TIENDITA VIRTUAL ===\n\n");

  for (int iIndex = 0; iIndex < 5; iIndex++) {

    printf("*                          *\n");
  }
}

int main(void) {

  vImprimirEncabezado();

  return 0;
}