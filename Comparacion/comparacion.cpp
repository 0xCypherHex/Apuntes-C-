#include<iostream>
#include<cstdlib>

int main () {

    float numberOne = 0, numberTwo = 0;
    bool comparison;

    std::cout << "Primer valor: ";
        std::cin >> numberOne;
    std::cout << "Segundo valor: ";
        std::cin >> numberTwo;

    if (comparison = numberOne != numberTwo) {

        std::cout << "La variable es diferente" << std::endl;

        return 0;
    }

    else {

        std::cout << "Las variables son semejantes \n";
        return 0;
    }
}