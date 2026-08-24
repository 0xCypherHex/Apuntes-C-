#include<iostream>
#include<string>

int main() {

    int n=0, index=0;
    std::string newElement;

    std::cout << "Cantidad de elementos: ";
        std::cin >> n;

        std::string arr[n];
    

    std::cout << "Posicion: ";
        std::cin >> index;
    
    std::cout << "Nuevo elemento: ";    
        std::getline(std::cin, newElement);

    

    for(int i=0; i<=n; i++) {

        std::cout << arr[i] << std::endl;

    }


    return 0;     
}