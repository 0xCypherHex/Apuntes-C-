#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){;
float y,x;
char operador;
char repetir;
int opcion;
double log_b_x;
int base, argumento;

/* La forma básica de un logaritmo se escribe como log ⁡b(x),
  donde 'x' es un número positivo llamado "argumento", 'b' es la "base" del logaritmo y log⁡b(x) es el exponente al que se debe elevar la base 'b' para obtener 'x'.
  En otras palabras, el logaritmo nos dice a qué potencia debemos elevar la base para obtener el número dado.
 
  En la expresión log ⁡b (x)=c, 'c' representa el resultado del logaritmo. Es decir, 'c' es el exponente al que se debe elevar la base 'b' para obtener el número 'x'. Por lo tanto:

    'b' es la base del logaritmo.
    'x' es el argumento del logaritmo.
    'c' es el resultado del logaritmo, que es el exponente al que se debe elevar bb para obtener ´x´.
*/

cout << "Calculadora RobCo. Industries. Version 2.0.1"<<endl;
cout << "Operaciones basicas 1"<<endl;
cout << "Calcular logaritmos 2"<<endl;
cout << "Opcion: ";cin >> opcion;

if (opcion != 1 && opcion != 2) {

    cout << "Error"<<endl;
    return 0;
}
else {
    if (opcion==1){

    do {
       cout << "Inserte valor de x: "; cin >> x;
       cout << "(+,-,/,*,^): "; cin >> operador;
       cout << "Inserte valor de y: "; cin >> y;

           switch (operador){

            case  '+': cout << "La suma de " <<x<<" y "<<y<<" es: "<<x+y<<endl;
              break;
            case  '-': cout << "La resta de "<<x<<" y "<<y<<" es: "<<x-y<<endl;
             break;
            case '/': cout << "La division de "<<x<<" entre "<<y<<" es: " <<x/y<<endl;
             break;
            case '*': cout << "La multiplicacion de "<<x<<" por "<<y<<" es: " <<x*y<<endl;
             break;
            case '^': cout << x << " elevado a "<< y <<" es: " << pow(x,y) <<endl;
             break;

         default: cout << "Ha insertado un objeto erroneo"<<endl; return 0;
  
       }
       
            cout << "¿Desea hacer otra operacion? (s/n) :"; cin>>repetir;
     } while ( repetir == 'S' || repetir == 's');
    }

    if (opcion==2) {

    do {
      cout << "Tenemos que log b (x) = log(x) / log (b)" << endl;
      cout << "Ingrese la base 'b': "; cin >> base;
      cout << "Ingrese argumento 'x': "; cin >> argumento;
    
      log_b_x= (log(argumento)/log(base));
    
      cout << "log "<<base<<"("<<argumento<<"): "<<log_b_x<<endl; 

      cout << "¿Desea hacer otra operacion? (s/n) :"; cin>>repetir;

      } while (repetir == 'S' || repetir == 's');
    }
}

return 0;
    
    }
