#include<stdio.h>

int main(void) {

    const float fPrecioPorkWh = 1.85f;
    const float fCargoPorServicios = 85.00f;
    const float fIva = 0.16f;

    float fLecturaAnterior = 0;
    float fLecturaActual = 0;

    

    printf("Lectura anterior del medidor: ");
        scanf("%f", &fLecturaAnterior);
    
    printf("Lectura actual del medidor: ");
        scanf("%f", &fLecturaActual);


    float fConsumoTotal = fLecturaActual - fLecturaAnterior;

    float fCostoPorConsumoTotal = fConsumoTotal * fPrecioPorkWh;

    float fSubTotal = fCostoPorConsumoTotal + fCargoPorServicios;

    float fMontoTotal = fSubTotal + (fSubTotal*fIva);

    printf("El Monto total por su consumo electrico es : $%.2f\n", fMontoTotal);


    return 0;
}