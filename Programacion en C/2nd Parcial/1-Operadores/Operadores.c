#include <stdio.h>

void Ejercicio1() { 
    // Calcular el valor abosluto de un numero entero dado con un operador ternario:
// Si n es positivo, abs(n) = n, si n es negativo, abs(n) = -1 = -1 x n
// Si n = 50, abs(50) = 50, si n es -50, abs(-50) = 50

    int n = -50;
    int a = n >= 0? n : -1 * n;

    printf("El valor absoluto de %d es %d\n", n, a);
}

void Ejercicio2() {
    
    float calif = 8.5;
    scanf("%f", &calif);

    char letra = calif >= 8 && calif <= 10? 'A' : calif >= 6 && calif < 8 ? 'B' : calif >= 0 && calif < 6? 'C' : 'X';
    printf("%c\n", letra);


}

void printMoney(float amount) {
    if (amount < 0.0f) {
        printf("-$%.2f\n", -amount);
    } else {
        printf("$%.2f\n", amount);
    }
}

void Ejercicio1() { 
    
    printMoney(45000.0f);
    float comisiones = 6312.5f;
    float impuestos = -16356.75f;
    printMoney(comisiones);
    printMoney(impuestos);
}

int main() {

    setbuf(stdout, NULL); // Desactiva el buffering de salida
    Ejercicio1();   // ← AQUÍ cargas el ejercicio que quieres
//  Operadores Unarios: ++, --, !, sizeof, &, *, +, -, ~
//  Operadores Binarios: +, -, *, /, %, &&, ||, ==, !=, >, <, >=, <=, &, |, ^, +=, -=, *=, /=, %=, &=, |=, ^=, <<, >>, <<=, >>=
//  Operador Ternario: x ? y:z    
//  variable = expresion_logica? valor 1 : valor 2
//  variable puede ser igual a | valor 1 ó valor 2

//  If/else simple con asignacion:
//  char status; // "A" = Aprobado, "R" = Reprobado
//    float promedio = 6.1;

//   if (promedio >= 6.0) {
//      status = "A";
//   }  else {
//      status = "R";
//   }

//    printf("status: %c\n", status);

//  Programa equivalente con operador ternario:
//    char status = promedio >= 6.0? "A" : "R";

//    printf("status: %c\n", status);


}
