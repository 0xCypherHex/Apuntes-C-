#include<cstdlib>
#include<iostream>

int main(){

    int suma=0,num=0,x;
    std::cout << "Numero hasta el que se sumara: "; std::cin >> x;
while(num<x){
num+=1;  // Igual a num++ 
suma+=num; // Hace suma de 1 + 2 + 3 +4 +5, 
 }
std::cout << "Suma de los primeros "<<x<<" numeros: " << suma <<std::endl;
return 0;
}