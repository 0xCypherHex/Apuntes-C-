/*

    Este programa tiene una funcion que recibe como entrada la base y el
    exponente de un numero y calcule la potencia llamandose asi misma

*/

#include <stdio.h>

int iCalcularPotencia(int iBase, int iPotencia);

int main(void) {

  int iBase = 0;
  int iPotencia = 0;
  int iResultado = 0;

  printf("Digite la base del numero a potenciar: ");
  scanf("%d", &iBase);

  printf("Digite la potencia: ");
  scanf("%d", &iPotencia);

  iResultado = iCalcularPotencia(iBase, iPotencia);

  printf("Resultado: %d\n", iResultado);

  return 0;
}
int iCalcularPotencia(int iBase, int iPotencia) {

  if (iPotencia == 0) {

    return 1;
  }

  return (iBase * iCalcularPotencia(iBase, iPotencia - 1));
}