#include<iostream>
#include<string>

void stringSearchOperations(std::string str){

      // Encontrar el primer espacio
    int findFirstSpace = str.find(" ");
    std::cout << "Space Found At: " << findFirstSpace << std::endl;

    // Borrar 4 caracteres desde la posición 5
    str.erase(5, 4);
    std::cout << "After Erase: " << str << std::endl;


    // Comprobar si contiene "You"
    if (str.find("You") != std::string::npos){ // npos significa que la cadena no fue encontrada
        std::cout << "Contains You: Found" << std::endl;
    }   else {
            std::cout << "Contains You: Not Found" << std::endl;
    }

    // Limpiar la cadena y comprobar si está vacía
    str.clear();
    bool isEmpty = str.empty();
    if (isEmpty == true){
        std::cout << "Is Empty: true" << std::endl;
    }

}

int main() {

    std::string str = "You may choose whatever you like";

    stringSearchOperations(str);

    return 0;
}