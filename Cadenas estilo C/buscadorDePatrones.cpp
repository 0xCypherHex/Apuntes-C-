#include<iostream>
#include<string>
#include<vector>

/*

    Este programa recibe dos enteros para indicar el tamaño de dos arreglos de enteros como entrada,
    y determa despues si el segundo arreglo aparece como un patron dentro del primer arreglo en orden consecutivo.

    El patron existe cuando todos los elementos del segundo arreglo aparecen juntos, en el mismo orden, 
    en lugar dentro del primer arreglo, como si se buscara una subcadena dentro de una cadena.

*/

int main() {

    int lenghtFirstArr = 0;
    std::cout << "Tamaño del primer arreglo: ";
        std::cin >> lenghtFirstArr;

    int lenghtSecondArr = 0;
    std::cout << "Tamaño del segundo arreglo: ";
        std::cin >> lenghtSecondArr;

    // Declaramos dos arreglos con el tamaño asignado
    int arr1[lenghtFirstArr];
    int arr2[lenghtSecondArr];

    // Insertamos valores para el primer arreglo

    std::cout << "Elementos del primer arreglo." << std::endl;

    for(int i = 0; i < lenghtFirstArr; i++){

        std::cout << "Inserte elemento " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr1[i] = val;

    } 

    // Insertamos valores para el segundo arreglo

    std::cout << "Elementos del segundo arreglo." << std::endl;

    for(int i=0; i < lenghtSecondArr; i++){

        std::cout << "Inserte elemento  " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr2[i] = val;

    }

    

    for(int i=0; i <= lenghtFirstArr - lenghtSecondArr; i++){ // Este bucle itera restando la cantidad de elementos de los arrays, esto para obtener una cadena de tal tamaño que sera comparada
     
        bool coincidence = true; 

        for(int j = 0; j < lenghtSecondArr; j++){
        
            if(arr1[i + j] != arr2[j]){

                coincidence = false; 
               
                break;
            }
         
            }


        if(coincidence == false){

            std::cout << "No hay coincidencias." << std::endl;

        }

        if(coincidence){

        std::cout << "Hay coincidencias." << std::endl;

            break;
        }
    }
    


       
    return 0;
}
