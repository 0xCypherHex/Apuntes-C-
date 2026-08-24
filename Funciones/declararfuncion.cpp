#include<iostream>
#include<cstdlib>

/* El proposito de la funcion es reutilizar una secuencia de codigo que tiene un nombre
varias veces

sintaxis

return_type function_name(parameters) {
    codigo
}

*/

void hello() {
    std::cout << "Hola";
}

int main () {

// llamar a la funcion
  hello();

return 0;
}