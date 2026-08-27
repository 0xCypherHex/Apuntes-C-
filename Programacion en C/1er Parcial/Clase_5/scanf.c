# include <stdio.h>

int main() {

    printf("Bienvenidos a la sesion 6\n");
    int edad;
    float estatura;

    printf("Cual es tu edad\n");
    scanf("%d",&edad);
    printf("El proximo año tendras %d años\n",edad + 1);

    printf("Cual es tu estatura (metros)?");
    scanf("%f", &estatura);
    printf("Tu estatura es %.2f mt\n", estatura);
    
    // Buffer de entrada estandar

    int a, b
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d, %d\n", a, b);

    //  
    char c1, c2
    scanf("%c",&c1);
    fflush(stdin); // Eliminar el <enter> que quedó remanente
    scanf("%c",&c2);
    printf("c1=%c %d\n", &x, &y);
    printf("<%d + %di>\n", x, y);
    
    //

    fflush(stdin);
    int x,y;
    printf("Escribe un número complejo en al forma x +yi");
    // 5 + 8i, 25+ 5i, -45 +65i
    
    // fflush(stdin) -> Vacía el bufer de entrada, elimina los posibles remanentes de la captura anterior
    

    
    return 0



}
    