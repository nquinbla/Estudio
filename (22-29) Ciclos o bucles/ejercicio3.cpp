// EScriba un programa que calcule x^y donde tanto x como y son enteros positivos, sin utilizar la funcion pow.

#include <iostream>

using namespace std;

int main() {
    int x, y, resultado = 1;

    cout << "Introduzca el valor de x: ";
    cin >> x;

    cout << "Introduzca el valor de y: ";
    cin >> y;

    for ( int i = 0; i < y; i++ ) {
        resultado *= x;
    }

    cout << "El resultado de " << x << "^" << y << " es: " << resultado << endl;

    return 0;
}