/* Hacer un menú que considere las siguientes opciones:
 * Caso 1: Cubo de un número
 * Caso 2: Número par o impar
 * Caso 3: Salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int opcion = 0, numero = 0, cubo = 0;

    cout << "\nBienvenido al menu" << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione la opcion que quiera realizar indicando el numero que le corresponda: ";
    cin >> opcion;

    switch (opcion) {
        case 1 : cout << "\nIntroduzca el numero que quiera elevar al cubo: ";
        cin >> numero;
        cubo = pow(numero, 3);
        cout << "El cubo de " << numero << " es: " << cubo << endl;
        break;

        case 2 : cout << "\nIntroduzca el numero que quiera saber si es par o impar: ";
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "El numero " << numero << " es par" << endl;
        }
        else {
            cout << "El numero " << numero << " es impar" << endl;
        }

        case 3 : break;

    }

    return 0;
}