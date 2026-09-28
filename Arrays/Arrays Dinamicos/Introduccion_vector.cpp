// Introducción a std::vector

/*

Hemos estado trabajando con arreglos tradicionales de estilo C, los cuales tienen un tamaño fijo que debe determinarse al escribir el código.
Pero, ¿qué pasa si necesitas una colección que pueda crecer o reducirse mientras tu programa se está ejecutando? Aquí es donde std::vector de la Biblioteca de Plantillas Estándar (STL) se vuelve invaluable.

Un vector es esencialmente un array dinamico: puede redimensionarse automáticamente a medida que agregas o eliminas elementos. A diferencia de los arrays regulares, donde debes especificar el tamaño de antemano,
los vectores gestionan la memoria por ti, expandiendose automáticamente cuando necesitas más espacio (eliminar elementos reduce el tamaño, aunque el vector no libere automáticamente la memoria subyacente).

Esta flexibilidad hace que los vectores sean perfectos para situaciones en las que no se sabe de antemano cuántos elementos se necesitarán, o cuando el número de elementos cambia durante la ejecución del programa.
Los vectores proporcionan la comodidad de la gestión automática de la memoria, a la vez que ofrecen el rendimiento y la sintaxis familiar de los arreglos.

*/

// CREACION DE UN VECTOR

/*
``El enfoque mas facil es crear un vector que puedas llenarlo mas adelante:

  std::vector<int> numbers;

  Esto crea un vector vacio llamado numbers que puede contener enteros. Adentro de los corchetes angulares <int> indicamos el tipo de dato.

  Tambien puedes inicializar un vector con valores desde el principio usando una lista de inicializacion.

  std::vector<int> scores = {85, 34, 55, 45, 92};
*/

#include<iostream>
#include<vector>

int main(void) {

    std::vector<std::string> elements;

    int n;

    std::cout << "Inserte cantidad de elementos a insertar: ";
        std::cin >> n;

    for(int i = 1; i <= n; i++){

        std::string val;

        std::cout << "Ingrese el elemento " << i << ": ";
            std::cin >> val;

        elements[i] = val;
    }


    for (int i = 1; i <= size(elements); i++){

        std::cout << "El elemento " << i << "es: " << elements[i] << std::endl;

    }

    return 0;
}