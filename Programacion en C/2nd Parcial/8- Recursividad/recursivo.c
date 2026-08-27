#include <stdio.h>
void printSeries(int n){
    
//  a)Caso Base
    if (n <= 0) return;

//  b)Algoritmo propio de la funcion (Se ejecuta en la ida)
    printf("%d ",n); 

//  a)Caso Induccion
    printSeries(n -1);

//  Post Recursion: Se ejecuta en el regreso de la recursion
//   printf("*%d ",n); 
}

void printSeries2(int n){
    printf("%d ",n);
    if (n > 0){
        printSeries2(n-1);
    } else {
        printf("\n");
    }

}
int main()
{
    setbuf(stdout,NULL);
    printSeries(10);
    printSeries2(30);

    return 0;
}