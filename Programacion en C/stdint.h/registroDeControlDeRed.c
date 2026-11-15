#include <stdint.h>
#include <stdio.h>

// Mascaras
#define BIT_PWR_ON (1 << 0)
#define BIT_TX_EN (1 << 1)
#define BIT_RX_EN (1 << 2)
#define BIT_PROMISC (1 << 3)
#define BIT_ERR_FLAG (1 << 7)

// Manipulacion de bits
void vfEncenderBit(uint8_t *pReg, uint8_t u8Mascara);
void vfApagarBit(uint8_t *pReg, uint8_t u8Mascara);
void vfAlternarBit(uint8_t *pReg, uint8_t u8Mascara);

// Lector
void vfImprimirEstadoChip(uint8_t u8Reg);

int main(void) {

  int iMenuOptions = 0;
  uint8_t u8ControlReg = 0x00;

  int iBitsOptions;

  do {

    vfImprimirEstadoChip(u8ControlReg);

    printf("================CONTROL DE RED==============\n");
    printf("1)\t Encender bit.\n");
    printf("2)\t Apagar bit.\n");
    printf("3)\t Alternar bit.\n");
    printf("4)\t Status. \n");
    printf("5)\033[1;31m\t Salir.\033[0m\n");

    scanf("%d", &iMenuOptions);

    // switch principal
    switch (iMenuOptions) {

    case 1:

      printf("1) BIT_PWR_ON\n");
      printf("2) BIT_TX_EN\n");
      printf("3) BIT_RX_EN\n");
      printf("4) BIT_PROMISC\n");

      scanf("%d", &iBitsOptions);

      switch (iBitsOptions) {

      case 1:

        vfEncenderBit(&u8ControlReg, BIT_PWR_ON);
        break;

      case 2:

        vfEncenderBit(&u8ControlReg, BIT_TX_EN);

        break;

      case 3:

        vfEncenderBit(&u8ControlReg, BIT_RX_EN);

        break;

      case 4:

        vfEncenderBit(&u8ControlReg, BIT_PROMISC);

        break;

      default:

        printf("Opción inválida.\n");

        break;
      }

      break;

    case 2:

      printf("1) BIT_PWR_ON\n");
      printf("2) BIT_TX_EN\n");
      printf("3) BIT_RX_EN\n");
      printf("4) BIT_PROMISC\n");

      scanf("%d", &iBitsOptions);

      switch (iBitsOptions) {

      case 1:

        vfApagarBit(&u8ControlReg, BIT_PWR_ON);

        break;

      case 2:

        vfApagarBit(&u8ControlReg, BIT_TX_EN);

        break;

      case 3:

        vfApagarBit(&u8ControlReg, BIT_RX_EN);

        break;

      case 4:

        vfApagarBit(&u8ControlReg, BIT_PROMISC);

        break;

      default:

        printf("Opción inválida.\n");

        break;
      }

      break;

    case 3:

      printf("1) BIT_PWR_ON\n");
      printf("2) BIT_TX_EN\n");
      printf("3) BIT_RX_EN\n");
      printf("4) BIT_PROMISC\n");

      scanf("%d", &iBitsOptions);

      switch (iBitsOptions) {

      case 1:

        vfAlternarBit(&u8ControlReg, BIT_PWR_ON);

        break;

      case 2:

        vfAlternarBit(&u8ControlReg, BIT_TX_EN);

        break;

      case 3:

        vfAlternarBit(&u8ControlReg, BIT_RX_EN);

        break;

      case 4:

        vfAlternarBit(&u8ControlReg, BIT_PROMISC);

        break;

      default:

        printf("Opción inválida.\n");

        break;
      }

      break;

    case 4:

      vfImprimirEstadoChip(u8ControlReg);

      break;

    case 5:
      // Exit
      break;

    default:

      printf("Opción inválida.\n");

      break;
    }

  } while (iMenuOptions != 5);

  return 0;
}

// si alguno de los dos es 1, el resultado es 1.
void vfEncenderBit(uint8_t *pReg, uint8_t u8Mascara) { *pReg |= u8Mascara; }

// Si ambos son 1 al mismo tiempo los inverte a 0
void vfApagarBit(uint8_t *pReg, uint8_t u8Mascara) { *pReg &= ~u8Mascara; }

// Devuelve 1 si ambos son diferentes, 0 si son iguales
void vfAlternarBit(uint8_t *pReg, uint8_t u8Mascara) { *pReg ^= u8Mascara; }

void vfImprimirEstadoChip(uint8_t u8Reg) {

  printf("PWR: [%s] | TX: [%s] | RX: [%s] | PROMISC: [%s] | ERR: [%s]\n",
         (u8Reg & BIT_PWR_ON) ? "ON" : "OFF",
         (u8Reg & BIT_TX_EN) ? "ON" : "OFF", (u8Reg & BIT_RX_EN) ? "ON" : "OFF",
         (u8Reg & BIT_PROMISC) ? "ON" : "OFF",
         (u8Reg & BIT_ERR_FLAG) ? "ERR!" : "OK");

  printf("============================================\n");
  printf("STATUS: ");

  // Evaluar si cada bit esta encendido
  for (int i = 7; i >= 0; i--) {

    if (u8Reg & (1 << i)) {

      printf("1 ");
    } else {

      printf("0 ");
    }
  }

  printf("\n");
}