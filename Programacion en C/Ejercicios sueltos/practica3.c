#include<stdio.h>

int main () {

    int a=11,b=12;
    char c='Z';
    float d=8.91234;

    printf("%X%i%c%.3f%s", a, b, c, d , "\n");

    // el %.3f le dice que solo imprima los primeros tres decimales
    // %X imprime su valor en hexadecimal

    char msg[] = "¡Bienvenido a C!";

    /*
    Tanto en la entrada como en la salida de datos se deve especificar su tipo de dato y despues el argumento separado de una coma

    Entrada:
    Los tipos de variables van entre comillas, a cada variable se le antepone un simbolo &

    scanf("especificadorTipo", &listaArgumentos);

    Especificadores para la funcion scanf();

    %c  carácter
    %d  entero con signo
    %i  entero con signo
    %e  notacion cientifica
    %f  punto flotante
    %o  octal sin signo
    %s  cadena de caracteres
    %x  hexadecimal sin signo
    %n  recibe un valor entero igual al número de caracteres leidos
    %u  lee un entero sin signo

    Salida:
    Al igual que en la salida el especificador de formato va entre comillas

    printf("texto y/o especificador formato", listaArgumentos);

    Especificadores de formato para la funcion printf();

    %c  caracter
    %d  entero con signo
    %i  entero con signo
    %u  entero sin signo
    %s  cadena caracteres
    %f  coma flotante 
    %lf dato tipo double
    %e  notacion cientifica
    %E  notacion cientifica
    %o  octal sin signo
    %x  hexadecinmal sin signo
    %X  hexadecimal sin signo
    %p  puntero
    %%  imprime el signo %
    

    */

    printf("%s%s", msg, " Te divertiras \n");

    return 0;
}