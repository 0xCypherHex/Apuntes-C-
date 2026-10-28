/*

Este programa solicita al usuario una cantidad de numeros al usuario, el
programa debe reservar la memoria exacta en el heap usando malloc, permita
llenarlo, calcule el promedio, y encuentre el valor máximo utilizando aritmética
de punteros.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

  int *aiPtr;

} StPunteros;

int main(void) {

  StPunteros p1;

  int iNumeros = 0;
  int iSuma = 0;
  float fPromedio = 0;


  printf("Ingrese la cantidad deseada de números: ");
  scanf("%d", &iNumeros);

  if (iNumeros <= 0) {

    printf("Cantidad ingresada incorrecta.\n");
    return 1;
  }

  // Usamos sizeof para obtener el tamaño en bytes

  p1.aiPtr = NULL;
  p1.aiPtr = malloc(iNumeros * sizeof(int));

  if(p1.aiPtr == NULL){

    printf("No se pudo asignar memoria.\n");
    return 1;
  }

  printf("Introduzca los %d números en el arreglo... ", iNumeros);

  for (int iIndex = 0; iIndex < iNumeros; iIndex++){

    printf("Elemento %d: ", iIndex + 1);
    scanf("%d", &p1.aiPtr[iIndex]);
  }

  int iMaximo = p1.aiPtr[0];

  //  Calcular promedio y valor máximo

  for (int iIndex = 0; iIndex < iNumeros; iIndex++){

    iSuma += p1.aiPtr[iIndex];
    
    if (p1.aiPtr[iIndex] > iMaximo){

      iMaximo = p1.aiPtr[iIndex];
    }

  }

  fPromedio = iSuma / iNumeros;

  printf("\n--- Resultados ---\n");
  printf("Suma total: %d\n", iSuma);
  printf("Promedio: %.2f\n", fPromedio);
  printf("Valor máximo: %d\n", iMaximo);

  free(p1.aiPtr);
  return 0;
}