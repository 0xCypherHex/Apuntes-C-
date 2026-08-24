#include<cstdlib>
#include<iostream>
#include<cmath>

int main () {

 /*
     El operador modula da el resto de una division
     sintaxis simple result = dividiendo % divisor

    Al trabajar con numeros de punto flotante (double) en C++ o se puede usar el operador % directamente
    en su lugar se utiliza la funcion fmod() de la bibliotecha <cmath>. funciona de manera similar pero
    mantiene la precision decimal

 */
    double result = fmod(5.2, 2.0);
   // result = 1.2
   // 2.0 cabe dos veces en 5.2 (4.0), y el resto es 1.2 (5.2 - 4.0 = 1.2)  
  
  
   double numberOne=0, numberTwo=0;
   std::cout << "Obtencion de modulo entre la division de dos con punto decimal" << std::endl;

        std::cout << "Primer divisor (a): "; 
        std::cin >> numberOne;

        std::cout << "Segundo divisor (b): ";
        std::cin >> numberTwo;
        
    result = fmod(numberOne, numberTwo);
    
    std::cout << "modulo: " << result << std::endl;
    

   return 0;
}