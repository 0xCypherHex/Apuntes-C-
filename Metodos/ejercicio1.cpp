#include<iostream>
#include<cstdlib>

/*
    ****Clases de métodos según el retorno****
   
    Metodos que no retornan y metodos que retornan.
    
    El retorno hace referencia a un valor o estructura de datos que se envía a quien lo invoca a través de una
    instrucción return dentro del cuerpo del método.

    Métodos que no retornan o funciones tipo void:
    Son metodos que no retornan el valor dentro de sus instrucciones.
    La definición de public static será adoptada en este capitulo para desarrollar los métodos.
    La palabra void se usa para declarar funciones que no retornan valor.

    Sintaxis de las funciones tipo void:

    public static void Nombre (type parametro_1, type parametro_2){

        instrucciones;

    }


    El nombre dado al método debe cumplir con las normas para conformar nombres de variables y debe ser un verbo en infinitivo, ya que 
    los métodos denotan acción y debe connotar o reflejar lo que hace el método.

*/

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

        float suma = sumarNumeros(n);

        return suma / n;
    }

}; // Las clases terminan en punto y coma.


int main(void) {
    int cantidad = 0;

    std::cout << "Digite la cantidad de numero a promediar: ";
        std::cin >> cantidad;

    float resultado = calcularPromedio::promedio(cantidad); // Llamamos a la clase calcularPromedio y a la funcion promedio

    std::cout << "El promedio es: " << resultado << std::endl;

    return 0;
}


