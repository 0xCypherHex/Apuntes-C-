#include <cstdlib>
#include <iostream>
#include <cmath>

int main () {

    float x=0, y=0;

    std::cout << "Ingrese el valor de x: "; 
        std::cin >> x;
    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;


    if ( (y >= (x-3)) && (y <= (4-pow(x,2))) ) {

        std::cout << "El punto esta dentro del área" << std::endl;
    }
    else {
        std::cout << "No pertenece al área" << std::endl;
    }

    return  0;
}