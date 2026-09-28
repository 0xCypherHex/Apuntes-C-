#include<iostream>
#include<cstdlib>

/*

Los argumentos son nombres de campos (variables o constantes) que usa el método llamante para enviar y recibir información
del método invocado y que tienen una correspondencia biunívoca con los parámetros con los cuales se construyó; por lo tanto
estos deben ser iguales en número y en tipo de dato que los parámetros que los parámetros, ya que cada argumento le corresponde 
un parámetro y viceversa. Los argumentos también son de dos clases: unos que envían información al método y otros que reciben información
(si hay parámetros de envío).

La transferencia de información entre argumentos y parámetros se puede hacer de dos maneras:

-Por valor: En este caso el argumento le da a su parámetro respectivo su valor, pero no su dirección de memoria; por lo tanto los cambios
que sufra el parámetro en el método no afectan al argumento. Esto significa que al parámetro se le asigna una dirección de memoria 
diferente a la asignada al argumento y recibe una copia del valor que tiene el argumento correspondiente.

-Por variable o referencia: En este caso el argumento le da a su parámetro respectivo su valor  y su dirección de memoria; por lo tanto las 
modificaciones que se le hagan al parámetro en el método afectan al argumento. Esto significa que tanto argumento como parámetro comparten
la misma dirección de memoria. En los lenguajes que admiten parámetros de envío es necesario colocarles & (ampersand) antes del nombre del 
parámetro en la codificación. Esto indica que el argumento le debe enviar al parámetro su dirección de memoria.


*/

// Este ejercicio es el mismo que el ejercicio1 pero explica como se invoca al metodo por medio de la clase

class calcularPromedio {

public:
     static float sumarNumeros(int n) {

        float suma = 0;
        int valor = 0; 

          for (int i = 1; i <= n; i++ ) {

            std::cout << "Ingrese el número " << i << ": ";
            std::cin >> valor;

            suma += valor;
        }

        return suma;
    }

     static float promedio(int n){

        float suma = sumarNumeros(n); // Llamamos a la primera funcion

        return suma / n;
    }

}; // Las clases terminan en punto y coma.


int main(void) {
    int cantidad = 0;

    std::cout << "Digite la cantidad de numero a promediar: ";
        std::cin >> cantidad;


    // Aqui se invoca al método por medio de su variable    

    float resultado = calcularPromedio::promedio(cantidad); // Llamamos a la clase calcularPromedio y a la funcion promedio

    std::cout << "El promedio es: " << resultado << std::endl;

    return 0;
}

