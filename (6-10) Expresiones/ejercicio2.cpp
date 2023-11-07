#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, resultado;

    cout << "Introduzca un numero a: ";
    cin >> a;

    cout << "Introduzca un numero b: ";
    cin >> b;

    cout << "Introduzca un numero c: ";
    cin >> c;

    cout << "Introduzca un numero d: ";
    cin >> d;

    resultado = ( a + ( b / ( c - d ) ) );
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}