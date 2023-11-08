/* Realice un programa que lea de la entrada estandar de numeros hasta que se intyroduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos. */

#include <iostream>

using namespace std;

int main() {
    int numero, contador = 0;

    do {
        cout << "Introduzca un numero: ";
        cin >> numero;
        if ( numero > 0 ) {
            contador++;
        }
    } while ( numero != 0 );

    cout << "Se han introducido " << contador << " numeros mayores que cero" << endl;
    cin >> numero;

    return 0;
}