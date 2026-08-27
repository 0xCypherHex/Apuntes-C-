#include <stdio.h>
/*
   int main()
{
    int suma = 195, personas = 10;
    float promedio = (float) suma / personas; // Se debe indicar el tipo de dato para obtener 
                                              // un resultado con decimales especifico
    printf("El resultado de la division es: %.2f\n", promedio);
    return 0;
}*/



// Ejericios

void Ejercicio1(){

    setbuf(stdout, NULL);
    printf("Bienvenido al inicio\n");

    int edad1, edad2, edad3, suma, personas;
    float promedio;

    personas = 3;

    printf("Hola Bienvenido\nDame la primera edad: ");
    scanf("%d",&edad1);
    printf("Ok bien\nAhora voy a necesitar que me digas la segunda edad: ");
    scanf("%d", &edad2);
    printf("Excelente !!!\nAhora dame la ultima edad: ");
    scanf("%d", &edad3);

    suma = edad1 + edad2 + edad3;

    promedio = (float) suma / personas;
    printf("El promedio es: %.2f\n", promedio);
    
}

void Ejercicio2(){
    
    setbuf(stdout, NULL);
    Ejercicio1();

    printf("Bienvenido al Inicio\n");

    float Velocidad, Distancia;
    double Tiempo;
    int minutos, segundos, horas;

    printf("Dame la velocidad(km/h): ");
    scanf("%f", &Velocidad);

    printf("Dame la distancia(km): ");
    scanf("%f", &Distancia);

    Tiempo = Distancia / (double) Velocidad;
    horas = (int)Tiempo;
    minutos = (Tiempo - horas ) * 60;
    segundos = ((Tiempo - horas) * 60 - minutos) * 60;

    printf("El tiempo es de %d horas, %d minutos y %d segundos\n", horas, minutos, segundos);

}


int main()
{
    setbuf(stdout, NULL);
    float Dinero, Costo, Productos, Gasto, Cambio;

    printf("Bienvenido al inicio\n");
    printf("Cuanto dinero traes: ");
    scanf("%f", &Dinero);
    printf("Cuanto cuesta el producto que vas comprar:");
    scanf("%f", &Costo);
    printf("Unidades a comprar: ");
    scanf("%f",&Productos);

    Gasto = (float) Costo * Productos;
    Cambio = (float) Dinero - Gasto;

    printf("Tu gasto sera de: %.2f\n", Gasto);
    printf("Tu cambio sera de: %.2f\n", Cambio);
    
    return 0;
}