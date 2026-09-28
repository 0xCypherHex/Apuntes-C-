
// EN ESTE EJERCICIO SE CREARAN DOS METODOS UNO QUE SERA AUXILIAR Y OTRO QUE SERA INVOCADO POR ÉL

/*

    Diferencia entre la declaracion de métodos public y private 

    Public (Publico): Estos métodos son los botones de la clase. Cualquier otra parte del programa puede llamar a estos métodos.
    Definen lo que tu objeto ofrece al resto del mundo.

    Private (Privado): Son los "mecanismos internos". Solo pueden ser llamados por otros métodos que pertenezcan a la misma clase.
    El resto del programa no tiene acceso a ellos y, si intenta usarlos, el compilador lanzará un error.

*/
#include<iostream>

class sumPro {

    public:

        static float sumaPromedio (int n){

            float suma = 0;
            float valor = 0;

            for(int i=1; i <= n; i++){

                std::cout << "Inserte el valor 1: " << valor;
                    std::cin >> valor; 

                suma += valor;
         
            }

            // Sacamos el promedio

            float promedio = suma/n;

            return promedio;

        }

     // Método auxiliar (suma)

    private: // Solo lo puede invocar un método de la misma clase
        
        static float sumar (int n, float &suma){

            float numero = 0;
            
            suma = 0;

            for (int i = 1; i <= n; i++){

                std::cout << "Digite el valor :" << numero << std::endl;
                    std::cin >> numero;

                

                suma += numero;

                return suma;

            }

        }

     // Segundo método

    public:
        
        static float prom(int n, float &promedio) {

            float suma = 0;

            sumar(n, suma);

            promedio = suma/n;

            return promedio;
            
        }

};