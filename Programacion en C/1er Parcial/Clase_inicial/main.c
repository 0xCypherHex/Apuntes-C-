//Ctrl + S: guardar archivos
//Ctrl + B: Compilar/Enlazar
//Ctrl + F11: Compilar y ejecutar
//Ctrl + Shift + 7: Comentar en una linea
// \n Enter para saltar de linea 
// %d para enteros
// %f para flotantes
// %c para caracteres
// %s para cadenas de caracteres (strings)
// [] numero para definir el tamaño de un arreglo
// Datos primitivos: char int float double

#include <stdio.h> // Incluye la librería estándar de entrada/salida

int main() {
    // Declaración de variables 
    char nombre[50]; // Un arreglo de caracteres para almacenar el nombre (hasta 49 caracteres + '\0')
    int numero_favorito; // Una variable entera para el número

    // 1. Imprimir "¡Hola, mundo!"
    printf("¡Hola, mundo!\n"); // '\n' es para un salto de línea

    // 1.1
    float estatura = 1.81;
    int edad = 19;

    printf("Mi estatura es %.2f metros y mi edad es %d años.\n", estatura, edad);

    printf("%d, %x, %o\n", edad, edad, edad); // Imprime en decimal, hexadecimal y octal

    // 2. Pedir al usuario que ingrese su nombre
    printf("Por favor, introduce tu nombre: ");
    scanf("%s", nombre); // Lee una cadena de caracteres (nombre)

    // 3. Pedir un número favorito
    printf("Ahora, dime tu número favorito: ");
    scanf("%d", &numero_favorito); // Lee un entero (el '&' es importante para pasar la dirección de memoria)

    // 4. Imprimir un saludo personalizado y el número
    printf("\n¡Hola, %s! Tu número favorito es %d.\n", nombre, numero_favorito);
    // %s para cadenas, %d para enteros

    return 0; // Indica que el programa terminó correctamente
}
