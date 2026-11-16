/*

Alineación de memoria (Struct Padding) y Uniones (union)

1-. La mentira del compilador (Struct Padding)

Piensa en esta estructura:

struct Datos {
    uint8_t  letra;   // 1 byte
    uint32_t numero;  // 4 bytes
};

Si te pregunto cuánto pesa esta estructura en la memoria RAM, la lógica
matemática dice: 1 + 4 = 5 bytes. Pero si imprimes sizeof(struct Datos), en tu
computadora (arquitectura x86_64) te dirá que pesa 8 bytes. ¿De dónde salieron
esos 3 bytes fantasma?

La explicación:
A los procesadores modernos no les gusta leer la RAM byte por byte; prefieren
leer bloques completos (de 4 u 8 bytes) alineados. Si el compilador pusiera el
numero pegadito a la letra, el numero quedaría "chueco" (desalineado) en la RAM,
y la CPU tardaría el doble de tiempo en leerlo.

Para evitarlo, el compilador inyecta basura invisible (padding) para alinear los
datos:
[ letra (1 byte) ] [ padding invisible (3 bytes) ] [ numero (4 bytes) ] = Total
8 bytes

¿Por qué importa en Hacking / Redes?
Si estás programando un sniffer de red y te llega un paquete crudo desde
internet que mide 5 bytes, e intentas guardarlo directamente en tu struct Datos
de 8 bytes... todo se va a desfasar y vas a leer datos corruptos. Para evitar el
padding en drivers y redes, obligamos a GCC a compactar la estructura usando
__attribute__((packed)).


2.- Las Uniones (union)

Una union se escribe igual que un struct, pero funciona de manera totalmente
distinta: en lugar de poner una variable detrás de la otra en la memoria, pone
todas las variables en la misma dirección exacta. El tamaño total de la union es
igual al tamaño de su variable más grande.

union Convertidor {
    uint32_t entero_32;       // 4 bytes
    uint8_t  bytes_sueltos[4]; // 4 bytes (1 byte cada uno)
};

Aquí no hay 8 bytes de memoria. Solo hay 4 bytes físicos.
Si tú escribes en bytes_sueltos, puedes leer el resultado instantáneamente en
entero_32. Es la herramienta definitiva para transformar datos brutos en
ingeniería inversa sin usar matemáticas complejas.


*/
