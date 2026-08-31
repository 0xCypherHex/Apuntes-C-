#include<iostream>
#include<cstdlib>

int main() {

    float fNumero=0;
    float fFactor=1;

    std::cout << "Ingrese el numero a factorizar: ";
        std::cin >> fNumero;

    for (int i=1; fNumero != i; i++){

        fFactor *= i;

    }

    std::cout << "El factor de:  " << fNumero << " es: " << fFactor << std::endl;

    return 0;
}