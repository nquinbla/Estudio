// La sentencia while

/* Los bucles o ciclos son un conjunto de instrucciones
 * que se repiten un numero determinado de veces, siempre
 * y cuando se cumpla una condicion.
*/

// La sentencia while es un bucle que se ejecuta mientras
// se cumpla una condicion.

// Sintaxis:
// while (condicion) {
//     conjunto de instrucciones;
// }

#include <iostream>

using namespace std;

int main() {
    int i = 1; // Inicializamos la variable de control

    while (i <= 10) { // Mientras i sea menor o igual a 10
        cout << i << endl; // Imprimimos el valor de i
        i++; // Incrementamos el valor de i en 1 porque sino se quedaria en un bucle infinito
    }

    return 0;
}