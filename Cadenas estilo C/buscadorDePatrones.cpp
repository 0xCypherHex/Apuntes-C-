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

    // Este bucle llena el primer arreglo con los valores que ingresa el usuario.
    // i va desde 0 hasta lenghtFirstArr - 1, así recorre toda la estructura.
    for(int i = 0; i < lenghtFirstArr; i++){

        std::cout << "Inserte elemento " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr1[i] = val;

    } 

    // Insertamos valores para el segundo arreglo

    std::cout << "Elementos del segundo arreglo." << std::endl;

    // Este bucle llena el segundo arreglo, que será el patrón que buscamos.
    // Recorre desde 0 hasta lenghtSecondArr - 1.
    for(int i=0; i < lenghtSecondArr; i++){

        std::cout << "Inserte elemento  " << i << ": ";
        int val = 0;
            std::cin >> val;
        arr2[i] = val;

    }

    // Si el patrón tiene menos de 2 elementos o es más grande que el arreglo principal,
    // no puede existir como subcadena contigua, por eso el resultado es false.
    if(lenghtSecondArr < 2 || lenghtSecondArr > lenghtFirstArr){
        // std::boolalpha hace que los valores booleanos se impriman como "true" o "false".
        // Sin esta bandera, un bool se mostraría como 0 o 1. , std::noboolalpha es el opuesto.
        std::cout << std::boolalpha << false << std::endl; 
        return 0;
    }

    // Esta variable guarda el resultado final.
    // Empieza en false y cambia a true si se encuentra el patrón.
    bool encontrado = false;

    // Este bucle recorre todas las posiciones posibles del arreglo principal donde puede empezar el patrón.
    // Por ejemplo, si arr1 tiene 5 elementos y arr2 tiene 2, i puede valer 0, 1, 2, 3.
    // Se usa i <= lenghtFirstArr - lenghtSecondArr para no salirnos del rango.
    for(int i = 0; i <= lenghtFirstArr - lenghtSecondArr; i++){

        // Suponemos que en esta posicion hay coincidencia.
        bool coincidence = true;

        // Este bucle compara el patrón con una porción contigua del primer arreglo.
        // j recorre cada elemento del patrón y compara arr2[j] con arr1[i + j].
        // Cuando se compara una posición, se mueve a la siguiente en ambos arreglos.
        for(int j = 0; j < lenghtSecondArr; j++){

            if(arr1[i + j] != arr2[j]){
                // Si en alguna posición no coinciden, el patrón no está ahí.
                coincidence = false;
                break; // Sale del bucle interno porque ya no hace falta seguir comparando.
            }
        }

        // Si en esta posición sí coincidieron todos, entonces encontramos el patrón.
        if(coincidence){
            encontrado = true;
            break; // Sale del bucle externo porque ya no hace falta seguir buscando.
        }
    }

    // Imprime el resultado final una sola vez.
    std::cout << std::boolalpha << encontrado << std::endl;

    return 0;
}
