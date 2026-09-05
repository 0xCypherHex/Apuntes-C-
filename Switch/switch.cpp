#include <cstdlib>
#include <iostream>
#include <string>

int main () {

    int number = 0;
    std::string city;

    std::cout << "Ingrese el número que le tocó: ";
        std::cin >> number;

    switch (number) {
        case 1: city = "Bucarest"; // Rumania
            break;
        case 2: city = "Minsk"; // Bielorrusia
            break;
        case 3: city = "Medellín"; // Colombia
            break;
        case 4: city = "Moscú"; // Rusia
            break;
        case 5: city = "Vilna"; // Lituania
            break;
        case 6: city = "Riga"; // Letonia
            break;
        case 7: city = "El cairo"; // Egipto
            break;
        case 8: city = "Nairobi"; // Kenia
            break;
        case 9: city = "Mombasa"; // Kenia
            break;
        case 10: city = "Belgrado"; // Serbia
            break;
        
        default:  std::cout << "Error" << std::endl;
        
    }

    std::cout << "Usted viajara a: " << city << std::endl;

    return 0;

}