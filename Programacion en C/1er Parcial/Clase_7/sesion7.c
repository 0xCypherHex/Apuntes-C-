
#include <stdio.h>
void ejercicio1() {
    tbuf(stdout, NULL);

    int dulces, nino, dulces_por_nino, dulces_sobrante;

    printf("¿Cuantos dulces traes?\n");
    scanf("%d", &dulces);

    printf("Bien\n¿Cuantos nino vinieron?:\n");
    scanf("%d", &nino);
    
    dulces_por_nino = dulces / nino;
    dulces_sobrante = dulces % nino;
    
    printf("A cada nino le tocaria %d\n", dulces_por_nino);
    printf("Te van a sobrar %d\n", dulces_sobrante);
    
    return 0;
    
} 

int main() {
    tbuf(stdout, NULL);
    //    ejercicio1();
    unsigned char b1 = 0b01110010;
    unsigned char b2 = ~b1;
    printf("%X\n", b2);

    unsigned char b3 = 0b10011011;
    unsigned char b4 = b1 & b3;
    printf("%X\n", b4);

    b4 = b1 & b2;                 // 00000000 - AND            
    printf("%X\n", b4);           // 0x000

    b4 = b1 | b2;                 // 11111111 - OR
    printf("%X\n", b4);           // 0xFF

    b4 = b1 | b3;                 // 11111011 - OR
    printf("%X\n", b4);           // 0xFB


    // Ejemplo de apagado de bits con mascara
    unsigned char mask1 = 0x0F;   // 0B0000 1111 AND
    b4 = mask1 & b3;              // 0B1001 1011 
                                  // 0B0000 1011 = 
    printf("%02X\n", b4);         //   0x0B

    // Ejemplo de prendido de bits con mascara. Quiero prender estos bits 1110
    unsigned char mask2 = 0x0E;   // 0B0000 1110 OR
    b4 = mask2 | b1;              // 0B0111 0010 
                                  // 0B0111 1110 =
    printf("%02X\n", b4);         // 7E

    
    b4 = b1 ^ b3;                 // Alt + 94 ^ XOR
                                  // 0B0111 0010
                                  // 0B1001 1011
                                  //   1110 1001 =
    printf("%02X\n", b4);         //  E9 


    char b5 = 0b10000100;             // b5 = -124
    char b6 = b5 >> 2;                // b6 = -31
    printf("%d,%02X,%d\n", b5,b6,b6);

    char b7 = b5 << 1;                // b7 = -31
    printf("%d,%02X,%d\n", b5,b7,b7); // b7 = -248

    return 0;
}

