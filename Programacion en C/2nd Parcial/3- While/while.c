#include <stdio.h>

void EjercicioPar(){
    int par = 2;

    while(par<=100){
        if (par % 3 != 0) 
        printf("%d ", par);
        par += 2; // ocasionara que par <= 100 sea falso
        
    }
}



void EjercicioULAM(){

    int i;
    int length = 1;
    int Max = 0;

    printf("Dame un numero entero positivo: ");
    scanf("%d", &i);

    while(i > 1){

        length ++;
        if(i % 2 == 0){
            i = i / 2;
        } else {
            i = 3 * i + 1;
        }
        
        printf("%d\n", i);
        
        if(i > Max){
            Max = i;
        }
    }
    
    printf("Se acabo el programa\n");
    printf("Longitud de la serie: %d\n", length);
    printf("El numero mas grande es: %d\n", Max);
}

void EjercicioSTOP(){

    int start = 1;
    int i;
    int Max = -1;

  
    while (start != 0){
        printf("Dame un numero positivo: ");
        scanf("%d", &i);

        if (i > Max){
            Max = i;
            printf("EL NUMERO MAS GRANDE ES ======> %d\n", Max);

        } else {
        }

    }
}

void EjericioCUENTAREGRESIVA(){
    int x = 10 + 1;

    while (-- x ) { // ¿Es diferente que 0?
        printf("%d ",x );
    }
}

void Menu(){

    int opcion = 0;
    int save;
    int dolar = 17.71,peso = 0,euro = 20.51;

    while(1){
        printf("[1] Pesos a Dólares\n[2] Dólares a Euros\n[3] Pesos a Euros\n[4]\n[5] Euros a Pesos\n");
        pritnf("Cual opcion quieres:\n");
        scanf("%d",&opcion);
        if (opcion == 1){
            printf("Introduce los Pesos: ")s;
            scanf("%d",&peso);
            peso = peso * 

        }
    }

}

int main(){
    setbuf(stdout, NULL);
    EjericioMENU();

    return 0;
}