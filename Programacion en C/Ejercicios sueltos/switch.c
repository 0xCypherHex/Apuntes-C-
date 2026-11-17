#include <stdio.h>

int main(void) {
    int iOpcion = 0;

    printf("--- Menú Principal ---\n");
    printf("1. Consultar Saldo\n2. Depositar\n3. Retirar\nSeleccione una opción: ");
    scanf("%d", &iOpcion);

    switch (iOpcion) { // switch solo acepta int, char y enum
        case 1:
            printf("Su saldo actual es de $1,000.00\n");
            break;
        case 2:
            printf("Depósito realizado con éxito.\n");
            break;
        case 3:
            printf("Retiro procesado correctamente.\n");
            break;
        default:
            printf("Opción inválida. Intente de nuevo.\n");
            break;
    }

    return 0;
}