#include<iostream>
#include<cstdlib>

/*
El operador de desreferenciación * se utiliza para acceder al valor almacenado en la dirección de memoria a la que apunta un puntero.
Cuando colocas * delante de una variable puntero, «sigue» la dirección y te proporciona el valor real almacenado allí.

Recuerda que el operador de dirección (&) se utiliza para obtener la dirección de memoria de una variable,
mientras que el operador de desreferenciación (*) se utiliza para acceder al valor en esa dirección.
*/

int main (void) {

    int number = 911;
    int* ptr = &number; // ptr almacena la direccion de number
    int val = *ptr; // val almacena el valor de 911


    /*
    Tambien se puede utilizar el operador dereference para modificar la variable original a traves del pointer (puntero).
    Cuando asignas un nuevo valor a *ptr, en realidad estas cambiando el valor almacenado en esa direccion de memoria.
    */

    *ptr = 100; // cambia number a 100

    std::cout << *ptr << std::endl;



    return 0;
}