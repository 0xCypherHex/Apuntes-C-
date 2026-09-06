#include<iostream>
#include<cstring>

int main() {

    // (5 letras + \0)
  
    char str1[6] = "Hello";

    // Espacio extra 10 - 6 = 4
  
    char str2[10] = "Hello";

    // Imprimir caracteres individuales

    char first = str1[0];
    char second = str1[1];
    char third = str1[2];
    char four = str1[3];
    char five = str1[4];
    char six = str1[5];

    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    std::cout << four << std::endl;
    std::cout << five << std::endl;
    std::cout << six << std::endl;


    return 0;
}
