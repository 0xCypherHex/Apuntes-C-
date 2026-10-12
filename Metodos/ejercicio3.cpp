#include <iostream>
#include <cstdlib>

// Aqui invocaremos a nuestras clases mediante la cabecera
#include "ejercicio3.hpp"

int main(void) {

  // Llamada al primer metodo 

  int cantidadDigitos = 0;

  std::cout << "Ingrese la cantidad de digitos a sumar y promediar: ";
  std::cin >> cantidadDigitos;

  sumPro::sumaPromedio(cantidadDigitos);

  // Llamada al segundo metodo que solo calcula el promedio

  float promedio = 0;
  
  std::cout << "Digite la cantidad de numeros a promediar: ";
  std::cin >> cantidadDigitos;

  sumPro::prom(cantidadDigitos,promedio);
 


  std::cout << "El promedio es: " << promedio << std::endl;

  return 0;
}
