/*
    Una funcion es una estructura de codigo a la que se le entrega datos de
    entrada para que realize una tarea especifica y no retorne un resultado

    En C, la estructura basica de una funcion consta de cuatro partes
    [Tipo de Retorno]  [Nombre_De_La_Funcion]  ( [Lista de Parámetros] )
  {
      // Cuerpo de la función: Instrucciones a ejecutar

      return [Valor de retorno]; // Opcional si el tipo de retorno es void
  }

   Tipo de retorno: Especifica qué tipo de dato devolverá la función al lugar
   desde donde fue llamada (int, float, char, etc.). Si la función no devuelve
   nada, usamos la palabra reservada void.

   Lista de parámetros: Las variables de entrada que la función necesita para
   trabajar. Si no requiere entradas, se deja vacío o se escribe void.

   Cuerpo de la función y return: El bloque de código encerrado entre llaves {
  }. Si la función promete devolver un tipo de dato (por ejemplo int), debe
  incluir la sentencia return acompañada de un valor de ese tipo.

*/

// Ejemplo

#include <stdio.h>

/*
 * Función: fCalcularAreaRectangulo
 * Propósito: Recibe la base y la altura de un rectángulo y retorna su área.
 * Parámetros:
 *   - fBase: Ancho del rectángulo (float)
 *   - fAltura: Alto del rectángulo (float)
 * Retorno:
 *   - Área calculada (float)
 */
float fCalcularAreaRectangulo(float fBase, float fAltura) {
  // Variable local para almacenar el resultado intermedio
  float fArea = 0.0f;

  // Cálculo matemático del área
  fArea = fBase * fAltura;

  // Devolvemos el valor calculado al invocador
  return fArea;
}

int main(void) {
  // Declaración de variables locales usando Notación Húngara
  float fBaseUsuario = 0.0f;
  float fAlturaUsuario = 0.0f;
  float fResultadoArea = 0.0f;

  printf("=== CALCULO DE AREA DE RECTANGULO ===\n");
  printf("Ingrese la base: ");
  scanf("%f", &fBaseUsuario);

  printf("Ingrese la altura: ");
  scanf("%f", &fAlturaUsuario);

  // Llamada o invocación a la función pasándole las variables de entrada
  fResultadoArea = fCalcularAreaRectangulo(fBaseUsuario, fAlturaUsuario);

  // Impresión del resultado retornado por la función
  printf("\nEl area calculada es: %.2f\n", fResultadoArea);

  return 0;
}