#include<iostream>
#include<cstdlib>

int main() {

    // Este programa ordena en orden inverso los elementos de un array.

    int cantidadElementos = 0;

    std::cout << "Ingrese la cantidad de elementos a ordenar: ";
        std::cin >> cantidadElementos;

    if (cantidadElementos <= 0) {
        std::cout << "La cantidad debe ser mayor que cero." << std::endl;
        return 1;
    }

    if (cantidadElementos == false) { // Verificar si la entrada es un número válido
        std::cout << "El valor ingresado no es un numero valido. Por favor, ingrese un numero." << std::endl;
        return 1;

    }

    double arr[cantidadElementos];

    for(int i = 0; i < cantidadElementos; i++){
       
        std::cout << "Ingrese el elemento " << i << ": ";
        
        double val;
        std::cin >> val;

         if (val == false) { // Verificar si la entrada es un número válido
            std::cout << "El valor ingresado no es un numero valido. Por favor, ingrese un numero." << std::endl;
            
            return 1;
        } else {
            
            arr[i] = val;

         }
    }

    double reverseArr[cantidadElementos];

    for(int i = cantidadElementos - 1; i >=0; i-- ) { // Se pone menos uno para que no se salga del rango del array, ya que el indice empieza en 0 y termina en cantidadElementos - 1

        reverseArr[cantidadElementos - 1 - i] = arr[i]; // Almacenar los elementos en orden inverso en el nuevo array

    }

    for(int i = 0; i < cantidadElementos; i++){

        std::cout << reverseArr[i];

        if (i < cantidadElementos - 1){

            std::cout << ", ";

        }
        
    }



    return 0;
}
