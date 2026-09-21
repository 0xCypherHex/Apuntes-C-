#include <iostream>
#include <string>
using namespace std;

int main() {
    // Leer la entrada
    string input;
    cin >> input;
    
    // Declarar la variable data
    int data = 42;
    
    int* ptr; // Declaramos un puntero 



    if (input == "valid"){

        ptr = &data;
        
    }

    else if (input == "null") {

        ptr = nullptr;

    }

    if (ptr != nullptr){

        cout << "Value: " << *ptr << endl; // Al poner el asterisco invocamos el valo del puntero no la direccion de memoria

    }

    else {

        cout << "Pointer is null - cannot dereference" << endl;

    }

   \
    
    return 0;
}