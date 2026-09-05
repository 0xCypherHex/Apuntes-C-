#include<iostream>
#include<cstdlib>
#include<type_traits>

int main() {

    int cantidad_de_numeros=0, contador=1,contador_2=1,numero=0;
    long long fac=1;
  
    std::cout << "Se calculara el factorial a cada uno de los numeros que se ingrese." << std::endl;
    std::cout << "Digite la cantidad de numeros: "; std::cin >> cantidad_de_numeros; std::cout << "\n";
 
 if ((cantidad_de_numeros == false || (std::is_integral<decltype(cantidad_de_numeros)>::value) == false)) {

    std::cout << "Error" << std::endl;
    return 0;
 }  
 else {
    while (contador <= cantidad_de_numeros) {
        
        std::cout << "Digite el numero "<< contador << ": ";
        std::cin >> numero;
        
        while (contador_2 <= numero) {

            fac *= contador_2;
            contador_2++;
           }

       std::cout << "Factorial de "<< numero<< " es "<<fac << "\n"<< std::endl;

        contador++;
        contador_2 = 1; // Reiniciamos los valores del contador y el factorial.
        fac = 1;
     }
   }
}