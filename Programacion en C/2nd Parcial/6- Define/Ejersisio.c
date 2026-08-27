#include <stdio.h>

void Ejercicio1(){
    
    float monto_inversion, tasa_inicial, tasa_final, r, a;
    int aros_inversion, y;

    printf("Dame el monto a invertir:\n");
    scanf("%f",&monto_inversion);
    printf("Años de la inversion:\n");
    scanf("%d",&aros_inversion);
    printf("Dame la tasa inicial:\n");
    scanf("%f",&tasa_inicial);
    printf("Dame la tasa final:\n");
    scanf("%f",&tasa_final);

    for (r = tasa_inicial; r <= tasa_final; r += 0.05){
        printf("Tasa: %.1f%%\n", r);
        a = monto_inversion;
        for(y = 1; y <= aros_inversion; y++){
            a *= (1 + r / 100);
            printf("Año%d, monto = $%.2f\n", y, a);
        }
    }   
}

void define(){
    #define sumar(a,b,c) ((a) + (b) + (c))

    int s = 3 * sumar(10,20, 40 -10 );
    printf("s= %d",s);
}

void EjercicioMacrosCelcius(){
    #define Celcius(a,b) ((a) - 32) * 5/9 
    #define Max(a,b) ((a) > (b) ? (a): (b))

    printf("Dame un numero: ");
}


int main() {
    setbuf(stdout, NULL);
    EjercicioMacrosCelcius();

   
    return 0;
}
