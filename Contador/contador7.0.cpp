#include<iostream>
#include<cstdlib>

using namespace std;

int main () {

int cantidad_articulos, contador=1,code=0,total_a_pagar=0;
float valor_articulo, cobro=0;

 cout << "Digite el codigo del primer artículo: "; cin >> code;

    while (code>0) {
        
        

        cout << "Digite el valor del articulo por unidad: "; cin >> valor_articulo;
        cout << "Cantidad del artículo: "; cin >> cantidad_articulos;
        cobro = valor_articulo * cantidad_articulos;
        total_a_pagar += cobro;
        cout << "\nCodigo de articulo " << code << endl << "Cantidad: "<< cantidad_articulos << endl << "Valor por unidad: " << valor_articulo << endl << "Cobro: " << cobro << endl;

        contador++;
        cout << "\nArticulo  " << contador << ". Digite el codigo o 0 para salir: "; cin >> code;


    }
        cout << "Total a pagar: " <<  total_a_pagar << endl;
        cout << "Saliendo..." << endl;
        cin.ignore().get(); 
 return 0;
}