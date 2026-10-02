#include <stdio.h>

/*
Construir un programa completo en C que simule el monitoreo térmico de una
semana (7 días). El sistema almacenará las temperaturas registradas en un
arreglo unidimensional, calculará el promedio semanal e identificará cuáles días
superaron dicha temperatura promedio.
*/

int main(void) {

  float fTemperaturas[7] = {0.0f};

  char *acDiasSemana[7] = {"Lunes",   "Martes", "Miércoles", "Jueves",
                           "Viernes", "Sabado", "Domingo"};

  for (int iDias = 0; iDias < 7; iDias++) {

    printf("Digite la temperatura del dia %s: ", acDiasSemana[iDias]);
    scanf("%f", &fTemperaturas[iDias]);
  }

  float fSuma = 0;
  float fPromedio = 0;

  for (int iTerador = 0; iTerador < 7; iTerador++) {

    fSuma += fTemperaturas[iTerador];
  }

  fPromedio = fSuma / 7;

  printf("Promedio semanal: %.2f\n", fPromedio);

  for (int iDias = 0; iDias < 7; iDias++) {

    if (fTemperaturas[iDias] > fPromedio) {

      printf("El dia %s tuvo una temperatura de %.2f, que es mayor al promedio "
             "semanal.\n",
             acDiasSemana[iDias], fTemperaturas[iDias]);
    }
  }

  return 0;
}