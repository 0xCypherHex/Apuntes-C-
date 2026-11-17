#include <stdio.h>

int main(void) {

  typedef struct {

    const float fPrecioPorkWh;
    const float fCargoPorServicios;
    const float fIva;

  } valores_de_entrada;

  valores_de_entrada p1 = {1.85f, 85.00f, 0.16f};

  float fLecturaAnterior = 0;
  float fLecturaActual = 0;

  printf("Lectura anterior del medidor: ");
  scanf("%f", &fLecturaAnterior);

  printf("Lectura actual del medidor: ");
  scanf("%f", &fLecturaActual);

  float fConsumoTotal = fLecturaActual - fLecturaAnterior;

  float fCostoPorConsumoTotal = fConsumoTotal * p1.fPrecioPorkWh;

  float fSubTotal = fCostoPorConsumoTotal + p1.fCargoPorServicios;

  float fMontoTotal = fSubTotal + (fSubTotal * p1.fIva);

  printf("El Monto total por su consumo electrico es : $%.2f\n", fMontoTotal);

  return 0;
}