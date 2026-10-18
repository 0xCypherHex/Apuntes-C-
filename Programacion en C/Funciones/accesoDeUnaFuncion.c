/*
Cuando accedemos a una función, el compilador aplica reglas estrictas sobre qué
datos se pueden leer o modificar:

    Variables Locales: Son variables declaradas dentro de una función.

    Vida y alcance: Nacen cuando se accede a la función (se crea su marco en
    el Stack) y mueren automáticamente cuando la función termina (el marco
    se destruye). No pueden ser leídas ni modificadas desde fuera de esa
función.

    Variables Globales: Declaradas fuera de cualquier función (habitualmente
    arriba del programa).

    Vida y alcance: Viven durante toda la ejecución del programa y son
    accesibles por cualquier función.

    ⚠️ Regla de Oro / Buenas Prácticas: El uso de variables globales se
    considera mala práctica en la programación estructurada si no es
    estrictamente necesario, ya que cualquier función puede alterar su valor de
    forma no controlada, dificultando la depuración del código.
*/

#include <stdio.h>

/* Variable global (prefijo g_). Reservada en la memoria estatica */
int g_iContadorLlamadas = 0;

void vFuncionB(void) {
  /* Variable local a vFuncionB */
  int iNumeroLocal = 20;

  g_iContadorLlamadas++;
  printf("-> Dentro de vFuncionB: iNumeroLocal = %d\n", iNumeroLocal);
}

void vFuncionA(void) {
  /* Variable local a vFuncionA */
  int iNumeroLocal = 10;

  g_iContadorLlamadas++;
  printf("-> Dentro de vFuncionA: iNumeroLocal = %d\n", iNumeroLocal);

  /* Acceso en cascada a otra funcion */
  vFuncionB();
}

int main(void) {
  printf("Inicio del programa principal.\n");

  /* Invocacion/Acceso a vFuncionA */
  vFuncionA();

  printf("Total de accesos a funciones: %d\n", g_iContadorLlamadas);

  return 0;
}