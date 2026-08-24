#include<iostream>
#include<cstdlib>
#include<string>

int main () {

    std::string textOne = "a";
    std::string textTwo = "b";
    std::string textThree = "c";

    std::cout << textTwo.compare(textOne) << std::endl;
    std::cout << textTwo.compare(textThree) << std::endl;
    std::cout << textTwo.compare(textTwo) << std::endl;

    return 0;
}