/*

    * algoritmoOrdenamientoManual.c
    *
    *  Created on: 19/03/2024
    Estre programa solicita al usuario una lista de 5 precios de productos y los almacena en un arreglo unidimensional.
    EL programa debe aplicar un algoritmo de intercambio manual (como el metodo de burbuja) para ordenar los precios de menor a mayor.
    Finalmente, el programa debe mostrar la lista de precios ordenada en pantalla.

*/


#include<stdio.h>

int main (void) {

    int iIndexInt = 0;
    int iIndexExt = 0;

    float afListaPreciosProductos[5] = {0};
    float fAuxiliar = 0;

    for (iIndexExt = 0; iIndexExt < 5; iIndexExt++){

        printf("Introduzca el prducto numero %d: ", iIndexExt);
        scanf("%f", &afListaPreciosProductos[iIndexExt]);

    }


    for (iIndexExt = 0; iIndexExt < 5 -1 ; iIndexExt++){

        for (iIndexInt = 0; iIndexInt < 5 - 1 - iIndexExt; iIndexInt++){

            if (afListaPreciosProductos[iIndexInt] > afListaPreciosProductos[iIndexInt + 1]){

                fAuxiliar = afListaPreciosProductos[iIndexInt + 1];
                afListaPreciosProductos[iIndexInt + 1] = afListaPreciosProductos[iIndexInt];
                afListaPreciosProductos[iIndexInt] = fAuxiliar;

             }
    
        }

    }
        for (iIndexExt = 0; iIndexExt < 5; iIndexExt++){

            printf("Producto %d: %.2f\n", iIndexExt,afListaPreciosProductos[iIndexExt]);

        }


        return 0;

}