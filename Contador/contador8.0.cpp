#include<iostream>
#include<cstdlib>

using namespace std;

int main () {

int numero, cantidad_digitos, digitos;
long long aux ,suma_digitos;

    cout << "Inserte el número: "; cin >> numero;

    aux = numero;
    while (aux>0) {
        
        digitos = aux%10;
        cantidad_digitos++;
        suma_digitos += digitos;
        aux = aux/10;

    }

    cout << "Cantidad de digitos: " << cantidad_digitos << endl;
    cout << "Suma de los digitos: " << suma_digitos << endl;

    return 0;
}