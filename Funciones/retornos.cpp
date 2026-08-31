#include<iostream>

// la sentencia return es una funcion que especifica un valor  o los valores que la funcion debe producir
// como salida

int function_name(){
    return 100;
}

int main () {

    int number = function_name();
    std::cout << number << std::endl;

    return 0;
}