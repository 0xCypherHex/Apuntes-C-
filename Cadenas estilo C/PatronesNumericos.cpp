#include<iostream>
#include<string>

int main() {

    /*
    Crear cadenas con caracteres repetidos
    */

    int n = 0;
    std::cout << "Insert: ";
        std::cin >> n;
    
      for(int i=0; i < n; i++) {

        int cantidad = 2 * i + 1;
        std::string str(cantidad, '*');
        std::cout << str << std::endl;
        
    }



    return 0;
}