/*

Cuando anidas una estructura dentro de otra, el compilador reserva memoria
contigua para la estructura interna directamente dentro del espacio reservado
para la estructura externa. No son punteros ni direcciones independientes: la
subestructura habita dentro del mismo bloque de la pila (Stack).

Estructura en Memoria (struct StAlumno stEstudiante):
+-------------------+----------------------+-----------------------------------+--------------------+
| iMatricula (4B)   | szNombre (50B)       | stNacimiento (struct StFecha 12B) |
fPromedio (4B)     | |                   |                      | [ iDia | iMes
| iAnio ]           |                    |
+-------------------+----------------------+-----------------------------------+--------------------+
 0x7FFF00            0x7FFF04               0x7FFF36 0x7FFF42


Para acceder a un campo situado dentro de una subestructura, encadenamos el
operador punto (.) navegando desde el objeto exterior hasta el campo más
profundo:

variable_externa.miembro_anidado.campo_final

*/

#include <stdio.h>
#include <string.h>

/* 1. Plantilla de la estructura interna (debe definirse PRIMERO) */
struct StFecha {
  int iDia;
  int iMes;
  int iAnio;
};

/* 2. Plantilla de la estructura externa que anida a StFecha */
struct StAlumno {
  int iMatricula;
  char szNombre[50];
  struct StFecha stNacimiento; /* Estructura anidada */
  float fPromedio;
};

int main(void) {
  /* Declaración de la variable de tipo estructura externa */
  struct StAlumno stEstudiante;

  /* Asignación de valores a miembros simples */
  stEstudiante.iMatricula = 12045;
  strcpy(stEstudiante.szNombre, "Carlos Mendoza");
  stEstudiante.fPromedio = 92.4f;

  /* Asignación de valores encadenados a la subestructura anidada */
  stEstudiante.stNacimiento.iDia = 15;
  stEstudiante.stNacimiento.iMes = 8;
  stEstudiante.stNacimiento.iAnio = 2002;

  /* Impresión de datos */
  printf("Matricula: %d\n", stEstudiante.iMatricula);
  printf("Nombre: %s\n", stEstudiante.szNombre);
  printf("Fecha de Nacimiento: %02d/%02d/%d\n", stEstudiante.stNacimiento.iDia,
         stEstudiante.stNacimiento.iMes, stEstudiante.stNacimiento.iAnio);
  printf("Promedio: %.1f\n", stEstudiante.fPromedio);

  return 0;
}