// Crear el archivo interfaz_driver.c para simular cómo un módulo de kernel
// enlaza sus funciones de hardware con el sistema operativo.

// Así es como Linux define la interfaz para cualquier driver

#include <stdint.h>
#include <stdio.h>

struct file_operations {

  // Puntero a función que devuelve int y no recibe nada más
  int (*abrir_dispositivo)(void);

  // Puntero a función que recibe un buffer crudo y su tamaño
  int (*leer_dispositivo)(void *vBuffer, long unsigned iLongitud);

  // Puntero a función que recibe un buffer crudo para escribir
  int (*escribir_dispositivo)(void *buffer, long unsigned iLongitud);
};

// Prototipos de funciones que controlan el hardware
int driver_teclado_abrir(void);
int driver_teclado_leer(void *buffer, long unsigned ulLongitud);
int driver_teclado_escribir(void *buffer, long unsigned ulLongitud);

int main(void) {

  printf("------ Cargando modulo del kernel ------\n");

  // Direcciones de las funciones
  struct file_operations st_my_driver = {

      // Inicializadores designados de funciones (.)
      .abrir_dispositivo = driver_teclado_abrir,
      .leer_dispositivo = driver_teclado_leer,
      .escribir_dispositivo = driver_teclado_escribir,
  };

  printf("[HARDWARE]: Controlador registrado.\n");

  // Cuando el kernel llama a la funcion lo hace mediante
  // st_my_driver.abrir_dispositivo, no a driver_teclado_abrir

  st_my_driver.abrir_dispositivo();

  // Buffer para leer datos, almacena una direccion de memoria en crudo
  uint8_t buffer_receptor[4] = {0}; // 4 bytes

  st_my_driver.leer_dispositivo(buffer_receptor, sizeof(buffer_receptor));

  st_my_driver.escribir_dispositivo(buffer_receptor, sizeof(buffer_receptor));

  return 0;
}

int driver_teclado_abrir(void) {

  printf("[HARDWARE]: Dispositivo inizializado.\n");
  return 0;
}

int driver_teclado_leer(void *buffer, unsigned long ulLongitud) {

  // conversión de tipo de dato: aqui estamos CASTEANDO el puntero tipo void
  // ya que no se sabe que hay dentro por su naturaleza
  uint8_t *buff_real = (uint8_t *)buffer;

  buff_real[0] = 0x48; // H
  buff_real[1] = 0x4F; // O
  buff_real[2] = 0x4C; // L
  buff_real[3] = 0x41; // A

  return ulLongitud;
}

int driver_teclado_escribir(void *buffer, long unsigned ulLongitud) {

  uint8_t *buff_real = (uint8_t *)buffer;

  printf("[HARDWARE]: Escribiendo %lu bytes en el dispositivo...\n",
         ulLongitud);
  printf("[HARDWARE]: Datos recibidos: ");

  for (int i = 0; i < ulLongitud; i++) {

    printf("%c", buff_real[i]);
  }

  printf("\n");
  return ulLongitud;
}