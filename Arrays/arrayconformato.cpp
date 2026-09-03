#include<iostream>
#include<cstdlib>
#include<string>

int main () {

    int n = 0;

    std::cout << "Cantidad de elementos de 0 a: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "La cantidad debe ser mayor que cero." << std::endl;
        return 1;
    }

    std::string array[n]; // Crear un array de tamaño n para almacenar los elementos
    std::cin.ignore();

    for (int i = 0; i < n; i++) { // Solicitar al usuario que ingrese los elementos del array
        std::cout << "Elemento " << i << ": ";
        std::string val;
        std::cin >> val;
        array[i] = val;
    }

    std::cout << "Elementos del array: " << std::endl;
     
    std::cout << "[";

    for (int i = 0; i < n; i++) { // Mostrar los elementos del array
       
        std::cout << array[i];
       
        if (i < n - 1) { // Agregar una coma y un espacio después de cada elemento, excepto el último
            std::cout << ", ";
        }

    }
 
    std::cout << "]" << std::endl;
    
    return 0;
}