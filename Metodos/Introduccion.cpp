/*

 Un método o subprograma como también suele llamarséle es un pequeño programa diseñado para efectuar una tarea particular, bajo la dependencia de un programa u otro subprograma que lo utiliza.
 De esta manera, el método es diseñado para ser utilizado por otros procesos más amplios, dentro de los cuales existe un medio de recibo y/o entrega de información, lo mismo que el flujo de 
 control de ejecución del programa.
 
 La utilización de métodos en la solución de problemas grandes tiene muchas ventajas. Por ejemplo, para tareas que deban efectuarse más de una vez, la modularidad evita la necesidad de progrmación
 redundante, esencialmente el mismo conjunto de instrucciones; en vez de ello, un módulo puede construirse e invocarse cada vez que se necesite hacer la misma labor, por lo tanto el uso de módulos
 permite o hace que los programas sean más cortos, son más fáciles de escribir, corregir y su estructura lógica es más clara que la de los programas que no están divididos en módulos.

 El método por ser un programa, debe cumpli con las mismas características de éste y hacer tareas similares como aceptar datos, escribir datos y hacer cálculos; sin embargo, es utilizado para un 
 propósito específico. El método recibe datos del programa o método que lo invoca y éste le devuelve resultados.

 Un método puede ser invocado tantas veces como se necesite y, a su vez, los métodos pueden invocar otros métodos. 

  --- Clasificación según la forma en que se invoca el método ---

  Reglas: 
  1-. Un método es una función, pero con una característica especial: pertenece estrictamente a una clase o a un objeto.
  2-. Todos los métodos son funciones, pero no todas las funciones son métodos.

 Métodos de instancia: Se invocan desde objetos instanciados de una clase.

 Métodos de clase o métodos estáticos: Se invocan desde la clase, sin necesidad de instanciar objetos.

  Los métodos de instancia serán explicados en el capítulo siguiente, por lo que en este capítulo, no se hará referencia a ellos. Los métodos de clase, comúnmente llamados métodos estáticos, están
  asociados a una clase en particular, por lo que su invocación se hace con el nombre de la clase. En este capítulo los métodos se declaran públicos para que se pueda acceder a ellos por fuera de la 
  clase a la que pertenecen, y estáticos para invocarlos con la clase y no como una instancia de esta. El formato general de un método estático es:

  public static TIPO DE RETORNO nombre (Párametros) {
    
    Instrucciones;

  }

    A nivel del compilador, la gran diferencia estructural entre una función y un método es que los métodos reciben un parámetro oculto.
    Cuando tú escribes miLaptop.enfriar(), el compilador de C++ secretamente lo transforma en algo similar a esto: enfriar(&miLaptop). Ese puntero invisible que se pasa por debajo de la mesa se llama this,
    y es el mecanismo que le permite al método saber exactamente a qué espacio de memoria (a qué objeto en específico) debe ir a modificarle las variables. Las funciones normales no tienen puntero this.

*/

#include <iostream>

class Computadora {
public:
    // MÉTODO ESTÁTICO (De Clase)
    // Se define con la palabra clave 'static'. Le pertenece a la "fábrica", no a las computadoras individuales.
    static void mostrarManualDeUso() {
        std::cout << "Manual General: Mantenga el equipo ventilado para evitar sobrecalentamiento." << std::endl;
    }

    // OTRO MÉTODO ESTÁTICO
    static void emitirAlertaGlobal() {
        std::cout << "Alerta a todos los usuarios: Actualización de firmware requerida." << std::endl;
    }
    
    // Método de instancia normal (para contrastar)
    void encender() {
        std::cout << "Encendiendo esta computadora específica..." << std::endl;
    }
};

int main() {
    // 1. INVOCACIÓN ESTÁTICA (Sin instancias)
    // Nota cómo usamos NombreDeLaClase::NombreDelMetodo()
    // ¡En este punto del programa existen CERO objetos de tipo Computadora!
    Computadora::mostrarManualDeUso();
    Computadora::emitirAlertaGlobal();

    // 2. INVOCACIÓN DE INSTANCIA (Requiere objeto)
    // Para usar encender() SÍ es obligatorio crear una variable primero.
    // Computadora::encender(); // ESTO DARÍA ERROR DE COMPILACIÓN
    
    Computadora miLaptop; 
    miLaptop.encender(); // Esto sí es válido

    return 0;
}
