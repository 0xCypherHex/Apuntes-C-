#include<iostream>
#include<cstdlib>

    // Cuando declaras un arreglo, el nombre del arreglo actúa como un puntero al primer elemento de ese arreglo.
    // Esta conexión permite usar punteros para trabajar con arreglos de formas poderosas.

int main () {

    int numbers[5] = {10, 20, 30, 40, 50};
    int* ptr = numbers; // Aqui numbers es equivalente a &numbers[0], ambos dan la direccion del primer elemento.

    std::cout << *ptr << std::endl;


    // Ahora que tenemos un puntero a un array podemos usar aritmética de punteros para navegar a través de los elementos.
    // Sumar 1 a un puntero lo mueve al siguiente elemento del mismo tipo:

    ptr++; // Ahora apunta a numbers [1]
    std::cout << *ptr << std::endl;

    ptr += 2; // Ahora apunta a numbers[3]
    std::cout << *ptr << std::endl;


    return 0;
}