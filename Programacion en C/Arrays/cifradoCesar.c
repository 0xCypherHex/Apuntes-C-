#include <stdio.h>

int main(void) {

  char acMensaje[100] = {0};

  printf("Introduzca su mensaje: ");
  scanf("%s", acMensaje);

  int iDesplazamiento = 0;

  printf("Ingrese el número de desplazamiento: ");
  scanf("%d", &iDesplazamiento);

  int iIndex = 0;

  for (iIndex = 0; acMensaje[iIndex] != '\0'; iIndex++) {

    acMensaje[iIndex] += iDesplazamiento;
  }

  printf("El mensaje cifrador es: %s\n", acMensaje);

  return 0;
}