#include <stdio.h>

void Ejercicio1() { 
    
    float C;

    printf("Ingresa tu calificacion\n[0.0 - 10.0]\n");
    scanf("%f", &C);

    if (C > 0 && C <= 10) {
       if (C >= 6)
       printf("Felicidades aprobaste el curso");
       else
       printf("Mal Reprobaste el curso");
    }
    else {
       printf("No es posible esa calificacion bro");
    }

}

void Ejercicio2() {
    
    double c1, c2, c3;

    printf("Ingresa tres calificaciones:\n");
    scanf("%lf %lf %lf", &c1, &c2, &c3);

    
    if (c1 > c2 && c1 > c3) {
        printf("La calificacion mas alta fue %lf",c1);
    }
    else if (c2 > c1 && c2 > c3) {
        printf("La calificacion mas alta fue %lf",c2);
    }
    else if (c3 > c1 && c3 > c2) {
        printf("La calificacion mas alta fue %lf",c3);
    }
    else {
        printf("Hubo empate entre las calificiones");
    }
}

void Ejercicio3(){

    int velocidad, distancia, horas, minutos, segundos;
    double tiempo;    // El tiempo esta expresado en horas con parte fraccionaria
    double minutosD;  // S  i tiempo es igual  = 3.56

    printf("Velocidad Actual (km/h): ");
    scanf("%d",&velocidad);
    printf("Distancia a recorred (km): ");
    scanf("%d", & distancia);

    tiempo = (double)distancia / velocidad;
    horas = tiempo;                         // Si tiempo = 2.56, horas = 2
    minutosD =(tiempo - horas) * 60; 
    minutos = minutosD;                     // Si minutos D = 33.6, minutos = 33
    segundos = (minutosD - minutos) * 60;

    //Version 1
    // a) horas > 0, minutos > 0 - los 2 se imprimen
    // b) horas = 0, minutos > 0 - minutos se imprimen
    // c) horas > 0, minutos = 0 - horas se imprimen
    // d) horas = 0, minutos = 0 - ninguno se imprime(solo segundos)

    printf("LLegaras al destino en ");
    char printed = 0;
    if (horas > 0) {
        printf("%d horas",horas);
        printed = 1;
    }
    if (minutos > 0) {
        if (printed == 1) printf(", ");
        printf("%d  minutos",minutos);
    }
    if (segundos > 0) {
        if (printed == 1) printf(", ");
        printf("%d segundos",segundos);
    }
    printf("\n");
}

int main() {

    setbuf(stdout, NULL); // Desactiva el buffering de salida
    Ejercicio3();   // ← AQUÍ cargas el ejercicio que quieres
    
    
    return 0;
}

