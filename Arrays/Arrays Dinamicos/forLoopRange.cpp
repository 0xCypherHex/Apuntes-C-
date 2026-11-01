/*

"Aunque los loop for tradicionales con índices funcionan bien para recorrer
vector, C++ ofrece una solución más elegante: el loop for basado en range. Esta
sintaxis moderna elimina la necesidad de gestionar manualmente los índices y
hace que tu código sea más limpio y fácil de leer."

El loop basado en range gestiona automáticamente los detalles de la iteración
por ti. En lugar de gestionar una variable de índice, simplemente especificas
qué quieres hacer con cada elemento:

std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

for (const std::string& name : names) {
    std::cout << name << std::endl;
}

Este bucle hace exactamente lo mismo que el enfoque tradicional basado en
índices, pero con una sintaxis mucho más sencilla. La variable name adopta
automáticamente el valor de cada elemento del vector, uno a la vez.

Es posible que notes el símbolo & en la declaración del bucle: const
std::string& name. En este contexto, & no significa «dirección de», como quizá
hayas visto antes. Aquí declara name como una referencia (un alias) directamente
a cada elemento del vector, en lugar de crear una copia de este. Piensa en ello
como asignar un nuevo nombre al mismo fragmento de datos, de forma similar a
usar un puntero al elemento, pero sin necesidad de desreferenciarlo dentro del
cuerpo del bucle.

La palabra clave const es una medida de seguridad: evita que modifiques
accidentalmente el elemento mediante el alias dentro del cuerpo del bucle. El
alias en sí sigue avanzando hacia cada elemento nuevo en cada iteración. Es el
contenido al que accedes mediante el alias lo que se mantiene constante, no el
avance del bucle.

El loop for basado en range no solo es más legible, sino también más seguro: no
hay riesgo de errores de índice, ya que no gestionas los índices manualmente.
Funciona con cualquier contenedor que admita la iteración, lo que lo convierte
en una herramienta versátil para procesar colecciones de datos en C++.

*/

/*

Crea un programa que demuestre el bucle for basado en rangos procesando una
colección de nombres de ciudades y mostrándolos junto con su cantidad de
caracteres.

*/

#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int iCantidadCiudades = 0;

  std::cout << "Ingrese la cantidad de ciudades: ";
  std::cin >> iCantidadCiudades;

  std::vector<std::string> vCiudades;

  for (int iIndex = 0; iIndex < iCantidadCiudades; iIndex++) {

    std::string sCiudad;
    std::cout << "Introduzca nombre de la ciudad número " << iIndex + 1 << ": ";
    std::cin >> sCiudad;
    vCiudades.push_back(sCiudad);
  }

  for (const std::string &ciudad : vCiudades) {

    std::cout << "Ciudad: " << ciudad << " (Longitud: " << ciudad.length()
              << ")" << std::endl;
  }

  return 0;
}