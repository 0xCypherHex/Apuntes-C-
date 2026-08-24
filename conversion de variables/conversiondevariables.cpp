#include<iostream>
#include<cstdlib>
#include<string>

int main () {

    std::string nameUser="vacio";
    double creditoBruto=0;
    float pi = 3.1415f;

    std::cout << "Nombre de usuario: "; 
        std::cin >> nameUser;
    
    std::cout << "inserte dolaramas: ";
    std::cin >> creditoBruto;

    int credito = (int) creditoBruto; // conversion de double a int
    float dinerillo = credito/pi;

    std::cout << "Cliente: " << nameUser << std::endl;
    std::cout << "pesos en cuenta: " << dinerillo << std::endl;
    
    std::cout << "Conversion de numeros a cadenas y visceversa \n" << std::endl;





    int number= 789;
    bool isValid = true;
    std::string text1 = std::to_string(number); // conversion de un entero a cadena string
        std::cout << text1 << std::endl;

    std::string text2 = isValid ? "true" : "false";



     /* Al convertire un double a una cadena usando to_string(),
         por defecto se muestra 6 decimales aunque el numero original no los tenga
     */

    double numberOne = 786.0;
    std::cout << "double: " << numberOne << std::endl;
    std::string textNumberOne = std::to_string(numberOne);
    // textNumberOne es la nueva variable
    std::cout << "string of double 786.0: " << textNumberOne << std::endl;

    double numberTwo = 787.3;
    std::cout << "double: " << numberTwo << std::endl;
    std::string textNumberTwo = std::to_string(numberTwo);
    // textNumberTwo es la nueva variable
    std::cout << "string of double 787.3: " << textNumberTwo << std::endl;

    double numberThree = 789.9432;
    std::cout << "double: " << numberThree << std::endl;
    std::string textNumberThree = std::to_string(numberThree);
    // textNumberThree es la nueva variable
    std::cout << "string of double 789.9432: " << textNumberThree << std::endl;


    
    // Conversion de cadenas a un tipo diferente 
    
    // String to Integer

    std::string numberToText = "456";
    int number_456 = stoi(numberToText);
    
    // String to Double
    std::string decimalToText = "456.789";
    double decimal_456 = stod(decimalToText);

    


    return 0;
}