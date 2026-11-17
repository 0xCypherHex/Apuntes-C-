#include <stdio.h>

int main(void) {

  int iLimite = 0;
  int iTermino1 = 0;
  int iTermino2 = 1;
  int iSiguiente = 0;

  printf("Ingrese el limite de la serie fibonacci: ");
  scanf("%d", &iLimite);

  for (iTermino1 = 0; iTermino1 <= iLimite;
       iTermino1 = iSiguiente) { // iTermino1 ahora es 1

    printf("%d ", iTermino1); // imprime 0

    iSiguiente = iTermino2; // ahora es 1

    iTermino2 = iTermino1 +
                iTermino2; // ahora iTermino2 es 1  la siguiente vez como
                           // iTermino1 es 1 y iTermino2 es 1, iTermino2 valdra
                           // 2 asi que iTermino1 valdra 2 en el iterador
  }

  printf("\n");

  return 0;
}