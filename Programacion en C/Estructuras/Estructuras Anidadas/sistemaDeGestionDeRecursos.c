#include <stdio.h>
#include <string.h>

struct StDireccion {

  char szCalle[50];
  int iNumeroExterior;
  int iNumeroPostal;
};

struct StEmpleado {

  int iIdEmpleado;
  char szNombre[50];
  struct StDireccion stDomicilio;
  float fSueldo;
};

int main(void) {

  struct StEmpleado stEmpleado_1;

  printf("Ingrese el ID: ");
  scanf("%d", &stEmpleado_1.iIdEmpleado);

  getchar();

  printf("Ingrese el nombre: ");
  fgets(stEmpleado_1.szNombre, sizeof(stEmpleado_1.szNombre), stdin);

  printf("Ingrese el Domicilio: ");
  fgets(stEmpleado_1.stDomicilio.szCalle,
        sizeof(stEmpleado_1.stDomicilio.szCalle), stdin);

  printf("Ingrese número exterior: ");
  scanf("%d", &stEmpleado_1.stDomicilio.iNumeroExterior);

  getchar();

  printf("Ingrese su código postal: ");
  scanf("%d", &stEmpleado_1.stDomicilio.iNumeroPostal);

  getchar();

  printf("Ingrese sueldo: ");
  scanf("%f", &stEmpleado_1.fSueldo);

  printf("==================================\n");
  printf("ID: %d\n", stEmpleado_1.iIdEmpleado);
  printf("Nombre: %s\n", stEmpleado_1.szNombre);
  printf("Domicilio: %s, %d\n", stEmpleado_1.stDomicilio.szCalle,
         stEmpleado_1.stDomicilio.iNumeroExterior);
  printf("Código postal: %d\n", stEmpleado_1.stDomicilio.iNumeroPostal);

  return 0;
}