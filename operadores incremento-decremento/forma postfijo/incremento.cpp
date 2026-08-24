#include<cstdlib>
#include<iostream>
#include<cmath>
/* 
    Los operadores de incremento se representan con dos signos más ++ y el de decremento -- 
    se utilizan para aumentar o disminuir el valor de una variable en 1 

*/

int main () {

// Incrementar una variable durante las veces indicadas


int i=0;
int times=0;
int variable=0;

    std::cout << "Indique las veces que quiere aumentar la variable: ";
        std::cin >> times;
    std::cout << "Indique el valor inicial de la variable: ";
        std::cin >> variable;

    while (i<times){

        std::cout << variable << ", ";
        variable +=  1;

         i++; 
        }

        std::cout << "\n";
    
    return 0;

}