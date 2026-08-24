#include<iostream>

void sumaNumeros(){

    int sumaTotal=0;

    for (int i=0; i <= 1000; i++) {

        sumaTotal += i;

    }
    
    std::cout << sumaTotal << std::endl;

}

int main () {

    int n=0;
    std::cout << "ciclos: " ;
        std::cin >> n;
    
    for (int i=0; i<=n; i++) {
        sumaNumeros();
    }

    return 0;
}