#include<iostream>
#include<cstdlib>

int main() {
    
    int iCantidadPersonas=0;
    int iSumaEdades=0; 
    float fPromedioEdades=0;

    int iEdad=0;

    int i=1;

    std::cout << "Digite la cantidad de personas: ";
        std::cin >> iCantidadPersonas;

    
    
    do {

        std::cout << "Ingrese la edad de la persona " << i << ": ";
            std::cin >> iEdad;
            
        iSumaEdades += iEdad;

        i++;

    } while (i <= iCantidadPersonas);

    fPromedioEdades = iSumaEdades / iCantidadPersonas;

        std::cout << "Suma edades: " << iSumaEdades << std::endl << "Promedio edades: " << fPromedioEdades << std::endl;


    return 0;
}