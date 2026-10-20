/*

    Diseñar un programa modular con funciones independientes encargadas de
    cálcular el área de al menos tres figuras geométricas mediante funciones que
    reciban valor y retornen un resultado.

*/

#include <math.h>
#include <stdio.h>

#define PI 3.14159f

float fAreaDeUnCirculo(float fRadio);
float fAreaDeUnTrapecio(float fBaseMayor, float fBaseMenor, float fAltura);
float fAreaDeUnCilindro(float fRadio, float fAltura);

int main(void) {

  float fRadio = 0;
  float fBaseMayor = 0;
  float fBaseMenor = 0;
  float fAltura = 0;
  float fAreaCirculo = 0;
  float fAreaCilindro = 0;
  float fAreaTrapecio = 0;
  int iFiguraGeometrica = 0;

  do {

    printf("===Calculadora de áreas geométricas===\n\n");

    printf(" (1) Circulo\n (2) Trapecio\n (3) Cilindro\n (4) Salir\n");

    printf(": ");
    scanf("%d", &iFiguraGeometrica);

    switch (iFiguraGeometrica) {

    case 1:

      printf("Digite el radio del circulo: ");
      scanf("%f", &fRadio);

      fAreaCirculo = fAreaDeUnCirculo(fRadio);
      printf("El área del circulo es: %.2f\n", fAreaCirculo);
      break;

    case 2:

      printf("Digite la base mayor: ");
      scanf("%f", &fBaseMayor);

      printf("Digite la base menor: ");
      scanf("%f", &fBaseMenor);

      printf("Digite la altura: ");
      scanf("%f", &fAltura);

      fAreaTrapecio = fAreaDeUnTrapecio(fBaseMayor, fBaseMenor, fAltura);
      printf("El área del trapecio es: %.2f\n", fAreaTrapecio);

      break;

    case 3:

      printf("Digite el radio: ");
      scanf("%f", &fRadio);

      printf("Digite la altura: ");
      scanf("%f", &fAltura);

      fAreaCilindro = fAreaDeUnCilindro(fRadio, fAltura);
      printf("El área del cilindro es: %.2f\n", fAreaCilindro);
      break;

    case 4:

      break;

    default:

      printf("Opción incorrecta.\n");
      break;
    }

  } while (iFiguraGeometrica != 4);

  return 0;
}

float fAreaDeUnCirculo(float fRadio) {

  float fResultado = PI * pow(fRadio, 2);

  return fResultado;
}

float fAreaDeUnTrapecio(float fBaseMayor, float fBaseMenor, float fAltura) {

  float fResultado = ((fBaseMayor + fBaseMenor) * fAltura) / 2;

  return fResultado;
}

float fAreaDeUnCilindro(float fRadio, float fAltura) {

  float fResultado = 2 * PI * fRadio * (fRadio + fAltura);

  return fResultado;
}