#include<iostream>
#include<cstring>
#include<string>

int main() {

    std::string str1 = "Hello";
    std::string str2 = "wordl!";



    // En C++ se puede concatenar cadenas utilizando + o += 
    std::string result = str1 + " " + str2;

    std::cout << result << std::endl;

    //  usando +=
    std::string str3 = "Good";
    str3 += " ";
    str3 += "luck!";

    std::cout << str3 << std::endl;


    return 0;
}