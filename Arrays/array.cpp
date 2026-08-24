#include<iostream>
#include<string>

/*
Un array es una coleccion de elementos. que contienen valores del mismo tipo o otros arrays.
se crean utilizando corchetes [], adentro se coloca la longitud del arrey, osea los numeros de elementos

*/

int main() {

    int numbers[] = {1,2,3,4,5,};

    int length = std::size(numbers); // comprobamos la longitud del array

    std::string letters[5] = {}; // establecemos un array en ceros
    
    char abc[] = {'a','b','c','d','e','f'};

    std::cout << abc[2];


    return 0;
}