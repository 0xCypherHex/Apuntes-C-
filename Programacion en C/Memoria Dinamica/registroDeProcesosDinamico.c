/*

Simular una pequeña tabla de procesos del sistema operativo. Empezarás
reservando memoria dinámica para una cantidad inicial de procesos (por ejemplo,
2). Luego, mediante funciones que reciben punteros a struct, preguntarás al
usuario si desea agregar un proceso adicional, expandiendo el bloque de memoria
en el heap sin perder los datos anteriores.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StProcess {

  int iPID; // identificador de proceso
  char cNombreProceso[100];
  float fMemoriaMB;
};

void vfCapturarProceso(struct StProcess *psProc, int iIndice);
void vfImprimirTabla(struct StProcess *psTabla, int iTotal);

int main(void) {

  int iNumItems = 2;

  // Asignamos la memoria al array de estructuras
  struct StProcess *ipProcess = malloc(iNumItems * sizeof(struct StProcess));

  if (ipProcess == NULL) {

    printf("Error al asignar memoria.\n");
    return 1;
  }

  for (int iIndice = 0; iIndice < iNumItems; iIndice++) {

    vfCapturarProceso(&ipProcess[iIndice], iIndice);
  }

  int iValue = 1;
  char cChar[10] = {0};

  do {

    printf("Desea asignar otro proceso ? (s/n)");
    fgets(cChar, sizeof(cChar), stdin);
    cChar[strcspn(cChar, "\n")] = 0;

    if (*cChar == 's') {

      iNumItems += 1;

      // Reasignamos la memoria
      ipProcess = realloc(ipProcess, iNumItems * sizeof(struct StProcess));

      vfCapturarProceso(&ipProcess[iNumItems - 1], iNumItems - 1);

    } else if (*cChar == 'n') {

      iValue = 0;
    }

  } while (iValue ==
           1); // Eliminar caracter de nueva linea de fgets con strcspn

  // Imprimir tabla

  free(ipProcess);
  ipProcess = NULL;

  return 0;
}

void vfCapturarProceso(struct StProcess *psProc, int iIndice) {

  printf("Ingrese PID del proceso número %d: ", iIndice);
  scanf("%d", &psProc->iPID);

  getchar();

  printf("Ingrese nombre del proceso %d: ", psProc->iPID);
  fgets(psProc->cNombreProceso, sizeof(psProc->cNombreProceso), stdin);

  /*

 strcspn es una función de la biblioteca estándar de C que se utiliza para
 encontrar la longitud de la subcadena inicial en una cadena que no contiene
 ninguno de los caracteres especificados en otra cadena.

 La función strcspn toma dos argumentos:

 str1: La cadena en la que se busca.
 str2: La cadena que contiene los caracteres a buscar.

  */

  // Eliminar caracter de nueva linea de fgets con strcspn
  psProc->cNombreProceso[strcspn(psProc->cNombreProceso, "\n")] = 0;

  printf("Ingrese memoria que ocupa el proceso %d: ", psProc->iPID);
  scanf("%f", &psProc->fMemoriaMB);
  getchar();
}

void vfImprimirTabla(struct StProcess *psTabla, int iTotal) {

  float fSumaMemoria = 0.0f;

  printf("\n================ TABLA DE PROCESOS ================\n");
  printf("PID\t\tNOMBRE\t\tMEMORIA (MB)\n");
  printf("---------------------------------------------------\n");

  // TODO: Recorre desde 0 hasta iTotal.
  // Puedes usar un puntero auxiliar que avance con ++ y acceder con ->
  // Imprime cada proceso y acumula su memoria en fSumaMemoria.

  printf("---------------------------------------------------\n");
  printf("Total de procesos: %d | Memoria Total: %.2f MB\n", iTotal,
         fSumaMemoria);
}
