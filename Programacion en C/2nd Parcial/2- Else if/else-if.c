#include <stdio.h>

void EjericioEjemplo(){

    float calif = 7.6;

    if ( 0 > calif || calif > 10){
        printf("Calificacion no valida\n");
    } else if(calif < 6.0){
        printf("Tu calficacion final es: 6\n");
    } else if (calif < 6.5){
        printf("Tu calficacion final es: 6\n");
    } else if (calif < 7.5){
        printf("Tu calficacion final es: 7\n");
    } else if (calif < 8.5){
        printf("Tu calficacion final es: 8\n");
    } else if (calif < 9.5){
        printf("Tu calficacion final es: 9\n");
    } else {
        printf("Tu calficacion final es: 10\n");
    }
}

void Ejercicio1() {

    float Salario;
    float limite_inferior = 0;
    float cuota = 0;
    float pct = 0;
    float ISR;

    printf("Ingrese su salario:\n");
    scanf("%f", &Salario);

    if (Salario <= 0) {
        printf("Salario no válido\n");
        
    } else if (Salario <= 496.07) {
        limite_inferior = 0;
        cuota = 0;
        pct = 1.92;

    } else if (Salario <= 4210.42) {
        limite_inferior = 496.07;
        cuota = 9.52;
        pct = 6.40;

    } else if (Salario <= 7399.42) {
        limite_inferior = 4210.42;
        cuota = 247.24;
        pct = 10.88;

    } else if (Salario <= 8601.50) {
        limite_inferior = 7399.42;
        cuota = 594.21;
        pct = 16.0;

    } else if (Salario <= 10298.35) {
        limite_inferior = 8601.50;
        cuota = 786.54;
        pct = 17.92;

    } else if (Salario <= 20770.26) {
        limite_inferior = 10298.35;
        cuota = 1090.61;
        pct = 21.36;

    } else if (Salario <= 32736.83) {
        limite_inferior = 20770.26;
        cuota = 3327.42;
        pct = 23.52;   

    } else {
        limite_inferior = 32736.83;
        cuota = 6141.95;
        pct = 30.0;
    }

    ISR = cuota + (Salario - limite_inferior) * pct / 100;

    printf("Tu ISR es: %.2f\n", ISR);
}

void Ejericio2(){

    int mes,año, dias;

    printf("Ingrese el mes 1-12:\n");
    scanf("%f", &mes);

    switch(mes > 0 || mes < 12){
        case 1: ("Enero\n 31 Dias"); break;
        case 2: ("Febrero\n 28 Dias"); break;
        case 3: ("Marzo\n 31 Dias"); break;
        case 4: ("Abril\n 30 Dias"); break;
        case 5:
    }
}
        
int main() {
    setbuf(stdout, NULL);
    Ejercicio2();




    return 0;
}