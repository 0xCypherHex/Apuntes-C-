#include<iostream>
#include<cstdlib>
#include<type_traits>

int main () {
    
    float num=0, suma=0, promedio=0;
    int contador=0, iteracion;


std::cout << "Digite el primer numero: " ; std::cin >> num;



while (num>0) {
    
    suma += num;
    contador++;
    std::cout << "Digite el numero siguiente o 0 para terminar: "; std::cin >> num;
 
        }
       
    
 std::cout << "Suma de los numeros: " << suma << std::endl;
 promedio = suma/contador;
 std::cout << "Promedio: " << promedio << std::endl;
 
return 0;
} 