#include <stdio.h>

int main(void) {
    // Declaraciones e Instrucciones de Expresión
    int iPuntaje = 100; // Asignación inicial
    iPuntaje += 50;     // Modificación de valor

    // Instrucción Compuesta (Bloque)
    {
        int iBonoExtra = 20; // Variable de ámbito local al bloque
        iPuntaje += iBonoExtra;
    } // Fin del bloque

    // Instrucción Nula (usada raramente, pero válida)
    ; 

    printf("Puntaje Final: %d\n", iPuntaje);

    return 0; // Instrucción de retorno
}