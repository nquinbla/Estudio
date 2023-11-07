#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, e, f, resultado;

    cout << "Introduzca el valor de a: ";
    cin >> a;

    cout << "Introduzca el valor de b: ";
    cin >> b;

    cout << "Introduzca el valor de c: ";
    cin >> c;

    cout << "Introduzca el valor de d: ";
    cin >> d;

    cout << "Introduzca el valor de e: ";
    cin >> e;

    cout << "Introduzca el valor de f: ";
    cin >> f;

    resultado = ( a + (b/c) )/( d + (e/f) );
    // Si quisieramos redondear el resultado a dos decimales hacemos lo siguiente: "cout.precision(2);"
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}
