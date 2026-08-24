#include<iostream>
#include<cstdlib>
#include<type_traits> // Biblioteca para trabajar con tipos y hacer comprobaciones
int main(){

int num=0,suma=0,x=0;

std::cout << "Este programa encuentra la suma de X numeros" << std::endl;
std::cout << "Ingrese hasta que numero quiere sumar: "; std::cin >> x;

if (x==false || (std::is_integral<decltype(x)>::value )==false){ // Verifica si la variable es un entero
    
    std::cout << "Error" << std::endl; 
    return 0;}
  
  else  {
    while (num<x){
        num++;
        suma+=num;
        } 
    }

    std::cout << "La suma de los numeros " << x <<" es: "<< suma << std::endl;
    return 0;
}