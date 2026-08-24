#include<cstdlib>
#include<iostream>

int main () {

 /*
    Este codigo hace que al inicializar una variable con un valor ingresado
    reste 1

*/
  
    int num=0;
    int times=0;
    int i=0;
    std::cout << "Ingrese el valor inicial a decrementar: ";
        std::cin >> num;
    
    std::cout << "Ingrese la veces a decrementar: ";
        std::cin >> times;


    while (i<times) {
        
        std::cout << num << ", ";
        num--; // resta 1

        i++;
    }
 
    std::cout << "\n";

    return 0;
}

