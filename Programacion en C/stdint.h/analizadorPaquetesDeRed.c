#include <stdint.h>
#include <stdio.h>

// 1-. Estructura normal con padding fantasma (total = 8 bytes)
struct StCabeceraNormal {

  uint8_t tipo_paquete; // 1 byte
  uint32_t id_session;  // 4 bytes
};

// 2-. Estructura empaquetada (sin padding)
struct StCabeceraEmpaquetada {

  uint8_t tipo_paquete; // 1 byte
  uint32_t id_session;  // 4 bytes

} __attribute__((packed)); // <-- con esto GCC compacta a bajo nivel

// 3-. union, todas las variables se encuentran en la misma dirección, el tamaño
// es la mas grande
union StConvertidorIP {

  uint32_t direccion_cruda; // 4 byte
  uint8_t octetos[4];       // 1 bytes
};

int main(void) {

  // Usaremos sizeof() para ver cuanto pesan realmente las dos estructuras

  printf("=== PADDING ===\n");
  printf("Tamaño normal StCabeceraNormal: %lu\n",
         sizeof(struct StCabeceraNormal));
  printf("Tamaño normal StCabeceraEmpaquetada: %lu\n",
         sizeof(struct StCabeceraEmpaquetada));
  printf("Tamaño normal StConvertidorIP: %lu\n", sizeof(union StConvertidorIP));

  union StConvertidorIP stIP_prueba;

  // Asignamos la dirección ip byte por byte
  stIP_prueba.octetos[0] = 194;
  stIP_prueba.octetos[1] = 245;
  stIP_prueba.octetos[2] = 43;
  stIP_prueba.octetos[3] = 52;

  printf("Dirección IP: %d.%d.%d.%d\n", stIP_prueba.octetos[0],
         stIP_prueba.octetos[1], stIP_prueba.octetos[2],
         stIP_prueba.octetos[3]);

  printf("Tamaño de direccion_cruda Hex: %X\n", stIP_prueba.direccion_cruda);

  return 0;
}