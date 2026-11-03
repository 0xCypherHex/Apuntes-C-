/*

El operador flecha (->) sirve para acceder a miembros de estructuras o uniones a
traves de punteros.

Se usa cuando un puntero apunta a una estructura o unión  en lugar de una
variable directa. Es una abreviatura para (*pointer).member, haciendo el código
más simple y legible.


*/

#include <stdio.h>

struct Student {
  int id;
};

int main() {

  struct Student s = {101};
  struct Student *ptr = &s;

  printf("%d\n", ptr->id);

  return 0;
}