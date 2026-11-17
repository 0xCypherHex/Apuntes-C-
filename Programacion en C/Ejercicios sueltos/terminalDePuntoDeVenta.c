#include<stdio.h>

// Simulacion de caja registradora

int main(void) {

    float  fPrecioProducto = 0.0f;

    float fTotalCompra = 0.0f;

    int iTerador = 1; // Contador de productos
    
    printf("Ingrese el precio del articulo %d: ",iTerador);
            scanf("%f", &fPrecioProducto);

    fTotalCompra = fPrecioProducto;
    
    while (fPrecioProducto > 0.0){
       
        iTerador++;
        printf("Ingrese el precio del articulo %d: ",iTerador);
            scanf("%f", &fPrecioProducto);


        fTotalCompra += fPrecioProducto;
        
    }

    float fTotalConDescuento = 0.0f;
    float fDescuento = 0.0f;

    if (fTotalCompra >= 1000.00f) {

        fDescuento = fTotalCompra / 10;
        fTotalConDescuento = fTotalCompra - fDescuento;

        printf("Subtotal: %.2f\n", fTotalCompra);
        printf("Descuento: %.2f\n", fDescuento);
        printf("Total: %.2f\n", fTotalConDescuento);

    }
      else {

        printf("Subtotal: %.2f\n", fTotalCompra);
        printf("Descuento: %.2f\n", fDescuento);
        printf("Total: %.2f\n", fTotalCompra);
    
    }


    return 0;
}
