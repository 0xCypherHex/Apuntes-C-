/*

Este programa solicita al usuario una cantidad de numeros al usuario, el
programa debe reservar la memoria exacta en el heap usando malloc, permita
llenarlo, calcule el promedio, y encuentre el valor máximo utilizando aritmética
de punteros.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

  int *aiPtr[100];

} StPunteros;

int main(void) {

  int iNumeros = 0;

  StPunteros p1;

  printf("Ingrese la cantidad deseada de números: ");
  scanf("%d", &iNumeros);

  if (iNumeros > 0) {

    printf("Cantidad ingresada incorrecta.\n");
    return 1;
  }

  // Usamos sizeof para obtener el tamaño en bytes

  *p1.aiPtr = NULL;
  *p1.aiPtr = malloc(iNumeros * sizeof(int));

  free(p1.aiPtr);
  return 0;
}