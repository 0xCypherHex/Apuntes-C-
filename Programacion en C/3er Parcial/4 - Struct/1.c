#include <stdio.h>
#include <string.h>

// Reemplaza cada funcion por lo que este a la izquierda
typedef unsigned long long lld;

// Reemplaza cada funcion por lo que este a la izquierda
typedef struct strDate Date;


struct strDate {
    unsigned short day, month, year;
    char monthName[11];
} date1, date2; // Podemos declarar variables de tipo struct strDate al mismo tiempo que la estructura

void printDate(struct strDate date){
    printf("%d, %d, %d, %s\n", date.day, date.month, date.year, date.monthName);
}

typedef struct strTime {
    unsigned short hours,minutes,seconds;
} Time;

int main(){

    lld numerote =10291241;
    printf("%lld", numerote);

    date1.day = 15;
    date1.month = 9;
    printDate(date1);
    printDate(date2);

    struct strDate today;
    printf("%d\n",sizeof(today));
    today.day = 30;
    today.month = 4;
    today.year = 2026;
    strcpy(today.monthName, "Abril"); 
    printf("%d %d %d %s\n", today.day,today.month,today.year,today.monthName);

    struct strDate xmas = {25,12,2025,"Diciembre"};
    printDate(xmas);

    today = xmas;    // Las estructuras si las podemos asignar, se copian otdos los datos de una a la otra
    printDate(today);
    

    return 0;
}