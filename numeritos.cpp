#include <cstdlib>
#include <iostream>


int main () {
int num_uno=0,num_dos=0,num_tres=0;

std::cout << "Dígite un numero entero de tres cifras: ";
    std::cin >> num_uno;

num_tres = num_uno % 10;
num_uno = num_uno / 10;

num_dos = num_uno % 10;
num_uno = num_uno / 10;

num_uno = num_uno % 10;

std::cout << "la suma de los digitos es: " << num_uno + num_dos + num_tres << std::endl;

std::cout << "el numero de derecha a izquierda es :" << num_tres <<  num_dos << num_uno << std::endl;

return 0;

}
