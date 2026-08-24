#include<iostream>

// un argumento en una funcion es un valor que pasas  cuando se llama,
// los argumentos deben seguir las reglas estandar de nomenclatura de variables, comenzar con letra o con un guion bajo

void numeroEntero(int numero){
    if (numero % 2 == 0) {
        std::cout << "Es un entero" << std::endl;
    } else {
        std::cout << "No es un entero" << std::endl;
    }
}

int main() {

    int rango=0;

    std::cout << "Rango: ";
        std::cin >> rango;

    for (int i=0; i<=rango; ++i) {

        std::cout << i << " ";
        numeroEntero(i);

    }


    return 0;
}