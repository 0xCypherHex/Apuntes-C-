/*
Los arrays no se pueden pasar directamente a una función,
pero se puede pasar un puntero al primer elemento del array.
Cuando intentas pasar un array a una funcion,
este decae en un puntero a su primer elemento. 
Por lo tanto, la función recibe un puntero al primer elemento del array y no una copia del array completo.
Esto significa que cualquier cambio realizado en el array dentro de la función afectará al array original fuera de la función.

int numbers[5] = {1, 2, 3, 4, 5};
void processArray(int arr[]) {
    int size = std::size(arr);  // int size no te dara el tamaño del array, es en realidad un puntero aqui.
}

Esta es la razón por la que, al pasar arreglos a funciones,
 normalmente necesitamos pasar el tamaño como un parámetro separado:

 void processArray(int arr[], int size) {
    // Ahora podemos trabajar de forma segura con el arreglo utilizando el parámetro de tamaño
}

Así es como se llama a la funcion:

int numbers[5] = {1, 2, 3, 4, 5};
processArray(numbers, 5);

No se puede devolver un array en una funcion.

int[] processArray(int arr[]) {
    return arr;
}

En su lugar debes usar la sintaxis * para devolver un puntero al primer elemento del array:

int* processArray(int arr[]) {
    return arr;
}
int* newArr = processArray(arr);


*/


