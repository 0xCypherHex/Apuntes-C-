#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cadena_numeros1[n + 1];

    for(int i = 0; i <= n; i++){
        cadena_numeros1[i] = 0;
    }

    for(int i = 0; i < n; i++){
        int numero;
        scanf("%d", &numero);

        if(numero >= 1 && numero <= n){
            cadena_numeros1[numero] = 1;
        }
    }

    int output = 0;

    for(int i = 1; i <= n; i++){
        if(cadena_numeros1[i] == 0){
            output++;
        }
    }

    printf("%d", output);

    return 0;
}