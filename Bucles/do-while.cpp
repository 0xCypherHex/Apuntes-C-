#include<iostream>
#include<cstdlib>
#include<unistd.h>

int main () {

    // el bucle do-while es similar a while
    // pero con la diferencia de que ejecuta al menos una vez el codigo antes
    // que se compruebe la condicion, osea que el cuerpo de codigo se ejecutara la primera vez
    // independientemente de si la condicion es verdadera o falsa

    /* 
        do {
                
            // codigo

        } while (condicion);

    */

    double pressure=0;

    do {
       
        std::cout << "Pressure: " << pressure << std::endl;
        pressure -= 2;
        sleep(4);
        std::cout << "Pressure: " << pressure << std::endl;
        sleep(4);
        pressure += 4;
        

    } while (pressure != 10 || pressure > 11);   



    return 0;
}