#include<iostream>
#include<cstdlib>
#include<vector>

double productoArray(double arr[], int size) {

    double producto = 1.0;
    for (int i = 0; i < size; i++) {
        producto *= arr[i];
    }

    return producto;
}

int main() {

    int cantidadElementos = 0;
    std::cout << "Ingrese la cantidad de elementos del array: ";
        std::cin >> cantidadElementos;

    if (cantidadElementos <= 0) {
        std::cout << "La cantidad debe ser mayor que cero." << std::endl;
        return 1;
    }
 
    std::vector<double> arr(cantidadElementos); // Crear un vector de tamaño cantidadElementos para almacenar los elementos
    std::cout << "Ingrese los elementos del array:" << std::endl;

    for (int i = 0; i < cantidadElementos; i++) { // Solicitar al usuario que ingrese los elementos del array
        
        double val;
        std::cout << "Elemento " << i << ": ";
        std::cin >> val;
        arr[i] = val;

    }

    double result = productoArray(arr.data(), cantidadElementos); // Llamar a la función para calcular el producto del array
    std::cout << "El producto de los elementos del array es: " << result << std::endl;

    return 0;
}