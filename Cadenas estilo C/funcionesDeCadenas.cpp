#include<iostream>
#include<string>

/*
    Funciones utiles en cadenas:
    str.insert(pos, str): Inserta la cadena str en la posicion pos de la cadena actual

    str.replace(pos, len, str): reemplaza len caracteres comenzando en la posicion pos con la cadena str

    str.substr(pos, len): devuelve una subcadena de la cadena actual, comenzando en la posicion pos y con una longitud len 

    str.append(str): anade la cadena str al final de la cadena actual

*/


int main() {

    std::string str1 = "Hello world !, ";

    str1.insert(5, "C++");

    str1.replace(5, 11 , " community !");

    str1.substr(0, 5);

    std::string str2 = " C++ is the best !";
    str1.append(str2);

    std::cout << str1 << std::endl;


    return 0;
}
