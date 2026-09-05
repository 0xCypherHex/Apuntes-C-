#include<cstdlib>
#include<iostream>
/*
    Calcular el factorial de un numero;
*/
int main () {
    
    int numero_factorial = 0, contador = 1, fac = 1;

    std::cout << "Digite el numero al que se le calculara el factorial: "; std::cin >> numero_factorial;

    while (contador <= numero_factorial) {

        fac*=contador; // 1*1=1, 1*2=2, 2*3=6, 6*4=24, 24*5=120
        
        contador++;
        
    }

    std::cout << "El factorial del numero es: " << fac << std::endl;
return 0;
}