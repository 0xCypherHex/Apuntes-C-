/*

Este programa debe simular un sistema bancario que permita realizar una
transferencia de saldo entre dos cuentas bancarias representadas mediante
variables de tipo estructura.

*/

#include <stdio.h>
#include <string.h>

struct StCuentaBancaria {

  int iNumeroDeCuenta;
  char szTitular[50];
  float fSaldoDisponible;
};

int main(void) {

  struct StCuentaBancaria stCuentaOrigen;
  struct StCuentaBancaria stCuentaDestino;
  float fMontoTransferir = 0;

  printf("Ingrese número de cuenta: ");
  scanf("%d", &stCuentaOrigen.iNumeroDeCuenta);

  if (stCuentaOrigen.iNumeroDeCuenta == 7593) {
    strcpy(stCuentaOrigen.szTitular, "Valeria Ramirez Buenrostro");
    stCuentaOrigen.fSaldoDisponible = 5000.74;
  } else if (stCuentaOrigen.iNumeroDeCuenta == 8584) {
    strcpy(stCuentaOrigen.szTitular, "Lenei Gruner Iceglass");
    stCuentaOrigen.fSaldoDisponible = 2053075.54;
  } else if (stCuentaOrigen.iNumeroDeCuenta == 6358) {
    strcpy(stCuentaOrigen.szTitular, "Diana Godoy Madrigal");
    stCuentaOrigen.fSaldoDisponible = 500000.00;
  } else {

    printf("Número de cuenta no encontrado.\n");
    return 1;
  }

  getchar();

  printf("Monto a transferir: ");
  scanf("%f", &fMontoTransferir);

  if (stCuentaOrigen.fSaldoDisponible < fMontoTransferir) {

    printf("Saldo insuficiente.\n");
    return 1;
  }

  printf("Ingrese número de cuenta destino: ");
  scanf("%d", &stCuentaDestino.iNumeroDeCuenta);

  if (stCuentaDestino.iNumeroDeCuenta == 7593) {
    strcpy(stCuentaDestino.szTitular, "Valeria Ramirez Buenrostro");
    stCuentaDestino.fSaldoDisponible = 5000.74;
  } else if (stCuentaDestino.iNumeroDeCuenta == 8584) {
    strcpy(stCuentaDestino.szTitular, "Lenei Gruner Iceglass");
    stCuentaDestino.fSaldoDisponible = 2053075.54;
  } else if (stCuentaDestino.iNumeroDeCuenta == 6358) {
    strcpy(stCuentaDestino.szTitular, "Diana Godoy Madrigal");
    stCuentaDestino.fSaldoDisponible = 500000.00;
  } else if (stCuentaDestino.iNumeroDeCuenta ==
             stCuentaOrigen.iNumeroDeCuenta) {

    printf("Error");
    return 1;
  } else {

    printf("Número de cuenta no encontrado.\n");
    return 1;
  }

  stCuentaOrigen.fSaldoDisponible -= fMontoTransferir;
  stCuentaDestino.fSaldoDisponible += fMontoTransferir;

  printf("Saldo actual de %d, %s : %.2f\n", stCuentaOrigen.iNumeroDeCuenta,
         stCuentaOrigen.szTitular, stCuentaOrigen.fSaldoDisponible);

  printf("Saldo actual de %d, %s : %.2f\n", stCuentaDestino.iNumeroDeCuenta,
         stCuentaDestino.szTitular, stCuentaDestino.fSaldoDisponible);

  return 0;
}