#include<iostream>
#include<cstdlib>

/*

    1-. Declaración por primera vez:

    Cuando escribes int *ptr = &num; estas haciendo dos cosas al mismo tiempo :

    - El * (asterisco de declaración): En la parte int *ptr, el asterisco solo sirve para avisarle al compilador : oye este, este es una variable que almacena direcciones de memoria de numeros enteros.
    - El & (operador de dirección): Significa "la dirección de". Como los punteros solo aceptan direcciones de memoria usas &num para extraer la dirección fisica de donde vive num y guardarla dentro del puntero.

    2-. Uso o Desreferenciación:

    Cuando más adelante escribes *ptr = dato; el contexto cambió porque ya no estas creando una variable nueva.

    - El * (operador de desreferencia): Ahora actua como un teletransportador. Significa "Ve a la dirección que tienes guardada y has algo con la caja original". Al hacer *ptr = dato; no estás cambiando a dónde
    apunta el puntero, estás viajando hacia num y reemplazando su contenido interno por el valor de dato. 

    ¿Y si uso & después de la primera vez?

    Sí puedes usarlo, pero su efecto es completamente distinto, Si escribes:

    ptr = &dato; Nota que no hay asteriscos al inicio

    Aquí no estás modificando el valor original de num. Lo que estas haciendo es cambiar el objetivo original del puntero: Olvida la dirección de num  a partir de ahora quiero que apuntes a la dirección de dato.

    & (Ampersand): Saca la dirección de memoria de una variable para dársela al puntero.

    * (Asterisco al declarar): Indica que la variable a crear es del tipo puntero.

    * (Asterisco al usar): Viaja a la dirección guardada para leer o modificar el valor de la variable original.

*/

int main() {

    int value = 10;

    int *ptr = &value;

    std::cout << *ptr << std::endl;

    *ptr = 20;

    int **pptr = &ptr;

    std::cout << **pptr << std::endl;

        **pptr = 30;

    std::cout << **pptr << std::endl;

    int ***ppptr = &pptr;

    ***ppptr = 40;

    std::cout << ***ppptr << std::endl;

    int num = 99;

    int *ptr2 = &num;

    int **pptr2 = &ptr2;

    // Cadena de mando finalizada

    ppptr = &pptr2; // Le pasamos la direccion de un int igual a 40 


    return 0;

}