#include<iostream>
#include<cstdlib>

int main() {

    int iNum1=0, iNum2=0,iSuma=0;
    float fPromedio=0;
    int iContador=0;

    std::cout << "Limite inferior: ";
        std::cin >> iNum1;
    
    std::cout << "Limite superior: ";
        std::cin >> iNum2;

    if (iNum1 > iNum2){

        std::cout << "Los limites son incorrectos" << std::endl;

        return 0;
    }

    for(iNum1; iNum1 <= iNum2; iNum1++) {



        iSuma += iNum1;

        std::cout << iNum1 << std::endl;

        iContador++;
    }

    fPromedio = iSuma / iContador;

    std::cout << "Promedio: " << fPromedio << std::endl;
    std::cout << "Suma: " << iSuma << std::endl;

    return 0;
}