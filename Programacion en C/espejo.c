/*

Escribir un programa en C que lea una línea de texto desde la entrada estándar
(la terminal), haga tres operaciones utilizando punteros y arreglos, y muestre
los resultados formateados en pantalla.

*/

#include <stdio.h>

void vfInvertirCadena(char *cInicio, char *cFin);

int main(void) {

  char cCadenaTexto[100] = {0};
  char *pcCadenaTexto = cCadenaTexto;
  int iCantidadVocales = 0;
  int iCantidadConsonantes = 0;

  printf("Introduzca su frase: ");
  fgets(cCadenaTexto, sizeof(cCadenaTexto), stdin);

  // size_t se utiliza para definir una variable de tipo de dato sin signo
  // tambien llamado unsigned type en ingles (positivo)

  size_t sLongitud = strlen(cCadenaTexto);

  // Eliminar el salto de linea que fgets agrega al final '\n'
  // La función sizeof() devuelve el tamaño de un número en bytes, y podemos
  // usar el comando size_t para almacenar el valor devuelto por la función
  // sizeof()

  if (sLongitud > 0 && cCadenaTexto[sLongitud - 1] == '\n') {

    // Remplazar salto de linea por valor nulo
    cCadenaTexto[sLongitud - 1] == '\0';

    // Eliminamos una unidad a la variable que almacena la longitud porque ya no
    // tiene el salto de linea
    sLongitud--;
  }

  while (*pcCadenaTexto != '\0') {

    char cCadena = tolower(*pcCadenaTexto);

    // Verificar si es consonante
  }

  return 0;
}

void vfInvertirCadena(char *cInicio, char *cFin) {}