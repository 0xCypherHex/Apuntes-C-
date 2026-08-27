#include <stdio.h>


int main() {
    printf("Hola putos\n");

    float price1 = 345.678;
    float price2 = 68.5;
    float price3 = 1234;
    
    int  qty = 20, qty2 = 8, qty3 = 125; 

    printf("%04d\t$%8.2f\n", qty, price1);
    printf("%04d\t$%8.2f\n", qty2, price2);
    printf("%04d\t$%8.2f\n", qty3, price3);

    char c1 = 'A', c2 = '\t', c3 = 64 /* @ */, c4 ='\"';

    printf("%c %c %c %c \n", c1, c2, c3, c4);
    printf("%d %d %d %d \n", c1, c2, c3, c4);

    const double PI = 3.1415926535;
//    PI = 4; Esto da error porque Porque PI es constante
    printf("%f\n",PI);

    short int a = 1000; // Ocupa 16 bits en memoria, en lugar de 32 bits del int
    long int b = 100000; // Ocupa 32 bits en memoria, en lugar de 16 bits del short int
    long long int c = 1000000000;

// lld --> long long int
// ld  --> long int

    printf("%d,%ld,%lld\n", a, b, c);

// sizeof expresa el tamaño de una variable en bytes (no en bits)
    printf("sizeof a: %d, sizeof b: %d, sizeof c: %d\n", sizeof a, sizeof b, sizeof c );

// sizeof tambien puede usarse como funcion para expresar el tamaño de un tipo de dato
    printf("%d, %d, %d, %d\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double), sizeof(long double) );
    return 0;

//  char va de -128 a 127
// unsigned char va de 0 a 255

    unsigned char qty4 = 240;
    printf("qty4 = %d\n", qty4); 
    
    qty4 = 255;
    printf("qty4=%d\n", qty4);
    qty4 = 0xFF;
    printf("qty4=%d\n", qty4);
//  260 = ... 0001 0000 0100  --- se conservan los 8 bits menos significativos

    float estatura = 1.79;
    unsigned int poblacion_inicial = 5200000;
    char key_pressed = '1';
}