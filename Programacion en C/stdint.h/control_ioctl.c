/*

Este programa simula cómo un driver recibe comandos personalizados desde el
espacio de usuario usando un despachador switch. Este es el núcleo de cualquier
controlador de hardware moderno.

*/

#include <stdint.h>
#include <stdio.h>

// MASCARAS, esto son los códigos de comando:
#define IOCTL_MOTOR_ENCENDER 0xAAAA
#define IOCTL_MOTOR_APAGAR 0xBBBB
#define IOCTL_LEER_TEMPERATURA 0xCCCC

// Registro de hardware
uint8_t hardware_status = 0x00;
uint8_t hardware_temp = 45;

// Prototipo de función ioctl
int mi_driver_local(uint32_t command, void *arg);

int main(void) {

  printf("--- SIMULADOR DE SYSCALLS E IOCTL ---\n");

  int iStatusOperation = 0;

  // El usuario crea la variable en 0 porque desconoce la temperatura
  // Debe pasarle al driver la dirección de memoria de esa variable
  uint8_t temp_readed = 0x00;

  printf("[USER]: Enviando comando: ENCENDER MOTOR (0xAAAA).\n");
  iStatusOperation = mi_driver_local(IOCTL_MOTOR_ENCENDER, NULL);

  printf("[USER]: Enviando comando: LEER TEMPERATURA (0xCCCC).\n");
  iStatusOperation = mi_driver_local(IOCTL_LEER_TEMPERATURA, &temp_readed);

  printf("[USER]: La temperatura devuelta por el sensor es: %d\n", temp_readed);

  printf("[USER]: Enviando comando: APAGAR MOTOR (0xBBBB).\n");
  iStatusOperation = mi_driver_local(IOCTL_MOTOR_APAGAR, NULL);

  return 0;
}

int mi_driver_local(uint32_t command, void *arg) {

  switch (command) {

  case IOCTL_MOTOR_ENCENDER:

    hardware_status = 1;
    printf("[KERNEL]: Motor encendido.\n");
    return 1;

  case IOCTL_MOTOR_APAGAR:

    hardware_status = 0;

    printf("[KERNEL]: Motor apagado.\n");

    return 0;

  case IOCTL_LEER_TEMPERATURA:

    if (arg == NULL) {

      printf("[KERNEL]: Error: No se pudo leer la temperatura.\n");
      return -1;

    } else {

      uint8_t *arg_real = (uint8_t *)arg;

      // Desreferenciamos
      *arg_real = hardware_temp;

      printf("[KERNEL]: Temperatura copiada exitosamente a la memoria del "
             "usuario.\n");
    }
    return 0;

  default:

    printf("[KERNEL]: Error: comando desconocido\n");

    return -1;

    break;
  }

  return -1;
}