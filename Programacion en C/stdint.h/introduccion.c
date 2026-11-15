/*

1-. En C estándar, el tamaño de un int no es fijo: en un microcontrolador
antiguo de 16 bits ocupa 2 bytes, en una PC moderna ocupa 4 bytes, y un long
cambia entre Windows y Linux de 64 bits.


Si estás escribiendo un driver para una tarjeta de red y el manual del
fabricante dice: "Envía un comando de exactamente 8 bits (1 byte) a la dirección
de memoria del chip", usar int enviaría 32 bits (4 bytes), sobrescribiendo
registros vecinos y causando un fallo de hardware.

En ingeniería inversa (usando herramientas como Ghidra o GDB), cuando ves datos
en memoria, necesitas saber si estás leyendo 1, 2, 4 u 8 bytes exactos.

Por eso se incluye la librería #include <stdint.h>, que define tipos de entero
de ancho fijo:

uint8_t: Entero sin signo (unsigned) de exactamente 8 bits (1 byte). Guarda
valores de 0 a 255 (en hexadecimal: 0x00 a 0xFF). Es la unidad mínima
direccionable en memoria (1 byte).

uint16_t: Sin signo de 16 bits (2 bytes) (0 a 65535 / 0x0000 a 0xFFFF).

uint32_t: Sin signo de 32 bits (4 bytes).

uint64_t: Sin signo de 64 bits (8 bytes).
(Si les quitas la u inicial (int8_t, int32_t) aceptan números negativos, pero
para registros de hardware y banderas casi siempre se usan los u sin signo
porque solo nos importan sus bits puros).

2-. ¿Qué es un registro de hardware y porqué empaquetamos bits?

En C estándar no podías darte el lujo de gastar 1 byte entero (8 bits) para
guardar un simple estado de "encendido/apagado" (que solo necesita 1 bit: 1 o
0). Además, los chips físicos (procesadores, tarjetas de audio, controladores
USB) tienen pequeñas celdas de memoria interna llamadas Registros.

Imagina un registro de 8 bits (uint8_t) como un panel físico con 8 interruptores
(switches) en fila, numerados de derecha a izquierda del Bit 0 (el menos
significativo) al Bit 7 (el más significativo):

En ese solo byte (00001011 en binario = 11 en decimal = 0x0B en hexadecimal), el
hardware lee 8 configuraciones distintas al mismo tiempo:

El interruptor 0 está encendido (1).

El interruptor 1 está encendido (1).

El interruptor 2 está apagado (0).

El interruptor 3 está encendido (1).

Los interruptores 4 al 7 están apagados (0).

3. ¿Por qué usamos Hexadecimal (0x...) en C de bajo nivel?

En C, no puedes escribir binarios de forma nativa en estándares antiguos, y leer
10110100 es propenso a errores humanos. El sistema hexadecimal (base 16: 0-9 y
A-F) es el puente perfecto porque cada dígito hexadecimal representa exactamente
4 bits (medio byte):

    0x0 = 0000

    0x1 = 0001

    0x2 = 0010

    0x4 = 0100

    0x8 = 1000

    0xF = 1111 (los 4 bits encendidos = 15 en decimal)

Así, un uint8_t (8 bits) siempre se representa con dos dígitos hexadecimales
precedidos por 0x:

    0x00 = 0000 0000 (todo apagado)

    0xFF = 1111 1111 (todo encendido)

    0x81 = 1000 0001 (bit 7 y bit 0 encendidos)

4. Los Operadores Bit a Bit (Bitwise Operators)

Si tienes ese panel de 8 interruptores en una variable uint8_t estado = 0x00; y
quieres encender únicamente el interruptor 2 sin alterar los otros 7
interruptores, no puedes hacer estado = 4; porque borrarías lo que hubiera en
los demás bits. Para manipular bits individuales existen 6 operadores en C:

A) Desplazamiento a la izquierda (<<)  El creador de "Máscaras"
Mueve los bits hacia la izquierda rellenando con ceros a la derecha. Se usa para
crear una máscara (un molde donde solo el bit que nos interesa vale 1 y todos
los demás valen 0):

    1 << 0 -> 0000 0001 (Apunta al Bit 0)

    1 << 1 -> 0000 0010 (El 1 se recorrió 1 lugar: apunta al Bit 1)

    1 << 2 -> 0000 0100 (El 1 se recorrió 2 lugares: apunta al Bit 2)

    1 << 7 -> 1000 0000 (Apunta al Bit 7)

(También existe >> que desplaza los bits hacia la derecha).

B) OR bit a bit (|)  Para ENCENDER bits
Compara dos bits: si alguno de los dos es 1, el resultado es 1.
Si haces estado = estado | (1 << 2); (o abreviado estado |= (1 << 2);):

C) AND bit a bit (&)  Para LEER/COMPROBAR un bit
Compara dos bits: solo da 1 si AMBOS son 1 al mismo tiempo.
Si quieres saber si el Bit 2 está encendido dentro de estado:

En C se escribe: if (estado & (1 << 2)) { ... } (Recuerda: en C cualquier número
distinto de 0 es verdadero). Nota crítica: No confundas & (AND bit a bit) con &&
(AND lógico de condiciones), ni | con ||.

D) NOT bit a bit (~) combinado con AND (& ~)  Para APAGAR un bit
El operador ~ invierte todos los bits (cambia 0 por 1 y 1 por 0).
Si queremos apagar el Bit 2 sin tocar los demás:

    Tomamos la máscara (1 << 2) -> 0000 0100

    La invertimos con ~(1 << 2) -> 1111 1011 (Todos los bits en 1, excepto el
    Bit 2 que queda en 0).

    Aplicamos un AND (&) contra nuestro estado:

Por eso la fórmula universal en C para apagar un bit es: estado &= ~(1 << n);.

E) XOR bit a bit (^) Para ALTERNAR (Toggle) un bit
Compara dos bits: da 1 si los bits son diferentes, y 0 si son iguales.
Al aplicar XOR con una máscara 1, invierte únicamente ese bit (si estaba en 0 lo
sube a 1; si estaba en 1 lo baja a 0):

Fórmula para alternar un bit: estado ^= (1 << n);.

Resumen de tu "Caja de Herramientas" de bajo nivel:
Para cualquier variable reg y el bit en la posición n:

    Encender bit n: reg |= (1 << n);

    Apagar bit n: reg &= ~(1 << n);

    Alternar bit n: reg ^= (1 << n);

    Consultar si el bit n vale 1: if (reg & (1 << n))

*/