#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

int cantidad_de_terminos=0,contador=0,sumando=0;

cout << "Sucesión de 2 " << endl ;
cout << "Inserte la cantidad de terminos a generar: "; cin >> cantidad_de_terminos;
cout << "Inserte el termino en el que quiere empezar: "; cin >> sumando;

cout << sumando << " ";

while (contador <= cantidad_de_terminos) {

       sumando = sumando+2;
        cout << sumando << " ";

    contador++;
        }
    
     cout << endl;
    return 0;
    }

