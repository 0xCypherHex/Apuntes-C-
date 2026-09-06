#include<iostream>
#include<string>

void stringOperations(std::string str){

    int lengthStr = str.length();
    std::cout << "Longitud de la cadena: " << lengthStr << std::endl;

    str.append( " - Modified");
    std::cout << str << std::endl;

    str.insert(0, "C++ ");
    std::cout << str << std::endl;

    std::cout << str.substr(5, 5) << std::endl;  // Extrae una cadena de 5 caracteres en la posicion 5

    str.replace(5, 5, "Awesome");
    std::cout << str << std::endl;

}


int main() {

    std::string str = "I will buy a drink";
    stringOperations(str);

    return 0;
}
