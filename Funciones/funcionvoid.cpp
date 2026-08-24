#include<iostream>
#include<string>

/*
Una funcion void es una funcion que no devuelve ningun valor, esto significa
que la funcion realiza una tarea pero no produce un resultado que deba ser devuelto al llamador
las funciones void se utilizan cuando deseas imprimir una salida, modificar estados de objetos
o ejecutar una secuencia sin devolver un valor especifico.
*/

void printNTimes(std::string message, int n){

    for (int i=0; i<=n; ++i){
        std::cout << message << std::endl;
    }

}

int main() {

    std::string msg;
    int n;

    std::cout << "inserte texto: "; 
        std::getline(std::cin, msg);

    std::cout << "iteraciones: ";
        std::cin >> n;

        printNTimes(msg,n);

    
    return 0;
}