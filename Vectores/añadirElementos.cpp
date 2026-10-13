#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>

/*
    Para añadir elementos al final de un vector tenemos que usar la herramienta push_back() 
    Esta es la principal herramienta para hacer que crezca un vector 

    */

int main (void) {

    int iCantidad = 0;
    int iIndex = 0;
    int iNum = 0;

    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> iCantidad ;
    

    std::vector<int> numbers = {0};

    std::cout << "A continuacion ingrese cada elemento...\n";

    for (iIndex = 0 ; iIndex < iCantidad; iIndex++){

        std::cout << "Ingrese el elemento " << iIndex << ": ";
        std::cin >> iNum;
        numbers.push_back(iNum);

    }

    iIndex = 0;

    while (iIndex < iCantidad){

        std::cout << "El elemento " << iIndex << " es: " << numbers[iIndex] << std::endl; 
        iIndex++;    
    }

    return 0;
}