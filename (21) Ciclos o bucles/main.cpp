/* La sentencia for
 * for (expresion1; expresion logica; expresion2) {
 *     conjunto de instrucciones
 *     ...
 *     }
 *
 *    expresion1: se ejecuta una vez antes de comenzar el bucle
 *    expresion logica: se evalua antes de cada iteracion del bucle
 *    expresion2: se ejecuta al final de cada iteracion del bucle
*/

#include <iostream>

using namespace std;

int main()  {
    int i;

    for( i = 1; i <= 10; i++ ) {
        cout << i << endl;
    }

    return 0;
}