#include <stdio.h>
#include <stdlib.h>


typedef struct {
    short s ;
    char c  ;
    int i ;
    char e ;
    double d ;
    char f ;
} waste1 ;

typedef struct {
    char c;
    int i;
    double d ;
} waste2 ;

typedef struct {
    double d ;
    int i ;
} waste3 ;

//EJERCICIOS
typedef struct persona{
    unsigned char sexo : 1 ;
    unsigned char nacionalidad : 2 ;
    unsigned char estado_civil : 3 ;
    unsigned char estado_laboral : 4;
} Persona ; 

typedef struct {
    unsigned char c : 3 ;
    unsigned short s : 10 ;
    unsigned int i : 19;

} Weird;

typedef struct {
    unsigned char c : 3 ;
    unsigned int i : 19;
    unsigned short s : 10;
} Packed ;

//

int main(){
// EJERCICIOS
    Persona p;
    printf("%d\n", sizeof(p));
    p.sexo = 1;
    p.nacionalidad = 0b10;
    p.estado_civil = 0b100;
    p.estado_laboral = 0b111;
    printf("%d, %d, %d, %d\n", p.sexo, p.nacionalidad, p.estado_civil, p.estado_laboral);

    Weird w;
    printf("%d\n", sizeof(w)); // 

    Packed;
    printf("%d\n", sizeof(Packed));
//
    waste1 w1;
    waste2 w2;
    waste3 w3;
    printf("%d\n", sizeof(waste1));
    printf("%d\n", sizeof(waste2));
    printf("%d\n", sizeof(waste3));
    printf("%p %p %p \n", &w3, &w3.i, &w3.d);

    return 0;
}