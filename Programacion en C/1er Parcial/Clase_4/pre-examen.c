#include <stdio.h>

// msb = most-significant bit
// lsb = least-significant bit

type

int maint() {
    int i2 = -6;
    char c1 = -29;
    printf("%X, %X\n", i2, c1);

// cuando el msb es comienza en 1, el dato para los no unsigned es negativo
    unsigned char c4 = 0b01010100;
    char c5 = 0b01010100;
    printf("%d, %d\n", c4, c5);

    unsigned short s1 = 0b11010100;
    short s2 = 0b11010100; // como se llenaron los 8 msb? = con ceros
    printf("%d, %d\n", s1, s2);
    
    return 0;
}


