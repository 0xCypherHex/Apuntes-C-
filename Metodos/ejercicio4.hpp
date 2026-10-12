#ifndef EJERCICIO4_HPP
#define EJERCICIO4_HPP

#include <iostream>
#include <cstdlib>

class sumaDeDigitos {
public:
    static void contarDigitos(int num) {
     
        int aux = num;
        int digito = 0;
        int suma = 0;
        int cantidadDigitos = 0;

        if (num < 0) {
            aux = -aux;
        }

        while (aux > 0) {
            digito = aux % 10;
            aux = aux / 10;
            suma += digito;
            cantidadDigitos += 1;
        }

        if (num == 0) {
            cantidadDigitos = 1;
        }

        std::cout << "La suma de los digitos es: " << suma << std::endl;
        std::cout << "La cantidad de digitos de " << num << " es: " << cantidadDigitos << std::endl;
    }
};

#endif