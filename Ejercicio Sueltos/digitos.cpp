#include <cstdlib>
#include <iostream>

int main () {

    int numero=0, n=0, suma=0, cDigito=0, digito=0;

    std::cout << "Inserte un numero : ";
        std::cin >> numero;
        n = numero;

    while (n > 0) { // Se detiene cuando el numero sea decimal sin enteros porque es int

        digito = n % 10; //Extrae el ultimo digito del numero
        n = n/10;  // quita un digito, no redondea

        cDigito++;
    
        suma += digito; // Suma el digito
    
    }

    std::cout << "Cantidad de digitos: " << cDigito << std::endl;
    std::cout << "Suma de los digitos: " << suma << std::endl ;


    return 0;

}

