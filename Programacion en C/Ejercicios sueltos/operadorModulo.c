#include <stdio.h>

int main(void) {
    // Variables con Notación Húngara
    int iNumero = 14;
    int iResiduo = 0;
    int iPuntos = 10;

    // Operador módulo (%): obtiene el residuo de la división entera 14 / 3
    iResiduo = iNumero % 3; // 14 dividido entre 3 da 4, y sobran 2

    // Operador de asignación compuesta (iPuntos += 5 equivale a iPuntos = iPuntos + 5)
    iPuntos += 5; 

    printf("Residuo de 14 %% 3: %d\n", iResiduo);
    printf("Puntos acumulados: %d\n", iPuntos);

    return 0; // Finaliza la función principal
}