/*

Módulo 4: Anatomía del Binario, la Pila (Stack) y Llamadas al Sistema (ioctl)

Cuando compilas tu código con gcc, el resultado no es magia, es un archivo
estructurado llamado ELF (Executable and Linkable Format en Linux) o PE (en
Windows). Los ingenieros inversos no leen tu código en C, leen las secciones de
ese archivo.

1. Las 4 regiones de la memoria RAM

Cuando ejecutas tu programa, el Sistema Operativo lo carga en la RAM
dividiéndolo en 4 zonas clave:

 * .text (Código): Aquí viven las instrucciones en ensamblador de tus
   funciones. Es de Solo Lectura. Si intentas modificar algo aquí, el programa
   explota (Segmentation Fault).

 *  .data y .bss (Globales): Aquí viven las variables globales. .data tiene las
    que inicializaste (int x = 5;) y .bss las que no (int y;).

 * El Heap (Montículo): Memoria dinámica. Aquí es donde va a parar la memoria
   cuando usas malloc() (C) o new (C++). Crece hacia arriba.

 *  El Stack (La Pila): La zona de guerra. Aquí viven las variables locales
    (como tu uint8_t buffer_receptor[4]) y las direcciones de retorno de las
    funciones. Crece hacia abajo.


¿Por qué importa el Stack en Hacking?
Si tu buffer_receptor mide 4 bytes, pero mediante un error en C permites que el
usuario escriba 10 bytes, los 6 bytes sobrantes se desbordarán (Buffer Overflow)
y sobrescribirán la dirección de retorno de la función en el Stack. El hacker
puede cambiar esa dirección para que, en lugar de regresar al main, el programa
salte a un código malicioso.

2. Las Llamadas al Sistema (Syscalls) y el todopoderoso ioctl

En la vida real, un programa de usuario (como tu navegador web) no tiene permiso
de tocar el hardware ni de llamar a las funciones del Kernel directamente. Viven
en un área restringida ("Modo Usuario").

Para pedirle algo al Kernel (Modo Privilegiado), el programa hace una Syscall
(Llamada al Sistema). Las más comunes son read(), write(), open() y close().
Pero, ¿qué pasa si estás haciendo un driver para un Brazo Robótico y quieres
decirle "Gira 45 grados"? No existe la syscall girar().

Ahí entra ioctl (Input/Output Control). Es una syscall "comodín" que te permite
enviar comandos personalizados al hardware enviando un "Número Mágico" (Código
de Comando).



*/