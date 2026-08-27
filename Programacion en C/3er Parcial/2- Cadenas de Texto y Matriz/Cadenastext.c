#include <stdio.h>
#include <string.h>
#include <ctype.h>

char nombre[10] = "JUAN";
char apellido[10] = "PEREZ";
char estado[20] = "Jalisco";

// Cuenta cuántas veces aparece un carácter en una cadena
int CuantasVecesHayEnCadena(char cadena[], char simbolo){
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0'){
        if(simbolo == cadena[i]){
            contador++;
        }
        i++;
    }
    return contador;
}

// Convierte una cadena a mayúsculas
void toUpperCase(char dest[], char src[]){
    int i = 0;

    while(src[i] != '\0'){
        dest[i] = toupper(src[i]);
        i++;
    }
    dest[i] = '\0'; // cerrar cadena
}

int main(){
    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Estado: %s\n", estado);

    // probar función contador
    int veces = CuantasVecesHayEnCadena(nombre, 'A');
    printf("La letra 'A' aparece %d veces en %s\n", veces, nombre);

    // probar mayúsculas
    char resultado[20];
    toUpperCase(resultado, estado);
    printf("Estado en mayúsculas: %s\n", resultado);

    return 0;
}