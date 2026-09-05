#include<iostream>
#include<cstdlib>
#include<array>

double* calculateStats(double  arr[], int size){




    
    double* newArr = new double[4]; // El * indica que voy a guardar un puntero hacia un double, ademas double [4] indica que voy a almacenar 4 numero double seguidos
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;

    return newArr;

}

int main() {

    int numberElements=0;

    std::cout << "Numero de elementos del array: ";
        std::cin >> numberElements;

    std::cin.ignore();
    double arr[numberElements];

    for (int i = 0; i < numberElements; i++) {
        double val;
        std::cin >> val;
        arr[i] = val;
    }

    double* stats = calculateStats(arr, numberElements);
    std::cout << "Sum: " << stats[0] << std::endl;
    std::cout << "Average: " << stats[1] << std::endl;
    std::cout << "Maximum: " << stats[2] << std::endl;
    std::cout << "Minimum: " << stats[3] << std::endl;
    delete[] stats;


    return 0;
}