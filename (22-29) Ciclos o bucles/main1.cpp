// Realice un programa que solicite un numero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar.

#include <iostream>

using namespace std;

int main() {
    int numero;

    do {
        cout << "Introduzca un numero del 1 al 10: ";
        cin >> numero;
    } while ( numero < 1 || numero > 10 );

    for ( int i = 1; i <= 10; i++ ) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
    }




