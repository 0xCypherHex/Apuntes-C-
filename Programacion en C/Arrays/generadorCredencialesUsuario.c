#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char acNombreUsuarioEnCrudo[100] = {0};
  char acNombreUsuarioProcesado[100] = {0};
  int iTeradorInterno = 0;
  char acLongitud[10] = {0};
  int iLongitud = 0;
  int iIndex = 0;

  printf("Introduzca su nombre y apellidos: ");
  fgets(acNombreUsuarioEnCrudo, sizeof(acNombreUsuarioEnCrudo), stdin);

  /*
  Si acNombreUsuarioEnCrudo[i] es un espacio en blanco,
  isspace(acNombreUsuarioEnCrudo[i]) devuelve un valor distinto de cero, y
  !isspace(acNombreUsuarioEnCrudo[i]) devuelve 0, lo que significa que el bloque
  if no se ejecuta y el espacio en blanco no se almacena en
  acNombreUsuarioProcesado.
  */

  for (iIndex = 0; acNombreUsuarioEnCrudo[iIndex] != '\0'; iIndex++) {
    if (!isspace(acNombreUsuarioEnCrudo[iIndex])) {

      acNombreUsuarioProcesado[iTeradorInterno] =
          tolower(acNombreUsuarioEnCrudo[iIndex]);
      iTeradorInterno++;
    }
  }

  acNombreUsuarioProcesado[iTeradorInterno] = '\0';

  iLongitud = strlen(acNombreUsuarioProcesado);

  sprintf(acLongitud, "%d", iLongitud); // Convertirmo de entoero a string
  strcat(acNombreUsuarioProcesado,
         acLongitud); // Concatenamos el usuario y su longitud

  printf("Su usuario: %s\n ", acNombreUsuarioProcesado);

  return 0;
}