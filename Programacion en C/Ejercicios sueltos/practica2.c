#include<stdio.h>


int main (){

    int iEdad=0;

    printf("Introduzca su edad: ");
        scanf("%i", &iEdad);

        // Evaluacion de la edad

            printf(iEdad >=18 ? "Es usted un adulto\n" : "Es usted menor de edad\n\a"); 

    return 0;
}