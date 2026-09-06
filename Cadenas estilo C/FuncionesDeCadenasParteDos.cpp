#include<iostream>
#include<string>

/*
    Mas funciones utiles para cedenas de texto

    str.erase(pos, len); Elimina len caracteres comenzando en la posicion pos de la cadena actual

    std::string str = "Hello, world!";
    int pos = str.find("World"); Devuelve la posicion donde comienza World en la cadena actual. Devuelve algun objeto algun objeto que se pueda comparar con -1 si no se encuentra.

    str.clear(); Elimina todos los caracteres de la cadena.

    str.empty(); Devuelve TRUE si la cadena esta vacia, FALSE en caso contrario.

*/

int main() {

    std::string str = "Hello, World!";

    std::cout << "Cadena actual: " << str << std::endl;

    int firstSpace = str.find("World");
    std::cout << firstSpace << std::endl;

    str.erase(5,7); // borra desde la poscion 5 mas los siguientes 7 caracteres 
    std::cout << str << std::endl;

    str.clear();

    bool isEmpty = str.empty(); // Devuelve 1 si es verdadero
    std::cout << "La cadena esta vacia ? " << isEmpty << std::endl;

    return 0;
}