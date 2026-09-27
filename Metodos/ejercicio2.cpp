#include<iostream>
#include<cstdlib>

/*

Los argumentos son nombres de campos (variables o constantes) que usa el método llamante para enviar y recibir información
del método invocado y que tienen una correspondencia biunívoca con los parámetros con los cuales se construyó; por lo tanto
estos deben ser iguales en número y en tipo de dato que los parámetros que los parámetros, ya que cada argumento le corresponde 
un parámetro y viceversa. Los argumentos también son de dos clases: unos que envían información al método y otros que reciben información
(si hay parámetros de envío).

La transferencia de información entre argumentos y parámetros se puede hacer de dos maneras:

-Por valor: En este caso el argumento le da a su parámetro respectivo su valor, pero no su dirección de memoria; por lo tanto los cambios
que sufra el parámetro en el método no afectan al argumento. Esto significa que al parámetro se le asigna una dirección de memoria 
diferente a la asignada al argumento y recibe una copia del valor que tiene el argumento correspondiente.

-Por variable o referencia: En este caso el argumento le da a su parámetro respectivo su valor  y su dirección de memoria; por lo tanto las 
modificaciones que se le hagan al parámetro en el método afectan al argumento. Esto significa que tanto argumento como parámetro comparten
la misma dirección de memoria. En los lenguajes que admiten parámetros de envío es necesario colocarles & (ampersand) antes del nombre del 
parámetro en la codificación. Esto indica que el argumento le debe enviar al parámetro su dirección de memoria.




*/

