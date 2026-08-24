#include <iostream>
#include <string>

bool is_valid(std::string username, std::string password) {
    // Escribe tu código a continuación
        
    if (username == "user" && password == "qwerty") {

            return true;
    }
   
     else if (username == "admin") {
       
        return true;

    } else {

        return false;
        
    }


     
}
int main() {
    std::string user, pass;
    std::cin >> user;
    std::cin >> pass;
    bool res = is_valid(user, pass);
    std::cout << (res ? "true" : "false");
    return 0;
}