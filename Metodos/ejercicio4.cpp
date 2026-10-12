#include <cstdlib>
#include <iostream>
#include "ejercicio4.hpp"

int main (void) {

    int iNum = 0;

    std::cout << "Ingrese el numero: ";
    std::cin >> iNum ;

    sumaDeDigitos::contarDigitos(iNum);

    return 0;
}