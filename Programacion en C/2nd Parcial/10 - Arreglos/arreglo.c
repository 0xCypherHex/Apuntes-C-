#include <stdio.h>
#include "IntArrays.h"
#include "implementacion.c"

void printArray(int array[], int n){
    int i;

    printf("n = %d\n", n);
    printf("array[0] = %d\n", array[0]);

    for (i = 0; i < n - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[n - 1]);
}

int main() {
    setbuf(stdout, NULL);

    int array1[] = {5, 3, 7, 10, 8, 4};
    int array2[20] = {1, 2, 3, 4, 9, 10, 13, 14, 16};
    int array3[30];
    array3[0] = 20;

    int array4[1] = {50};
    int array5[29] = {1000};

    printf("%lu, %lu, %lu\n", sizeof array1, sizeof array2, sizeof array3);

    int n1 = sizeof array1 / sizeof array1[0];
    int n2 = sizeof array2 / sizeof array2[0];

    printArray(array1, n1);
    printArray(array2, n2);
    printArray(array3, 10);

    printf("%d\n", n1);


    int m = min(array1 , n1);
    float avg = average(array2, 9);
    printf("Minimo de array1: %d Promedio de Array2: %.2f\n", m, avg);
    invert(array2, 9);
    printArray(array2, 9);

    return 0;
}