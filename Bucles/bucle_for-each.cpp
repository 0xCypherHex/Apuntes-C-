#include<iostream>
#include<cstdlib>
#include<array>
#include<string>

// Este bucle proporciona una forma mas mas sencilla de iterar a traves de arreglos
// Manjea automaticamente la indexacion y la recuperacion de elementos, lo que mejora la legibilidad y disminuye errores

/*
    sintaxis basica:

    for (data_type element : array) {   La variable elemen contentra el elemento actual de cada iteracion
    // Código a ejecutar para cada elemento
}

    El bucle for mejorado es especialmente útil cuando necesitas acceder a cada elemento de un array sin modificar el propio array.

*/

int main() {

    // Ejemplo uno: arreglo tradicional de C/C++.
    // Los corchetes [] indican que el arreglo tiene un tamano fijo.
    // En este caso, el compilador deduce el tamano: 7 elementos.

    int traditionalNumbers[] = {1,2,3,4,5,6,7};

    for(int number : traditionalNumbers){

        std::cout << number << std::endl;

    }

    // Ejemplo dos

    std::string fruits[] = {"apple", "kiwi", "pineapple", "orange", "grape", "banana"};

    for(std::string fruit : fruits) {

        std::cout << fruit << std::endl;

    }

    // Ejemplo tres: se declara el arreglo tradicional indicando su tamano.
    // La expresion int numbers[5] reserva espacio para exactamente 5 enteros.

    int traditionalNumbersForSum[5] = {1, 2, 3, 4, 5};
    
    int sumaElementos = 0;
    for (int number : traditionalNumbersForSum) {
        sumaElementos += number;
    }
    
    std::cout << "Suma de todos los elementos: " << sumaElementos << std::endl;

    // Ejemplo cuatro: std::array es la alternativa moderna de tamano fijo.
    // El primer argumento indica el tipo y el segundo indica el tamano.
    // A diferencia del arreglo tradicional, std::array conoce su tamano
    // y ofrece metodos como .size() y .at().

    std::array<int, 5> modernNumbersForAverage = {1, 2, 3, 4, 5};
    double sumaPromedio = 0;
    
    for (int number : modernNumbersForAverage) {
        sumaPromedio += number;
    }
   
    double average = sumaPromedio / modernNumbersForAverage.size();
    std::cout << "Average: " << average << std::endl;

    // Ejemplo cinco

    std::array<int, 5> modernNumbersForMaximum = {1, 5, 2, 9, 3};
    int maxValue = modernNumbersForMaximum[0];
   
    for (int i = 1; i < modernNumbersForMaximum.size(); i++) {
       
        if (modernNumbersForMaximum[i] > maxValue) {
       
            maxValue = modernNumbersForMaximum[i];
       
        }
    }
    
    std::cout << "Max: " << maxValue << std::endl;

    // Ejemplo seis

    std::array<int, 5> modernNumbersForMinimum = {1, 5, 2, 9, 3};
    int minValue = modernNumbersForMinimum[0];

    for (int i = 1; i < modernNumbersForMinimum.size(); i++) {
        if (modernNumbersForMinimum[i] < minValue) {
        
            minValue = modernNumbersForMinimum[i];
    
        }   
    }
    
    std::cout << "Min: " << minValue << std::endl;

    return 0;
}