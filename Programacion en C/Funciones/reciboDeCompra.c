#include <stdio.h>

// Imprimir el logo de la tienda
void vLogoDeLaTienda(void) {

  printf("█████ ███ █████ █   █ ████   ███      ███  ████   ███  ████  ████   "
         "███  █████ █████  ████ \n"
         "  █    █  █     ██  █ █   █ █   █    █   █ █   █ █   █ █   █ █   █ █ "
         "  █   █   █     █     \n"
         "  █    █  ████  █ █ █ █   █ █████    █████ ████  █████ ████  ████  █ "
         "  █   █   ████   ███  \n"
         "  █    █  █     █  ██ █   █ █   █    █   █ █   █ █   █ █  █  █  █  █ "
         "  █   █   █         █ \n"
         "  █   ███ █████ █   █ ████  █   █    █   █ ████  █   █ █   █ █   █  "
         "███    █   █████ ████  \n\n\n");

  printf("TELEFONO: 4234123142\n");
  printf("Abarrotes Doña Mary S.A. De C.V.\n");
  printf("RFC: asofnd23iuq90392\n\n\n");
}

// Imprimir agradecimientos y politica de devoluciones
void vPoliticaDevoluciones(void) {

  printf(
      "Tiene 7 dias para hacer cualquier reclamación portando su ticket. \n");
  printf("Correo: tiendadoñamary666@gmail.com\n");
  printf("Gracias por comprar \n");
}

int main(void) {

  vLogoDeLaTienda();

  printf("Productos: \n");
  printf("IVA: \n");
  printf("Precio total: \n\n\n");

  vPoliticaDevoluciones();

  return 0;
}
