#include<cstdlib>
#include<iostream>
#include<cstring>

/*
    cstring  es la versión en C++ de string.h proporciona funciones para trabajar con cadenas estilo C
    No trabaja con std::string directamente
    
*/


int main () {

float valor=0, descuento=0;

std::cout << "Valor de la compra: " ;
    std::cin >> valor ;


std::cout << "Color de la bolita: " ;
    char color_bolita [10] ;
    std::cin >>  color_bolita ;

    // Uso de la funcion strcmp
    /*
    La funcion STRCMP siempre compara contra 0

    strcmp (a, b) == 0
    strcmp (a, b) != 0

    */
  
    if (strcmp(color_bolita, "blanca") == 0) {
        descuento = 0.0;
    }
    else if (strcmp(color_bolita, "verde") == 0) {
        descuento = 0.10;
    }
    else if (strcmp(color_bolita, "amarilla") == 0) {
        descuento = 0.25;
    }
    else if (strcmp(color_bolita, "azul") == 0) {
        descuento = 0.50;
    }
    else if (strcmp(color_bolita, "roja") == 0) {
        descuento = 1.0;
    }
        else {

            std::cout << "El color no existe en el sistema" << std::endl;
            return 0;
        }
        
        valor = valor - (valor * descuento);
        std::cout << "El cliente debe pagar: " << valor << std::endl;


    return 0;
} 