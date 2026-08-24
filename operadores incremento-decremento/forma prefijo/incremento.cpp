#include<cstdlib>
#include<iostream>

int main () {

    int x = 5;
    int y = x++;
/*
    y = 5 , x = 6.
    En el primer caso 'y' almacena el valor original y despues x incrementa 1
*/

    int a = 5;
    int b = ++a;

/*  a=6, b=6
    En el segundo caso 'a' incrementa primero y despues almacena el valor 
*/

 //**************************************************** */

    int x = 5;
    int y = x--;
/*
    y = 5, x = 4;    
*/

    int a = 5;
    int b = --a;
/*
    a = 4, b = 4
*/




    return 0;
}