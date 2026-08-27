#include <stdio.h>

int main() {
    printf("Sesion 3\n");
    char c = 100;
    printf("%d, %c, %X\n",c,c,c); // Porque imprime 64?
    // Porque 100 en hexadecimal es 64. 100 en binario es: 0110 0100 = 0x64

    char d = -100;
    printf("%d, %c, %X\n",d,d,d); // Porque imprime FFFFFF9C?
    // Se aplica complemento a 2 binarios(100) y queda 9C (el msb = 1)
    // printf llena de F la cadena hexadecimal porque:
    // a) el valor es negativo (-100)
    // b) el tipo no es unsigned (char)

    unsigned char e = 254;
    
    printf("%d, %c, %X\n",e,e,e); // ¿PORQUE IMPRIME FE? PORQUE NO AÑADIO MUCHAS F?
    // 254 en binario es: 1111 1110 = 0xFE

    // casos que se salen de rango

    unsigned char f = -50;
    printf("%d, %c, %X\n",f,f,f); // ¿porque lo admite? ¿porque imprime 206 y CE?
    // bin (50) = 0011 0010

    // com 1    = 1100 1101
    //                   +1
    //            1100 1110
    //              C    E 
    // dec(1100 1110) = 206

    char g = 130;
    printf("%d, %c, %X\n",g,g,g); // ¿porque l admite? ¿porque imprime -126 y FFFFF82?
    // 1000 0010 = 82
    //        -1
    // 1000 0001
    // 0111 1110 = -126

    unsigned short int s = 0xA7C6;
    printf("%d, %X\n",s,s); // s = 42950 

    // Representando datos en binario: 0b
    unsigned short int t = 0b10100010;
    printf("%d, %X\n",t,t); // t = A2
    return 0;
}