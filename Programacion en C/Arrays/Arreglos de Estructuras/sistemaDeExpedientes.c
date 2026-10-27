/*

Definir la estructura StPaciente e implementar un programa en C que gestione un
arreglo de expedientes médicos, calculando el Índice de Masa Corporal
(IMC) de cada paciente para determinar e informar quiénes requieren
atención médica básica.

*/

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

struct StPaciente {

  char szNombre[50];
  int iEdad;
  float fPeso;
  float fEstatura;
  float fIMC;
};

float ffIMC(float fPeso, float fEstatura);
void fvCriterio(float fIMC);

#define TAMANO_PACIENTE 3

int main(void) {

  struct StPaciente astPacientes[TAMANO_PACIENTE];

  // LLenar datos

  for (int iIndex = 0; iIndex < TAMANO_PACIENTE; iIndex++) {

    printf("Paciente %d\n", iIndex);

    printf("Introducza el nombre del paciente: ");
    fgets(astPacientes[iIndex].szNombre, sizeof(astPacientes[iIndex].szNombre),
          stdin);

    size_t sLongitud = strlen(astPacientes[iIndex].szNombre);

    if (sLongitud > 0 && astPacientes[iIndex].szNombre[sLongitud - 1] == '\n') {

      astPacientes[iIndex].szNombre[sLongitud - 1] = '\0';
    }

    printf("Introduzca edad del paciente: ");
    scanf("%d", &astPacientes[iIndex].iEdad);
    getchar();

    printf("Introduzca el peso del paciente: ");
    scanf("%f", &astPacientes[iIndex].fPeso);
    getchar();

    printf("Introduzca estatura del paciente: ");
    scanf("%f", &astPacientes[iIndex].fEstatura);
    getchar();
  }

  for (int iIndex = 0; iIndex < TAMANO_PACIENTE; iIndex++) {

    astPacientes[iIndex].fIMC =
        ffIMC(astPacientes[iIndex].fPeso, astPacientes[iIndex].fEstatura);
  }

  for (int iIndex = 0; iIndex < TAMANO_PACIENTE; iIndex++) {

    printf("Paciente %d\n", iIndex);
    printf("Nombre: %s\n", astPacientes[iIndex].szNombre);
    printf("Edad: %d\n", astPacientes[iIndex].iEdad);
    printf("Peso: %.2f\n", astPacientes[iIndex].fPeso);
    printf("Estatura: %.2f\n", astPacientes[iIndex].fEstatura);
    printf("IMC: %.2f\n", astPacientes[iIndex].fIMC);

    fvCriterio(astPacientes[iIndex].fIMC);
  }

  return 0;
}

float ffIMC(float fPeso, float fEstatura) {

  float fIMC = fPeso / (pow(fEstatura, 2));

  return fIMC;
}

void fvCriterio(float fIMC) {

  if (fIMC < 18.5 || fIMC >= 25.0) {

    printf("Requiere atención médica.\n\n");
  } else {

    printf("Estado normal.\n");
  }
}