#include <cstdlib>
#include <iostream>

int main () {

int numero=0, n=0, suma=0, cDigito=0, digito=0;

    std::cout << "Inserte un numero de cuatro cifras: ";
        std::cin >> numero;
        n = numero;

    digito = n % 10; //Extrae el ultimo digito del numero
    n = n/10;  // quita un digito, no redondea

    cDigito++;
    
    suma += digito; // Suma el digito
    
    if (n > 0) 
    {
        digito=n%10; //Extrae el siguiente digito
        cDigito++;
        n = n/10;
        suma += digito;
        
        if (n > 0) {
            digito=n%10;
            cDigito++;
            n = n/10;
            suma += digito;
            
            if (n > 0) {
                digito=n%10;
                cDigito++;
                n = n/10;
                suma += digito;
            }
        } 
    }
    if (n>0) {
        std::cout << "El numero tiene mas de cuatro cifras" << std::endl;
    }
    else {
        std::cout << "El numero tiene: " << cDigito << " Digitos" << std::endl;
        std::cout << "La suma de los digitos es: "<< suma << std::endl;
    }

    return 0;

}