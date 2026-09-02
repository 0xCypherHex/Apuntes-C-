#include <iostream>
#include <string>
#include <vector>

int main() {

    int n = 0, index = 0;
    std::string newElement;

    std::cout << "Cantidad de elementos de 0 a: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "La cantidad debe ser mayor que cero." << std::endl;
        return 1;
    }

    std::vector<std::string> arr(n);
    std::cin.ignore();

    for (int i = 0; i < n; i++) { // Solicitar al usuario que ingrese los elementos del array
        std::cout << "Elemento " << i << ": ";
        std::getline(std::cin, arr[i]);
    }

    std::cout << "Posicion a modificar (0 a " << n - 1 << "): ";
    std::cin >> index;
    std::cin.ignore();

    if (index >= 0 && index < n) { // Verificar si la posición es válida
        std::cout << "Nuevo elemento: ";
        std::getline(std::cin, newElement);
        arr[index] = newElement;
    } else {
        std::cout << "Posicion no valida." << std::endl;
        return 1;
    }

    std::cout << "Elementos del array: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << i << ": " << arr[i] << std::endl;
    }

    return 0;     
}