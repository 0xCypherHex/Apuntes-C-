#include <stdio.h>

typedef union {
    char c;
    unsigned char u;
    unsigned short s;

} Myunion;


typedef union {
    float f;
    unsigned int i;
} Myunion2;


typedef struct {
    unsigned char Red, Green, Blue, Alpha;
} RGB;

typedef union {
    unsigned int value;
    RGB rgb;
    unsigned char array[4];
} Color;

int main (){

    Myunion u;
    printf("%d\n", sizeof(u)); // byte 1
    u.c = -4;
    printf("%d %d %d\n", u.c, u.u, u.s); // -4  /  252  /  252
    u.u = 200;
    printf("%d %d %d\n", u.c, u.u, u.s); // -56  /  200  /  200
    u.u = 100;
    printf("%d %d %d\n", u.c, u.u, u.s); // 100  /  100  /  100
    u.s = 428;
    printf("%d %d %d\n", u.c, u.u, u.s); // -84  /  172  /  428


//  Este print demuestra que todos van al mismo lugar de memoria, aunque haya modificaciones en el valor.
    printf("%p %p %p %p\n", &u.c, &u.u, &u.u, &u.s);

    Myunion2 u2;
    u2.f = 85.4375;
    printf("%.4f, %8X\n", u2.f, u2.i);
    u2.i = 0xC2AAE000;  // prender bit signo
    printf("%.4f, %8X\n", u2.f, u2.i);
    u2.f = 85.6;
    printf("%.4f, %8X\n", u2.f, u2.i);

//  RGB - COLORES
    RGB orange = {255, 127, 0, 255};
    Color c;
    c.value = 0xFF00AA55;
    printf("(%d, %d, %d, %d)\n", c.rgb.Red, c.rgb.Green, c.rgb.Blue, c.rgb.Alpha);
    printf("[%d, %d, %d, %d]\n", c.array[0], c.array[1], c.array[2], c.array[3]);






    return 0;
}











