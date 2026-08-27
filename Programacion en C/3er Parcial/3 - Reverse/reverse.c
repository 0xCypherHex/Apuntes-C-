#include <stdio.h>
#include <string.h>

#define BUFFER 50 // El tamaño de las cadenas de texto de un arreglo (longitud maxima = 49)

void reverse(char string[]){
    int n = strlen(string);
    int i, aux;
    printf("%d\n",n);

    for(i = 0; i < n; i++){
        aux = string[i];
        string[i] = string[n - i -1];
        string[n -i- 1] = aux;

    }
}
void print_strings(char str_array[][BUFFER], int n){
    int i;
    for(int i = 0; i < n; i++){
        printf("%s\n", str_array[i]);
    }
}

int main(int argc,char *argv[]){
    printf("arg=%d\n", argc);
    int i;
    for (i = 0; i < argc; i++){
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;

}


int main(){
    setbuf(stdout, NULL);
    char string1[] = "Guadalajara";
    printf("%d\n", sizeof string1);
    reverse(string1);
    printf("%s\n",string1); // imprime arajaladauG

    // Quiero una nueva cadena de texto que contenga de inico lo mismo que una existente
    char string2[15];
    strcpy(string2,string1);

    reverse(string2);
    printf("%s\n",string2); // imprime arajaladauG

    strcpy(string1, "Tlajomulco de Zuniga");
    printf("%s\n",string1); // Tlajomulco de Zuniga
    printf("%s\n",string2); // de Zuniga

    strcpy(string1, "Huadalajara");
    strcpy(string2, "Guadalajara");

    printf("%p, %p\n", string1, string2);
    if(string1 == string2){
        printf("Son iguales\n");
    } else {
        printf("Son diferentes\n");
    }

    int res = strcmp(string1, string2);
    printf("%d\n", res);
    if (res == 0){
        printf("%s es igual que %s\n", string1, string2);
    } else if (res < 0){
        printf("%s es menor que %s\n", string1, string2);
    } else {
        printf("%s es mayor que %s\n", string1, string2);
    }


    // Arreglos de cadenas de texto
    char str_array[][BUFFER] = { "Guadalajara", "Zapopan", "Tlajomulco de Zuniga","Tonala", "Tlaquepaque" };
    int n = sizeof str_array / sizeof str_array[0];
    print_strings(str_array, n);
    str_array[2][0] = '\0';
    print_strings(str_array, n);
    return 0;


}