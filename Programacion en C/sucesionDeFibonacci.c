#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int iLimite = 0;

  typedef struct {

    int *iVector;
    int iTamaño;

  } array_vector;

  printf("Introduzca el limite de la serie fibonacci: ");
  scanf("%d", &iLimite);

  array_vector p1;

  p1.iTamaño = iLimite;

  p1.iVector = (int *)malloc(p1.iTamaño * sizeof(int));

  if (p1.iVector == NULL) {

    printf("ERROR \n");
    return 1;
  }

  for (int i = 0; i < p1.iTamaño; i++) {

    if (i == 0) {

      p1.iVector[i] = 0;

    }

    else if (i == 1) {

      p1.iVector[i] = 1;

    }

    else {

      p1.iVector[i] =
          p1.iVector[i - 1] +
          p1.iVector[i -
                     2]; // Esto hace que sume las dos posiciones anteriores.
    }

    printf("%d, ", p1.iVector[i]);
  }

  printf("\n");

  free(p1.iVector);

  return 0;
}