/*

Un prototipo (también llamado declaración de la función o firma) es una línea de
código que le informa al compilador sobre la existencia de una función antes de
que sea utilizada o definida completamente.

    Contiene únicamente tres cosas:

 1-.   El tipo de retorno.

 2-.   El nombre de la función.

 3-.   El tipo y número de parámetros que acepta (terminando con un punto y coma
;).

    tipo_retorno NombreFuncion(tipo1 param1, tipo2 param2);

    ¿Por qué es necesario? (El compilador y la memoria)

    El compilador de C procesa el código fuente de arriba hacia abajo (de forma
    secuencial y lineal en una sola pasada).

    Sin prototipo: Si colocas la definición completa de la función debajo del
    main() e intentas llamarla desde main(), el compilador dirá: "¡Epa! No
    conozco esta función, no sé cuántos argumentos recibe ni qué devuelve",
    provocando un error de declaración implícita o tipos incompatibles.

    Con prototipo: Colocamos las declaraciones (prototipos) al inicio del
    archivo (arriba de main()) y definimos el cuerpo completo de las funciones
    abajo de main().

    EL compilador debe leer primero las funciones que se ejecutan sin invocar a
otras.

*/

#include <stdio.h>

/* =======================================================
 * 1. PROTOTIPOS DE FUNCIONES (Declaracion)
 * ======================================================= */
void vMostrarMensajeBienvenida(void);
void vMostrarMensajeDespedida(void);

/* =======================================================
 * 2. FUNCION PRINCIPAL (Controlador principal)
 * ======================================================= */
int main(void) {
  /* El compilador ya conoce los prototipos, por lo que aprueba estas llamadas
   */
  vMostrarMensajeBienvenida();

  printf("Procesando tareas en el main...\n");

  vMostrarMensajeDespedida();

  return 0;
}

/* =======================================================
 * 3. DEFINICION DE FUNCIONES (Cuerpo e implementacion)
 * ======================================================= */

/*
 * Funcion: vMostrarMensajeBienvenida
 * Proposito: Saluda al usuario.
 */
void vMostrarMensajeBienvenida(void) {
  printf("========================================\n");
  printf("   ¡Bienvenido al Sistema de Aprendizaje!\n");
  printf("========================================\n");
}

/*
 * Funcion: vMostrarMensajeDespedida
 * Proposito: Despide al usuario al finalizar.
 */
void vMostrarMensajeDespedida(void) {
  printf("========================================\n");
  printf("   Programa finalizado. ¡Hasta pronto!\n");
  printf("========================================\n");
}