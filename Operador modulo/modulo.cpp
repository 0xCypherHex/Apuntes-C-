#include<iostream>
#include<cstdlib>

using namespace std;

int main () {
// El programa obtendra el resto de un numero dividudo entre otro
int a=0,b=0;
float modulo=0, division=0;

cout << " modulo de a/b " << endl;
cout << "Introduzca a: "; cin >> a;
cout << "Introduzca b: "; cin >> b;

division = a/b;
modulo = a%b;
 
cout << "La division es: " << division << endl;
cout << "El modulo es: " << modulo << endl;

return 0;

}