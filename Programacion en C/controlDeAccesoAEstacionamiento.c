#include<stdio.h>
#include<math.h>

int main(void){


    // Entrada
    printf("Indique hora de entrada: ");
    int iHoraEntrada = 0;
        scanf("%d", &iHoraEntrada);

    printf("Indique minutos de entrada: ");
    int iMinutoEntrada = 0;
        scanf("%d", &iMinutoEntrada);
    

    // Salida
    printf("Indique  hora de salida: ");
    int iHoraSalida = 0; 
        scanf("%d", &iHoraSalida);

    printf("Indique minutos de salida: ");
    int iMinutoSalida = 0;
        scanf("%d", &iMinutoSalida);

    
    // Calculo de tiempo total

    iHoraEntrada = iHoraEntrada * 60 + iMinutoEntrada;
    iHoraSalida = iHoraSalida * 60 + iMinutoSalida;

    int iHoraTotal =  iHoraSalida - iHoraEntrada;

    if(iHoraTotal == 0 || iHoraTotal <= 15){

        printf("El costo es $0.00 MXN\n");

        return 0;

    }

        float fTiempoTotal = iHoraTotal/60.0f; // Se coloca el 0 para que  ceil tome en cuenta que se recorre el punto y se divide entre 60 para convertir nuevamente a horas

        fTiempoTotal = ceil(fTiempoTotal);

    

    int iHorario = 0;

    do {

    printf("Seleccione horario: \n 1) Diurno \n 2) Nocturno \n");
        scanf("%d", &iHorario);

        float fCostoTotal = 0;

         switch (iHorario){

            case 1:

                fCostoTotal = fTiempoTotal * 20;
                printf("Pague $%.2f\n", fCostoTotal);
                return 0;
                break;

            case 2:

                fCostoTotal = fTiempoTotal * 30;
                printf("Pague $%.2f\n", fCostoTotal);
                return 0;
                break;

            default: 
                printf("Opcion invalida. \n");
            
        } 
   
    } while (iHorario != 1 && iHorario != 2);

    return 0;
}