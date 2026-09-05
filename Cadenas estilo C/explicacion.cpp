#include<iostream>
#include<cstring>

int main() {

    /*
    
    Las cadenas de estilo C se crean con el tipo char en lugar de string. Terminan con un caracter especial
    llamado caracter nulo ('\0')   
    Este caracter marca el final de la cadena. Las cadenas al estilo C se denominan "cadenas terminadas en nulo".

    La libreria para las cadenas estilos C es cstring

    */

    // Declaracion simple sin tamaño fijo
    //El compilador determina automáticamente el tamaño basándose en el inicializador (incluyendo el carácter nulo)
    char str1[] = "Hola";

    // Inicializacion explicita con caracteres
    char str2[6] = {'W', '5', '$', '1', 'p', '\0'}; // El caracter nulo se toma en cuenta en el tamano

    // Inicializacion parcial
    char str3[10] = "C++";

    // Para obtener la longitud de una cadena estilo C usamos la funcion strlen
    std::cout << "Longitud variable str1: " << strlen(str1) << std::endl;
    std::cout << "Longitud variable str2: " << strlen(str2) << std::endl;
    std::cout << "Longitud variable str3: " << strlen(str3) << std::endl;

    return 0;
} 