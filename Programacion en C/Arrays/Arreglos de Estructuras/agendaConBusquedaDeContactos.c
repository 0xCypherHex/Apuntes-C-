/*

Este programa debe almacenar una lista de contactos dentro de una arreglo de
estructuras y permita realizar búsquedas por nombre. Si existe una coincidencia,
el sistema debe desglosar todos los datos asociadosal contacto, de lo contrario
informará que no encontró nada.

*/

#include <stdio.h>
#include <string.h>

struct StContacto {

  char szNombre[50];
  char szTelefono[15];
  char szEmail[50];
  int iEdad;
};

#define TAMANO_AGENDA 3

int main(void) {

  char szNombreBusqueda[50] = {0};
  struct StContacto astAgenda[TAMANO_AGENDA];
  int iEncontrado = 0;

  for (int iIndex = 0; iIndex < TAMANO_AGENDA; iIndex++) {

    printf("Contacto %d\n", iIndex);

    printf("Introduzca nombre: ");
    fgets(astAgenda[iIndex].szNombre, sizeof(astAgenda[iIndex].szNombre),
          stdin);

    printf("Introduzca teléfono: ");
    fgets(astAgenda[iIndex].szTelefono, sizeof(astAgenda[iIndex].szTelefono),
          stdin);

    printf("Introduzca email: ");
    fgets(astAgenda[iIndex].szEmail, sizeof(astAgenda[iIndex].szEmail), stdin);

    printf("Introduzca edad: ");
    scanf("%d", &astAgenda[iIndex].iEdad);
    getchar();
  }

  // Solicitar nombre a buscar

  printf("Introduzca nombre a buscar: ");
  fgets(szNombreBusqueda, sizeof(szNombreBusqueda), stdin);

  for (int iIndex = 0; iIndex < TAMANO_AGENDA; iIndex++) {

    if (strcmp(astAgenda[iIndex].szNombre, szNombreBusqueda) == 0) {

      printf("Nombre: %s\n", astAgenda[iIndex].szNombre);
      printf("Teléfono: %s\n", astAgenda[iIndex].szTelefono);
      printf("Email: %s\n", astAgenda[iIndex].szEmail);
      printf("Edad: %d\n", astAgenda[iIndex].iEdad);

      iEncontrado = 1;
    }
  }

  if (iEncontrado == 0) {

    printf("No encontrado. \n");
    return 1;
  }

  return 0;
}