#include<cstdlib>
#include<iostream>
#include<type_traits>

/*  
        Definicion del programa: 
    El programa debe encontrar el valor mayor y menor en un grupo de numeros (n datos) lo mismo que el promedio de estos.
*/
int main(){

float suma=0, numero_mayor=0, numero_menor=0, promedio=0, numero=0; 
int numeros=0, contador=2; // El contador inicia en 2 porque se lee el primer numero

std::cout << "Digite la cantidad de numeros: "; std::cin >> numeros;
std::cout << "Digite el primer numero: "; std::cin >> numero;

numero_menor = numero;
numero_mayor = numero;
suma += numero; // Se almacena el primer numero para ser sumado

if ((numeros==false || (std::is_integral<decltype(numeros)>::value)==false) && (numero==false  ))  { // Verificacion de datos
    std::cout << "****************************** ERROR ******************************" << std::endl;
    return 0;
    }

    else {
            while (contador <= numeros){
                std::cout << "Digite el numero "<<contador<<": "; 
                std::cin >> numero;
                suma += numero; // Sumamos los siguientes numeros

                    if (numero_menor > numero) {
                        numero_menor = numero;
                    }
                    else if (numero > numero_mayor){
                            numero_mayor = numero;
                    }
                        contador++;
            }
promedio = suma/numeros;
std::cout << "Valor mayor: "<<numero_mayor<<std::endl;
std::cout << "Valor menor: "<<numero_menor<<std::endl;
std::cout << "Promedio: "<<promedio<<std::endl;

       }
       return 0;
}