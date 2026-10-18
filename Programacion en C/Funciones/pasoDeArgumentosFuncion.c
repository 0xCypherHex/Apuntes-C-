/*

En C existend dos mecanismos para pasar argumentos a una funcion

    1-. Paso por valor (Pass by Value) :

    ¿Cómo funciona?: C toma una copia exacta del valor que le envías y la coloca
    dentro de una nueva variable en el marco de memoria (Stack Frame) de la
    función llamada.

    Efecto en Memoria: Cualquier modificación que sufra ese parámetro dentro de
    la función NO afecta a la variable original en main(), ya que trabajas sobre
    una copia local que se destruye al terminar la función.

    2-. Paso por direccion usando punteros (Pass by reference) :

    ¿Cómo funciona?: En lugar de enviar una copia del valor, le pasamos a la
    función la dirección de memoria física (usando el operador &) donde vive la
    variable original.

    Efecto en Memoria: La función recibe un puntero (usando el operador *) que
    apunta directamente a la celda de la variable original. Cualquier cambio
    realizado mediante el puntero modificará directamente la memoria en main().
*/

#include <stdio.h>

/* Prototipos de funciones */
float fCalcularAreaTriangulo(float fBase, float fAltura);
void vDuplicarPorValor(int iNumero);
void vDuplicarPorDireccion(int *piNumero);

int main(void) {
  float fBaseTriangulo = 10.0f;
  float fAlturaTriangulo = 5.0f;
  float fAreaCalculada = 0.0f;
  int iValor = 20;

  /* 1. Uso de retorno de valor */
  fAreaCalculada = fCalcularAreaTriangulo(fBaseTriangulo, fAlturaTriangulo);
  printf("El area del triangulo es: %.2f\n", fAreaCalculada);

  /* 2. Demostración de Paso por Valor */
  printf("\n--- PASO POR VALOR ---\n");
  printf("Valor en main antes: %d\n", iValor);
  vDuplicarPorValor(iValor);
  printf("Valor en main despues: %d (¡No cambio!)\n", iValor);

  /* 3. Demostración de Paso por Dirección (Puntero) */
  printf("\n--- PASO POR DIRECCION ---\n");
  printf("Valor en main antes: %d\n", iValor);
  vDuplicarPorDireccion(&iValor); /* Enviamos la direccion con & */
  printf("Valor en main despues: %d (¡Si cambio en la RAM!)\n", iValor);

  return 0;
}

/* Devuelve un float calculado a partir de parametros recibidos por valor */
float fCalcularAreaTriangulo(float fBase, float fAltura) {
  float fResultado = 0.0f;
  fResultado = (fBase * fAltura) / 2.0f;
  return fResultado;
}

/* Modifica unicamente su copia local */
void vDuplicarPorValor(int iNumero) {
  iNumero = iNumero * 2;
  printf("  [Dentro de vDuplicarPorValor]: iNumero = %d\n", iNumero);
}

/* Modifica la memoria original desreferenciando el puntero con * */
void vDuplicarPorDireccion(int *piNumero) {
  *piNumero = (*piNumero) * 2;
  printf("  [Dentro de vDuplicarPorDireccion]: *piNumero = %d\n", *piNumero);
}