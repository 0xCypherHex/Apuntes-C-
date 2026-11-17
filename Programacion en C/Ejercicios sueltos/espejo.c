/*

Escribir un programa en C que lea una línea de texto desde la entrada estándar
(la terminal), haga tres operaciones utilizando punteros y arreglos, y muestre
los resultados formateados en pantalla.

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void vfInvertirCadena(char *pcCadenaTextoInicio, char *pcCadenaTextoFin);

int main(void) {

  char cCadenaTexto[100] = {0};
  char *pcCadenaTexto = cCadenaTexto;
  char *pcAux = cCadenaTexto;
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

    pcCadenaTexto[sLongitud - 1] = '\0';

    // Eliminamos una unidad a la variable que almacena la longitud porque ya no
    // tiene el salto de linea
    sLongitud--;
  }

  // Se detiene cuando llega al caracter nulo
  while (*pcAux != '\0') {

    char cCadena = tolower(*pcAux);

    // Verificar si es consonante
    if (cCadena >= 'a' && cCadena <= 'z') { // Esta linea sirve para que solo
                                            // verifique palabras del abecedario

      if (cCadena == 'a' || cCadena == 'e' || cCadena == 'i' ||
          cCadena == 'o' || cCadena == 'u') {

        iCantidadVocales++;

      } else {

        iCantidadConsonantes++;
      }
    }

    pcAux++;
  }

  printf("Texto original: %s\n", cCadenaTexto);
  printf("Cantidad de vocales: %d\n", iCantidadVocales);
  printf("Cantidad de consonantes: %d\n", iCantidadConsonantes);

  if (sLongitud > 0) {
    // Llamar a la función para invertir el texto
    vfInvertirCadena(pcCadenaTexto, pcCadenaTexto + sLongitud - 1);
    printf("Texto invertido: %s\n", pcCadenaTexto);
  } else {

    printf("Error no se ingreso nada.\n");
  }

  return 0;
}

void vfInvertirCadena(char *pcCadenaTextoInicio, char *pcCadenaTextoFin) {

  while (pcCadenaTextoInicio < pcCadenaTextoFin) {

    // Metodo de la burbuja

    char cAuxiliar = *pcCadenaTextoInicio;
    *pcCadenaTextoInicio = *pcCadenaTextoFin;
    *pcCadenaTextoFin = cAuxiliar;

    pcCadenaTextoInicio++;
    pcCadenaTextoFin--;
  }
}