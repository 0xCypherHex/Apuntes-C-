
/*
    
    Algoritmo de busqueda secuencial (lineal)

    Buscar un dato en un arreglo consiste en determinar si un elemento
    específico (denominado clave o target) existe dentro de las posiciones
    reservadas en la memoria RAM y, de ser así, retornar la posición (índice)
    exacta donde se localiza.

    El método más intuitivo y directo es la Búsqueda Secuencial (o lineal):   

    * Mecánica en Memoria: El programa recorre el arreglo casilla por casilla,
      iniciando desde el índice 0 hasta la última posición válida N-1
    * Comparación: En cada paso, evalúa si el contenido actual del 
      casillero es igual (==) al valor buscado.
    * Criterio de Detención: Si encuentra una coincidencia, registra
      el índice y interrumpe el ciclo (usando break o una variable bandera) 
      para ahorrar iteraciones innecesarias en la CPU. Si termina de recorrer 
      todo el arreglo sin encontrarlo, se concluye que el dato no existe.

*/

// Ejemplo 

#include <stdio.h>

int main(void) {

    // Declaración e inicialización del arreglo de códigos
    int aiCodigosProductos[5] = {101, 204, 305, 408, 512};
    int iCodigoBuscado = 0;
    int iBanderaEncontrado = 0;  // 0: No encontrado, 1: Encontrado
    int iPosicionEncontrada = -1; // -1 indica ausencia en la memoria

    printf("Ingrese el codigo de producto a buscar: ");
    scanf("%d", &iCodigoBuscado);

    // Algoritmo de Búsqueda Secuencial
    for (int iIndex = 0; iIndex < 5; iIndex++) {

        // Comparación directa de contenido
        if (aiCodigosProductos[iIndex] == iCodigoBuscado) {

            iBanderaEncontrado = 1;
            iPosicionEncontrada = iIndex;

            break; // Salimos del bucle al encontrar la coincidencia
        }
    }

    // Evaluación del resultado
    if (iBanderaEncontrado == 1) {

        printf("Producto encontrado en la posicion (indice) %d de la RAM.\n", iPosicionEncontrada);
    }
    
    else {
       
        printf("El producto con codigo %d no existe en el sistema.\n", iCodigoBuscado);
    }

    return 0;
}