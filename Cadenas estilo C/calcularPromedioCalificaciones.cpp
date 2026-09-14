#include<iostream>

double calcularPromedioCal(int calificaciones[], int size){

    double suma = 0.0;

    for (int i = 0; i < size; i++) {
        suma += calificaciones[i];
    }

    double promedio = suma/size;

   return promedio;

}


int main(void) {

    int cantidadCalificaciones = 0;
    std::cout << "Introduzca cantidad de calificaciones: ";
        std::cin >> cantidadCalificaciones;

    int calificaciones[cantidadCalificaciones];
    
    for (int i = 0; i < cantidadCalificaciones; i++){ // Almacenar calificaciones en un array

        int val = 0;
        std::cout << "Inserte calificacion numero " << i << ": ";
             std::cin >> val;
        calificaciones[i] = val;

    } 

    double promedioCalificaciones = calcularPromedioCal(calificaciones, cantidadCalificaciones);
    std::cout << "Promedio: " << promedioCalificaciones << std::endl;

    return 0;
}