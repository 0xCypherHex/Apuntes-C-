#include<iostream>
#include<cstdlib>

    // Creacion de variables mientra el programa esta en ejecucion

 /*
    La palabra clave new te permite asignar memoria para una variable en el heap durante la ejecución del programa.
    A diferencia de las variables regulares que se crean en el stack, la memoria asignada dinámicamente persiste 
    hasta que la liberes explícitamente.

    * Stack - la pila  (Memoria Automática):
      El stack es como tu escritorio de tu área de trabajo, es un espacio pequeño, súper rápido y muy organizado.
      Se llama "pila" porque funciona como una pila de platos: el último plato que pones encima es el primero que quitas.
      La variables regulares (ej. int edad=20 en una funcion) que creas normalmente, se pone en este escritorio.
      Cuando la funcion termina su trabajo, el programa "limpia el escritorio" automáticamente. La variable se destruye y
      la memorisa se libera sin que tú tengas que hacer nada.

    * Heap (Memoria Dinámica):
      El heap es como un almacén, es un espacio inmenso (casi toda la ram) pero desorganizado. Para guardar ahi algo tienes que pedir permiso
      al sistema operativo para que te asigne un lugar específico.
      La palabra clave new (ej. new jugador), le estas diciendo al sistema que necesitas un espacio en la gran bodega para guardar este objeto.
      A diferencia del stack que se limpia solo, la bodega (heap) no. Lo que metes ahí se queda para siempre ahí
      incluso si la función que la creó ya terminó. En c++ es tu responsabilidad usar el comando delete para deciler al sistema que ya no ocupas ese espacio.

 */

int main (void) {

    // En este ejemplo new int asigna memoria para almacenar un entero y devuelve un puntero a esa ubicacion de memoria.
    // Luego puedes usar el valor de desreferencia para asignar valores y acceder a la variable a signada dinámicamente al igual que cualquier otro puntero.

    int* ptr = new int; // Asigna memoria para un entero
    *ptr = 42; // Asigna un valor a la memoria reservada
    
    std::cout << "Ingrese un valor: ";
        std::cin >> *ptr;

    std::cout << "Direcion de memoria: " << ptr << std::endl;
    std::cout << "Valor del puntero: " << *ptr << std::endl;


    // La regla fundamental de gestión de memoria dinámica es sencilla: por cada new debe haber un delete correspondiente.

    delete ptr; // Liberamos la memoria

    

    // Regla de oro: Un puntero es una variable que sirve EXCLUSIVAMENTE para guardar direcciones de memoria, no valores normales (como un 42).

    return 0;
}