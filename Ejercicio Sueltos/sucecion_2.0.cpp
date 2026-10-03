#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

long long  cantidad_de_terminos=0, sumando=0; 
int contador=0;

cout << "Sucesion -2 y +3" << endl;
cout << "Ingrese la cantidad de terminos a generar: "; cin >> cantidad_de_terminos;
cout << "Ingrese el termino en el que quiere empezar: "; cin >> sumando;

cout << sumando << " ";

while (contador <= cantidad_de_terminos) {

    sumando = sumando -2;
    cout << sumando << " ";

    contador++;

    sumando = sumando +3;
    cout << sumando << " ";

    contador++;
    
    }

    cout << endl;
    return 0;

}