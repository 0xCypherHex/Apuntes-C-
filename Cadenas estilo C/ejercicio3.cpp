#include<iostream>
#include<string>

// Funcion para concatenar dos cadenas

std::string concatenateStrings(std::string str1, std::string str2){

    std::string result = str1 + " " + str2;

    return result;
}



int main() {

    std::string firstName;
    std::string lastName;

    std::string fullName;

    std::cout << "Inserte su nombre: ";
        std::getline(std::cin, firstName);

    std::cout << "Inserte sus apellidos: ";
        std::getline(std::cin, lastName);

    fullName = concatenateStrings(firstName, lastName);
    
    std::cout << fullName << std::endl;

    // Longitud de una cadena string se usa .length() o .size()

    int lenghtFullName = fullName.length();

    std::cout << "Longitud del nombre: " << lenghtFullName << std::endl;


    return 0;
}