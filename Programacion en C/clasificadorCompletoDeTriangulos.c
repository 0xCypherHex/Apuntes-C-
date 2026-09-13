#include<stdio.h>
#include<math.h>

void clasificador(float fAngulo1, float fAngulo2, float fAngulo3){

 if (fAngulo1 == 60 && fAngulo2 == 60 && fAngulo3 == 60) {
        
        printf("Y ademas es equilatero. \n");

        
        } 
    else if (fAngulo1 != fAngulo2 && fAngulo2 != fAngulo3 && fAngulo1 != fAngulo3) {

        printf("Y ademas es escaleno. \n");
    

        }
    
    else  {

        printf("Y ademas es isosceles. \n");

        }


}


int main (void) {

// Solicitar dos angulos internos del triangulo

// Primer angulo
float fPrimerAngulo;
printf("Ingrese el primer angulo: ");
    scanf("%f", &fPrimerAngulo);

// Validar datos primer angulo
if (fPrimerAngulo < 0 || fPrimerAngulo > 180){
    
    printf("Dato invalido. \n");
    return 0;

    }

// Segundo angulo
float fSegundoAngulo;
printf("Ingrese el segundo angulo: ");
    scanf("%f", &fSegundoAngulo);

// Validar datos segundo angulo
if (fSegundoAngulo < 0 || fSegundoAngulo > 180){

    printf("Dato invalido. \n");
    return 0;

    }

// Calculo del tercer angulo
// se ingresa primero 180 para que el resultado sea positivo
float fTercerAngulo = 180 - (fPrimerAngulo + fSegundoAngulo); 

// Comprobar que la suma de los angulos den 180
float fComprobacionSumaDeAngulos = fPrimerAngulo + fSegundoAngulo + fTercerAngulo;

if (fComprobacionSumaDeAngulos != 180){

    printf("Error en la validacion de datos. \n");
    return 0;

    }

// Clasificar angulos con condiciones anidadas

// Triangulo Rectangulo
if (fPrimerAngulo == 90 || fSegundoAngulo == 90 || fTercerAngulo == 90){

    printf("El triangulo es rectangulo. \n");
    
    clasificador(fPrimerAngulo, fSegundoAngulo, fTercerAngulo);

    return 0;

    } 

// Triangulo Obstusangulo
if (fPrimerAngulo > 90 || fSegundoAngulo > 90 || fTercerAngulo > 90){

    printf("El triangulo es obtusangulo. \n");
   
    clasificador(fPrimerAngulo, fSegundoAngulo, fTercerAngulo);

    return 0;
      
    }

// Triangulo Actutangulo
if (fPrimerAngulo < 90 && fSegundoAngulo < 90 && fTercerAngulo < 90) {

    printf("El triangulo es acutangulo. \n");

    clasificador(fPrimerAngulo, fSegundoAngulo, fTercerAngulo);

    return 0;

    }     


    return 0;
}