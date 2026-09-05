#include<iostream>
#include<cstring>

void printStringInfo(char str[]){

    // Imprimir la cadena
    std::cout << "Cadena: " << str << std::endl;

    //  Longitud de la cadena
    int length = strlen(str);
    std::cout << "Longitud: " << length << std::endl;

    // Caracter en el indice 4
    char characterAtIndex4 = str[4];
    std::cout << "Caracter en el index 4: " << characterAtIndex4 << std::endl;
    

    // Modificar el primer caracter a 'X'
    str[0] = 'X';

    // Imprimir la cadena modificada
    std::cout << "Cadena modificada: " << str << std::endl;


}


int main() {

    char message[] = "Hello, World";
    printStringInfo(message);

    return 0;
} 