#include <stdio.h>
#include <string.h>

int main(void) {

  char acPalabra[50] = {0};

  int iEsPalindromo = 1;

  printf("Ingrese la palabra a verificar: ");
  scanf("%s", acPalabra);

  long iLongitud = strlen(acPalabra);

  int iInicio = 0;
  int iFin = iLongitud - 1;

  for (iInicio = 0; iInicio < iFin; iInicio++, iFin--) {

    if (acPalabra[iInicio] == acPalabra[iFin]) {

      iEsPalindromo = 1;
    } else if (acPalabra[iInicio] != acPalabra[iFin]) {

      iEsPalindromo = 0;
      break;
    }
  }

  if (iEsPalindromo == 1) {

    printf("La palabra es un palindromo.\n");
  } else {

    printf("No es un palindromo.\n");
  }

  return 0;
}