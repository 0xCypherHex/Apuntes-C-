#include<cstdlib>
#include<iostream>

int main () {

    /*
    Sintaxis del bucle for
    el bucle for se usa para iterar sobre un rango mientras while itera siempre que se cumpla una condicion

    for (initialization; condition; update;) {
    
    }

    */

    for (int i=0; i<10; i++){
        std::cout << i << std::endl;
    }
    
    int sum_numbers=0;

    for (int i=0; i <=100; i++) {

        sum_numbers += i;

    }

        std::cout << sum_numbers << std::endl;

        for (int  i=0; i < 10; i++) {
            if (i==6){
                break; // Detiene el bucle
            }
            std::cout << i << std::endl;
        }
        

        for (int step=0; step < 10000; ++step){
            
            float i = step * 0.01f; 

            if (i == 90) {
            std::cout << i << std::endl;
            continue;
            }
        }

        for (int i=0; i <= 20; i++){

            if (i % 2) {
                continue;
            }

            std::cout << i << std::endl;
        }

        return 0;
    }