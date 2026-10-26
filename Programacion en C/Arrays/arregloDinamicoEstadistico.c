/*

Este programa solicita al usuario una cantidad de numeros al usuario, el
programa debe reservar la memoria exacta en el heap usando malloc, permita
llenarlo, calcule el promedio, y encuentre el valor máximo utilizando aritmética
de punteros.

*/

#include <stdio.h>

int main(void) {

  int iNumeros = 0;

  typedef struct {

    int iTamaño;
    int *iArreglo[100];

  } memoria_dinamica;

  memoria_dinamica p1;

  printf("Ingrese la cantidad deseada de números: ");
  scanf("%d", &iNumeros);

  if (iNumeros > 0) {

    printf("Cantidad ingresada incorrecta.\n");
    return 1;
  }

  // Usamos sizeof para obtener el tamaño en bytes

  *p1.iArreglo = NULL;
  p1.iTamaño = malloc(iNumeros * sizeof(int));

  return 0;
}