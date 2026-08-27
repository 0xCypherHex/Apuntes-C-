#include <stdio.h>

void Ejercicio0() { 
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("The largest number is: %d\n", a);
    } else if (b > a && b > c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }
}

void Ejercicio1(){

    int Edad1, Edad2;

    printf("Dame ambas edades:\n");
    scanf("%d %d", &Edad1, &Edad2);

    
    if (Edad1 > Edad2 && Edad1 < 2*Edad2)
        printf("Es A mayor que B pero menor que su doble? SI\n");
    else
        printf("Es A mayor que B pero menor que su doble? NO\n");


    
    if (Edad2 != 0) {
        if (Edad1 % Edad2 == 0)
            printf("Es A multiplo de B? SI\n");
        else
            printf("Es A multiplo de B? NO\n");
    } else {
        printf("No se puede dividir entre 0\n");
    }


    
    if (Edad1 > 18 || Edad2 > 18)
        printf("Alguno de ellos es mayor de edad? SI\n");
    else
        printf("Alguno de ellos es mayor de edad? NO\n");
}

void Ejercicio2() {

    double C;
    int R;
    printf("Cual es tu calificacion [0.0--10.0]\n");
    scanf("%lf", &C);

    if (C <= 10 && C >= 0 )
        printf("La calificacion es correcta\n");
    else
        printf("La calificacion es incorrecta\n");

}

void Ejercicio3() {

    char C;
    int R;
    printf("Escribe un simbolo?\n");
    scanf("%c", &C);

    if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' ||
        C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
        printf("Es una vocal\n");
        else if (C >= 'A' && C <= 'Z')
            printf("Es una consonante mayuscula\n");
        else
            printf("Es una consonante minuscula\n");

}

int main() {

    setbuf(stdout, NULL); // Desactiva el buffering de salida
    Ejercicio3();   // ← AQUÍ cargas el ejercicio que quieres
    
    
    return 0;
}

