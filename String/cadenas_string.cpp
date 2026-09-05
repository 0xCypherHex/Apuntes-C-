#include<iostream>
#include<cstdlib>
#include<string>

int main () {

    // getline() oraciones con espacios
    std::string firstLine;
    std::cout << "Ingrese lo que sea: ";
    std::cin.ignore();
    std::getline(std::cin, firstLine); 

    std::cout << firstLine << std::endl;
    

    return 0;
}