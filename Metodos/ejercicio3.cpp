#include<iostream>
#include<cstdlib>

// Aqui invocaremos a nuestras clases mediante la cabecera
#include "ejercicio3.hpp"

int main (void) {

    int cantidadDigitos = 0;

    std::cout << "Ingrese la cantidad de digitos a promediar: ";
        std::cin >> cantidadDigitos;

        float resultado = sumPro::sumaPromedio(cantidadDigitos);

    std::cout << "El promedio es: " << resultado << std::endl;

    return 0;
}
