/* Realice un programa que calcule y muestre en la salida esttandar la suma de los cuadrados de los 10 primeros enteros mayores que cero. */

#include <iostream>

using namespace std;

int main() {
    int suma = 0, cuadrado;

    for ( int i = 1; i <= 10; i++ ) {
        cuadrado = i * i;
        suma += cuadrado;
    }

    cout <<" El resultado de la suma es: " << suma << endl;

    return 0;
}