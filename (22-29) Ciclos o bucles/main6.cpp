// Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>

using namespace std;

int main() {
    int n, potencia = 1, suma = 0;

    cout << "Introduzca el valor de n: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        potencia *= 2;
        suma += potencia;
    }

    cout << "El resultado de la suma de potencias de 2 de 1 a " << n << " es: " << suma << endl;

    return 0;
}
