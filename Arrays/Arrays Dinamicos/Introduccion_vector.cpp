// Introducción a std::vector

/*

Hemos estado trabajando con arreglos tradicionales de estilo C, los cuales tienen un tamaño fijo que debe determinarse al escribir el código.
Pero, ¿qué pasa si necesitas una colección que pueda crecer o reducirse mientras tu programa se está ejecutando? Aquí es donde std::vector de la Biblioteca de Plantillas Estándar (STL) se vuelve invaluable.

Un vector es esencialmente un array dinamico: puede redimensionarse automáticamente a medida que agregas o eliminas elementos. A diferencia de los arrays regulares, donde debes especificar el tamaño de antemano,
los vectores gestionan la memoria por ti, expandiendose automáticamente cuando necesitas más espacio (eliminar elementos reduce el tamaño, aunque el vector no libere automáticamente la memoria subyacente).

Esta flexibilidad hace que los vectores sean perfectos para situaciones en las que no se sabe de antemano cuántos elementos se necesitarán, o cuando el número de elementos cambia durante la ejecución del programa.
Los vectores proporcionan la comodidad de la gestión automática de la memoria, a la vez que ofrecen el rendimiento y la sintaxis familiar de los arreglos.

*/

#include<iostream>
#include<vector>

// CREACION DE UN VECTOR
