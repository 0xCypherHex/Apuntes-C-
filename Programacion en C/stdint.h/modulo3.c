/*

Módulo 3: Punteros genéricos (void *) y Punteros a Funciones

En C++ usas "Clases" y "Herencia" (Programación Orientada a Objetos). C no tiene
nada de eso, pero el kernel de Linux necesita una forma de que miles de drivers
distintos (USB, Wi-Fi, tarjetas de video) se conecten al sistema operativo de
forma estandarizada.

¿Cómo lo logra C? Usando estructuras llenas de punteros a funciones.

El Puntero Genérico (void *)

Un void * es un puntero rebelde. Guarda una dirección de memoria, pero no sabe
qué tipo de dato hay ahí. Es un "cheque en blanco". En desarrollo de drivers se
usa muchísimo para mover bloques crudos de memoria (buffers) sin importar si son
letras, números o paquetes de red.

    La regla de oro: No puedes desreferenciar (*ptr) un void * directamente.
Primero tienes que castearlo (transformarlo) al tipo de dato que sabes que es:
*(uint8_t *)ptr.

2. Punteros a Funciones

Normalmente los punteros apuntan a variables. Pero en C, las funciones también
viven en la memoria (en la sección .text de tu binario ELF). Por lo tanto,
puedes guardar la dirección de una función en una variable y ejecutarla después
usando esa variable.

La sintaxis asusta al principio, pero es lógica:

// Retorno (*nombre_puntero)(Parametros...);
int (*ptr_funcion)(int, int);

El Santo Grial del Kernel: struct file_operations

En Linux, "todo es un archivo". Cuando tú escribes un driver, el kernel te
obliga a crear una estructura gigante llamada file_operations y llenarla con las
direcciones de tus propias funciones para que el kernel sepa a quién llamar
cuando el usuario intente leer o escribir en tu hardware.


1. void como tipo de retorno (A la izquierda)
Cuando pones void al principio de la función, le estás diciendo al compilador:
"Esta función hace su trabajo y al final no devuelve ningún dato".

Ejemplo: void imprimir_mensaje(int numero); (Recibe un entero, pero no
devuelve nada).

2. void como lista de argumentos (Dentro de los paréntesis)
Cuando pones void dentro de los paréntesis, le estás diciendo al compilador:
"Para que esta función trabaje, no necesitas enviarle ningún dato de entrada".

Ejemplo: int encender_motor(void); (No le pasas nada, pero cuando termina,
te devuelve un entero).

Desmenuzando tu puntero a función

En el caso de nuestra estructura del Kernel:
int (*abrir_dispositivo)(void);

Se lee así de izquierda a derecha:

int: Lo que devuelve. Cuando la función termine, escupirá un número entero.
En el mundo del Kernel de Linux, devolver 0 significa "Éxito, no hubo errores",
y devolver un número negativo (ej. -1) significa "Fallo de hardware".

(*abrir_dispositivo): El nombre de nuestro puntero.

(void): Lo que recibe. No necesita que le mandes ni arreglos, ni caracteres,
ni variables.


--- Inicializadores designados ---

En las versiones viejas de C, si querías inicializar una estructura usando
llaves, tenías que poner los valores en el orden exacto en el que se declararon.
Si la estructura pedía abrir, leer, y escribir, tenías que poner:struct
file_operations mi_driver = { driver_teclado_abrir, driver_teclado_leer,
driver_teclado_escribir };

El problema en Linux: La estructura file_operations real del kernel no tiene 3
funciones, ¡tiene más de 30! Si tú solo quieres configurar 3 funciones para tu
hardware, recordar en qué posición exacta van es una pesadilla.

Para solucionarlo, C inventó los Inicializadores Designados usando el Punto (.).
El punto significa: "Oye compilador, no me importa en qué orden están definidos
allá arriba. Quiero que tomes este puntero a función y lo metas específicamente
en el campo que se llama así".

 syntaxis: .campo_de_la_estructura = el_dato_que_le_paso
.abrir_dispositivo = driver_teclado_abrir,

¿Por qué comas (,) y no punto y coma (;)?

En C, el punto y coma (;) se usa para terminar una instrucción o acción completa
(como llamar a una función o hacer un cálculo matemático).

Sin embargo, aquí estamos dentro de una lista (las llaves { }). Piensa en cómo
inicializas un arreglo normal en C:int numeros[3] = { 10, 20, 30 }; // ¡Usas
comas!

El misterio del return ulLongitud; (El contrato de Linux)

En la programación tradicional, si una función genera datos, los retorna (return
mis_datos;). En el Kernel de Linux, esto está prohibido.

¿Cómo viajan los datos entonces?
A través del void *buffer. Ese puntero es como una caja vacía compartida entre
el hardware y el usuario. Cuando en tu función leer haces buff_real[1] = 0x4F;,
estás metiendo el hexadecimal directamente en esa caja en tiempo real. No
necesitas retornar el arreglo porque los datos ya están físicamente ahí en la
memoria RAM.

¿Entonces para qué sirve el return?
En Linux, el return de las funciones de un driver actúa como un "Acuse de
Recibo" (un comprobante) para el Sistema Operativo.

Imagina que un programa de usuario le pide a tu driver: "Léeme 100 bytes del
teclado".

 * El Sistema Operativo crea una caja (buffer) con espacio para 100 bytes y te
   manda el tamaño (ulLongitud = 100).

 * Tu driver intenta leer el hardware, pero el usuario solo presionó 4 teclas
  (H, O, L, A).

 * Metes esos 4 bytes en la caja.

 * Aquí entra el return: Haces return 4;.

 * El Sistema Operativo recibe ese 4 y dice: "Ah, le pedí 100 bytes al driver,
   pero me devolvió un comprobante que dice que solo pudo leer 4. Le avisaré al
   programa del usuario que solo hay 4 bytes válidos en la caja".

Si tu driver retornara 0, el Sistema Operativo pensaría que el dispositivo se
desconectó (End of File). Si retornara un número negativo (ej. -1), el SO
lanzaría un error de hardware.

Al hacer return ulLongitud;, le estás diciendo al Kernel: "Misión cumplida,
procesé el 100% de los bytes que me pediste".

*/