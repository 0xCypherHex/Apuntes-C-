/*

 Este programa consolida el uso de prototipos y funciones

*/

#include <stdio.h>

void vMostrarViajeNuevaZelanda(void);
void vMostrarViajeCamboya(void);
void vMostrarViajeNairobi(void);

int main(void) {

  int iColorBolita = 0;

  do {

    printf("Viaje sorpresa \n");
    printf("Bolita amarilla \n");
    printf("Bolita roja \n");
    printf("Bolita verde \n");
    printf("Salir 0\n");

    scanf("%d", &iColorBolita);

    switch (iColorBolita) {

    case 1:
      vMostrarViajeNuevaZelanda();
      break;

    case 2:
      vMostrarViajeCamboya();
      break;

    case 3:
      vMostrarViajeNairobi();
      break;

    default:
      printf("Opción incorrecta\n\n");
      break;
    }

  } while (iColorBolita != 0);

  return 0;
}

void vMostrarViajeNuevaZelanda(void) { printf("Viaje a Nueva Zelanda\n"); }

void vMostrarViajeCamboya(void) { printf("Viaje Camboya\n"); }

void vMostrarViajeNairobi(void) { printf("Viaje a Nairobi\n"); }