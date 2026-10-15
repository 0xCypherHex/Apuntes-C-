/*

    El operador de corchetes [] funciona igual que con los arrays normales.
    Especificas el índice del elemento al que quieres acceder:

    std::vector<int> numbers = {10, 20, 30, 40};
    int first = numbers[0];    // Obtiene 10
    int third = numbers[2];    // Obtiene 30

    El método .at() proporciona una forma alternativa de acceder a los elementos
    con una diferencia importante: incluye la comprobación de límites
    (bounds-checking):

    int first = numbers.at(0);    // Obtiene 10
    int third = numbers.at(2);    // Obtiene 30


    La diferencia clave es la seguridad: si intentas acceder a un índice que no
    existe, [] puede causar un comportamiento impredecible, mientras que .at()
    lanzará una excepción para alertarte del error. Para fines de aprendizaje,
   ambos métodos funcionan bien, pero .at() proporciona protección adicional
   contra el acceso a posiciones no válidas en tu vector.

*/

// Ejemplo

#include <iostream>
#include <vector>

int main(void) {

  int iTamañoDelVector = 0;
  int iNumeros = 0;
  int iIndex = 0;
  std::vector<int> iData;

  std::cout << "Ingrese el tamaño del vector: ";
  std::cin >> iTamañoDelVector;

  for (iIndex = 0; iIndex < iTamañoDelVector; iIndex++) {

    std::cout << "Ingrese el valor " << iIndex << ": ";
    std::cin >> iNumeros;
    iData.push_back(iNumeros);
  }

  for (iIndex = 0; iIndex < iTamañoDelVector; iIndex++) {

    std::cout << "El elemento " << iIndex << " es: " << iData[iIndex]
              << std::endl;
  }

  std::cout << "Primer elemento: " << iData[0] << std::endl;
  std::cout << "Ultimo elemento: " << iData[iData.size() - 1] << std::endl;

  return 0;
}