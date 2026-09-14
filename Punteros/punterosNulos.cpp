#include<iostream>
#include<cstdlib>

/*
Cuando declaras un puntero, no apunta automáticamente a nada significativo.
Un puntero no inicializado contiene direcciones de memoria aleatorias,
lo que puede provocar errores graves si intentas usarlo.
Aquí es donde los punteros nulos se vuelven esenciales para una programación segura.

Un puntero NULL es un puntero que apunta explicitamente a nada.

La forma segura de inicializar un puntero null es utilizando la palabra clave nullptr, ya que nullptr tiene su
propio tipo de dato (llamado std::nullptr_t) y no es simplemente un numero entero. Esto evita errores de ambiguedad peligrosos
que solian ocurrir al pasar punteros nulos a funciones sobrecargadas que aceptaban tanto enteros como punteros.

La palabra clave nullptr indica que el puntero no apunta a ninguna ubicación de memoria válida.
Esto es mucho más seguro que dejar un puntero sin inicializar,
porque puedes comprobar si un puntero es null antes de intentar desreferenciarlo.

Antes de utilizar cualquier puntero es una buena practica verificar que no sea nulo mediante una condicion if

*/


int main(void) {


    int* ptr = nullptr; // Declaramos un puntero nulo

    if (ptr != nullptr){

        std::cout << "Es seguro usar el puntero aqui." << std::endl;

        int value = *ptr;

        
    }
    
    else {

        std::cout << "El puntero es nulo." << std::endl;

    }

    return 0;
}