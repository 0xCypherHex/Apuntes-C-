/*

A veces necesitas eliminar elementos de un vector cuando ya no los necesitas.
Los vectores requieren que uses un iterador con el método .erase(). Puedes
combinar std::find() con .erase() para eliminar elementos por valor.

#include <algorithm>
#include <vector>

std::vector<int> numbers = {10, 20, 30, 40};
auto it = std::find(numbers.begin(), numbers.end(), 20);

if (it != numbers.end()) {
    numbers.erase(it);  // Elimina el elemento en la posición del iterador
}

*/

#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {

  int iNumbers = 0;
  int iIndex = 0;
  int iDeletElements;

  std::cout << "Ingrese la cantidad de elementos: ";
  std::cin >> iNumbers;

  std::vector<int> vNumerosVector;

  for (iIndex = 0; iIndex < iNumbers; iIndex++) {

    int iValue = 0;
    std::cout << "Inserte elemento número " << iIndex + 1 << ": ";
    std::cin >> iValue;

    vNumerosVector.push_back(iValue);
  }

  std::cout << "Ingrese la cantidad de elementos a eliminar: ";
  std::cin >> iDeletElements;

  if (iDeletElements > iNumbers) {

    std::cout << "La cantidad a eliminar supera el vector." << std::endl;

    return 1;
  }

  long sLength = vNumerosVector.size();

  std::cout << "Tamaño del vector: " << sLength << std::endl;

  std::vector<int> vElementosEliminar;

  for (iIndex = 0; iIndex < iDeletElements; iIndex++) {

    int iValue = 0;
    std::cout << "Inserte elemento a eliminar número " << iIndex + 1 << ": ";
    std::cin >> iValue;
    vElementosEliminar.push_back(iValue);
  }

  for (const int &iElement : vElementosEliminar) {

    auto it = std::find(vNumerosVector.begin(), vNumerosVector.end(), iElement);
    if (it != vNumerosVector.end()) {

      vNumerosVector.erase(it);
    }

    std::cout << "Después de la eliminación de " << iElement
              << " el vector mide " << vNumerosVector.size() << std::endl;
  }

  std::cout << "Elementos restantes: ";

  sLength = vNumerosVector.size();

  for (const int &iElement : vNumerosVector) {

    std::cout << iElement;
    if (iElement != vNumerosVector[sLength - 1]) {

      std::cout << ", ";
    }
  }

  std::cout << std::endl;

  return 0;
}