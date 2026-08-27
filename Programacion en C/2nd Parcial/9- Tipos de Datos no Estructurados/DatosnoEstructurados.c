// En tipos de datos no estructurados se encuentran las:
// -Arreglos (Dinamico o estatico)
// -Estructuras 
// -Uniones
#include <stdio.h>
#define N 100
#define L  ('z' - 'a' + 1)

#define MIN (a,b) ((a) > (b))? (a):(b)
#define MAX (a,b) ((a) < (b))? (a):(b)

void Arreglo(){
// 1. Crea un arreglo a partir de sus datos iniciales.
    int array1[] = {1, 2, 3, 4, 5};
    double array2[] = {4.5, -2.7, 0};

// 2. Crear un arreglo a partir de su tamaño. 
    char array3[10];
    
    unsigned short array4[N];

// 3. Crear un arreglo a partir de su tamaño y algunos datos.
// A los espacios no llenados (N - 2) se les asigna un valor por defecto (0)
    float array5[N] = {3.14, 2.718};
    long long array6[250] = {};

// 4. A cada elemento del arreglo se accede (lectura/escritura) por el indice que comienza en 0
// Acceso para leer:
    printf("%d\n",array1[2]);
    double d = array2[0] + array2[1];
    printf("%.1f\n", d);
// Acceso para escribir:
    array3[0] = 'A';
    array4[0] = 20;

    printf("%c %d %d\n", array3[0],array3[1],array3[2]);
    printf("%u %u %u\n", array4[0],array4[1],array4[2]);
// No es warning porque se agrego 0 (default) a los elemntos no llenados del arreglo
    printf("%.2f %.2f %.2f", array5[0], array5[1], array5[2]);
    printf("%lld %lld %ldd\n", array6[0], array6[1], array6[2]);

}

void Ejercicio1(){

    printf("L = %d\n",L);

    char arreglo[L];
    int y;

    for (y = 0; y < L; y++){
        arreglo[y] = 'a' + y;
    }    

    for (y = 0; y < L; y++) {
        printf("%c", arreglo[y]);
    }
    printf("\n");
}



int main(){
    setbuf(stdout,NULL);
    Ejercicio2();
    

    return 0;

}