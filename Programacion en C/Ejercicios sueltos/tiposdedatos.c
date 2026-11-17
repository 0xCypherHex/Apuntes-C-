#include <stdio.h>

int main(void) {
    // Declaración e inicialización con Notación Húngara
    char cLetra = 'A';          // Reserva 1 byte
    int iEdad = 25;             // Reserva 4 bytes
    float fPromedio = 9.5f;     // Reserva 4 bytes (la 'f' al final denota literal float)
    double dResultado = 0.0001;  // Reserva 8 bytes

    // Uso del operador sizeof para verificar el tamaño real en la RAM
    printf("Tamaño en bytes de char: %lu\n", sizeof(cLetra));
    printf("Tamaño en bytes de int: %lu\n", sizeof(iEdad)); // Se utiliza %lu porque es un logn unsigned para el resultado de sizeof
    printf("Tamaño en bytes de float: %lu\n", sizeof(fPromedio));
    printf("Tamaño en bytes de double: %lu\n", sizeof(dResultado)); 

    return 0;
}