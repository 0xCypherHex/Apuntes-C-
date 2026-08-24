#include<cstdlib>
#include<iostream>
#include<string>

int main () {

    std::string textOne, textTwo, textThree;

    std::cout << "Inserte la primera cadena de texto: ";
        std::cin >> textOne;
    
    std::cout << "Inserte la segunda cadena de texto: ";
        std::cin >> textTwo;
    
    std::cout << "Inserte la tercera cadena de texto: ";
        std::cin >> textThree;

    bool firstResult = (textOne == textTwo);
    bool secondResult = (textOne == textThree);
    bool thirdResult = (textOne != textThree);

    if (firstResult) {

        std::cout << "La primera cadena coincide con la segunda cadena." << std::endl;
        
    }  else  if (secondResult) {

        std::cout << "La primera cadena coincide con la tercera cadena." << std::endl;
           

    }  else if (thirdResult) {

        std::cout << "La primera cadena es diferente de la tercera" << std::endl;

    }

    

    return 0;
}