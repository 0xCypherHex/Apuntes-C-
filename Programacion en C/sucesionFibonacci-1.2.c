#include <stdio.h>

int main(void) {

  int iLimite = 0;

  printf("Ingrese el limite de la serie fibonacci: ");
  scanf("%d", &iLimite);

  int arr[iLimite + 2]; // Ingresamos mas 2 por seguridad

  for (int i = 0;;
       i++) { // No podemos hacer el condicional aqui porque arr sigue vacio

    if (i == 0) {

      arr[i] = 0;

    }

    else if (i == 1) {

      arr[i] = 1;

    }

    else {

      arr[i] = arr[i - 1] + arr[i - 2];
    }

    if (arr[i] > iLimite) {

      break; // Rompemos el ciclo cuando el valor es mayor al ingresado
    }

    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}
