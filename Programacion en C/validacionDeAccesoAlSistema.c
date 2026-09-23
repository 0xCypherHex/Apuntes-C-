#include<stdio.h>

int main(void) {

    const int iPin = 6578;

    int iPinIngresado = 0;

    int iContador = 3; 

    do {

        iContador--;

        printf("Porfavor instroduzca su pin: ");
            scanf("%d", &iPinIngresado);

            if(iPinIngresado == iPin) {

                printf("Acceso concedido. Bienvenido al sistema.\n");
                break;

            } else {

                printf("Pin incorrecto. Le quedan %d intentos.\n", iContador);

            } 


    } while (iContador >0);
    
    if (iContador == 0){

        printf("Sistema bloqueado. Ha superado el número máximo de intentos.\n");
        
    }


    return 0;
}