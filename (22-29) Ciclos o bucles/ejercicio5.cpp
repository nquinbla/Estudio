// Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)

#include <iostream>

using namespace std;

int main() {
    int n, factorial = 1, suma = 0;

    cout << "Introduzca el valor de n: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        factorial *= i;
        suma += factorial;
    }

    cout << "El resultado de la suma de factoriales de 1 a " << n << " es: " << suma << endl;


    return 0;
}