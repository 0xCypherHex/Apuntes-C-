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
    for(int i = 0; i < lenghtFirstArr; i++){

        std::cout << "Inserte elemnto " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr1[i] = val;

    } 

    // Insertamos valores para el segundo arreglo
    for(int i=0; i < lenghtSecondArr; i++){

        std::cout << "Inserte elemento  " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr2[i] = val;

    }

    if (lenghtFirstArr >= lenghtSecondArr) {

        for (int i = 0; i < lenghtFirstArr; i++){



        }


    }
    
    else if (lenghtSecondArr >= lenghtFirstArr) {

        for (int i = 0; i < lenghtSecondArr; i++){


        }

    } 
       
    return 0;
}
