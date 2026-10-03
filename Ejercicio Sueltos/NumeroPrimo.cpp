#include<cstdlib>
#include<iostream>

using namespace std;

int main () {

int numero=0, entre_dos=0; 
int iterador=2;
bool aux=true;

cout << "Digite el numero a evaluar: "; 
cin >> numero;

entre_dos = numero/2;

while ((iterador<=entre_dos) && (aux==true)) {
    
if (numero % iterador == 0) { // La secuencia se ejecuta si no tiene decimales osea 0

    aux = false;
                            }   
    else {
    
    iterador++;
        }
        

                                             }


    if ((aux==true) && (numero>1)){

        cout << "El numero " << numero << " es primo" << endl;
    }

        else {

            cout << "El numero " << numero << " no es primo" << endl;

        }

    

    return 0;
}