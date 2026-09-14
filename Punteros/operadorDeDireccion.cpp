#include<iostream>

int main (void){

    /*
    Para obtener la direccion de memoria de una variable se necesita el ampersand &
    */

    int number = 123;
    int* puntero = &number; // ahora almacena la direccion de number

    std::cout << puntero << std::endl;

    return 0;
}