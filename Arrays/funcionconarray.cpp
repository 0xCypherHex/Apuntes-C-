#include<iostream>
#include<cstdlib>


/*

Este programa debe relizar las siguientes operaciones con los elementos de un array:
-Calcular la suma de los elementos
-Calcular el promedio de los elementos
-Encontrar el maximo de los elementos
-Encontrar el minimo de los elementos

*/


double* calculateStats(double  arr[], int size ){

    double sum=0; 

    for(int i = 0; i < size; i++) {

        sum += arr[i];
    }

    double maxValue = arr[0];
    double minValue = arr[0];
    for (int i = 1; i < size; i++){ // Calcular maximo y minimo

        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }

        if (arr [i] < minValue){
            minValue = arr[i];
        }
    }

    double sumAverage = 0;

    for (int i = 0; i < size; i++) {

        sumAverage += arr[i];

    }   

    double average = sumAverage / size ;


    // El siguiente apuntador almacena cada resultado en un espacio para despues hacer la llamada

    double* eachResults = new double[4]; // El * indica que voy a guardar un puntero hacia un double, ademas double [4] indica que voy a almacenar 4 numero double seguidos

    eachResults[0] = sum;
    eachResults[1] = average;
    eachResults[2] = maxValue;
    eachResults[3] = minValue;

    return eachResults;

}

int main() {

    int numberElements=0;

    std::cout << "Numero de elementos del array del 0 a: ";
        std::cin >> numberElements;
    numberElements += 1;

    std::cin.ignore();
    double arr[numberElements];


    for (int i = 0; i < numberElements; i++) {
        double val;

        std::cout << "Inserte elemento: " << i << ": ";

        std::cin >> val;
        arr[i] = val;
    }

    // El asterisco (*) indica que la variable es un apuntador en lugar de guardar un valor numerico directamente, el puntero guarda la direccion de memoria donde se encuentra ese dato
    
    double* stats = calculateStats(arr, numberElements); // Llamada a la funcion que calcula las estadisticas y devuelve un puntero a un array de 4 elementos
    std::cout << "Sum: " << stats[0] << std::endl;
    std::cout << "Average: " << stats[1] << std::endl;
    std::cout << "Maximum: " << stats[2] << std::endl;
    std::cout << "Minimum: " << stats[3] << std::endl;
    delete[] stats;


    return 0;
}