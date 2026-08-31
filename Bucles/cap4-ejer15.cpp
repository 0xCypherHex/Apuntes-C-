#include<iostream>
#include<cstdlib>

int main() {

    int iNum1=0, iNum2=0,iSuma=0;
    float fPromedio=0;

    std::cout << "Limite inferior: ";
        std::cin >> iNum1;
    
    std::cout << "Limite superior: ";
        std::cin >> iNum2;

    if (iNum1 > iNum2){

        std::cout << "Los limites son incorrectos" << std::endl;

        return 0;
    }


    return 0;
}