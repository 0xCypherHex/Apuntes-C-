#include <iostream>
#include <cstdlib>


int dias_de_estancia, distancia, costo, descuento;

int main () {
std::cout << "Inserte la distancia total: "; std::cin >> distancia;

std::cout << "Inserte el número de días: "; std::cin >> dias_de_estancia;

if ((distancia >= 1000) && (dias_de_estancia >= 7)) {

    costo = distancia * 500 ;
    descuento = costo - (costo*0.30);

    std::cout << "Costo: " << costo << std::endl;
}

    else {

        costo = distancia * 500 ;
        std::cout << "Costo: " << costo << std::endl;
    }
return 0;
}