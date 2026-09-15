#include<stdio.h>

// Simulacion de caja registradora

int main(void) {

    float  fPrecioProducto = 0.0;

    float fTotalArticulos = 0.0;

    while (fPrecioProducto > 0.0){
        
        int i = 1;
        
        printf("Ingrese el precio del articulo ", i , ": ");
            scanf("%f", &fPrecioProducto);


        fTotalArticulos += fTotalArticulos + fPrecioProducto;
        i++;
    }

    float fTotalConDescuento = 0.0;

    if (fTotalArticulos > 1000.00) {

    fTotalConDescuento = fTotalArticulos - (fTotalArticulos * 10);

    }

    printf("Subtotal: %.2f/n", fTotalArticulos);

    return 0;
}
