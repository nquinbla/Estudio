// Escribe un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;

    cout << "Introduzca el valor de n: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        suma += i;
    }

    cout << "El resultado de la suma de 1 a " << n << " es: " << suma << endl;

    return 0;
}