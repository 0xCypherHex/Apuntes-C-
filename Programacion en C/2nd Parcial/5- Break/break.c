#include <stdio.h>

void Suma_numeros(){

    int cantidad_numeros = 0;
    int sumatoria = 0;
    int numero ;

    printf("Ingrese la cantidad de numeros a sumar:\n");
    scanf("%d",&cantidad_numeros);

    while(1){
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        if (numero < 0 || numero == 0){
            printf("El numero ingresado no es valido, ingrese uno nuevo:\n");
            continue;
        }
        sumatoria = sumatoria + numero;
        cantidad_numeros--;
            if(cantidad_numeros == 0 ){
                break;
            } else {
                continue;
            }
    }

    printf("La sumatoria es: %d\n", sumatoria);
    printf("La cantidad final de numeros es %d\n", cantidad_numeros);

}

int Algoritmo_euclides(){

    int a, b, c;

    printf("Ingrese su numero (a)\n");
    scanf("%d", &a);
    printf("Ingrese su numero (b)\n");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero.\n");
        return -1; 
    }

    c = a % b;
    while (c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}   


enum EstadoCivil{Casado = 3, Divorciado, Soltero, Union_libre, Viudo};

void ImprimirEstadoCivil(enum EstadoCivil estadoCivil){
    switch(estadoCivil){
        case Casado:
            printf("Casado\n");
            break;
        case Divorciado:
            printf("Divorciado\n");
            break;
        case Soltero:
            printf("Soltero\n");
            break;
        case Union_libre:
            printf("Union libre\n");
            break;
        case Viudo:
            printf("Viudo\n");
            break;
        default:
            printf("Estado civil desconocido\n");
            break;
    }
}


int main(){
    setbuf(stdout, NULL);
    enum EstadoCivil estado = Viudo; 
    ImprimirEstadoCivil(estado);
    return 0;
}
