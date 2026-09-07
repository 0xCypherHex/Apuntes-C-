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

        int mn = 1;
        std::string str(mn, '*');
        std::cout << str << std::endl;
        mn += 1;
    }



    return 0;
}