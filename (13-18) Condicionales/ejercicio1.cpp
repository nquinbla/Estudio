#include <iostream>

using namespace std;

int main() {
    float a, b;

    cout << "Introduzca el primer numero a: ";
    cin >> a;

    cout << "Introduzca el segundo numero b: ";
    cin >> b;

    if ( a == b ) {
        cout << "Los numeros son iguales" << endl;
    }
    else if ( a > b ) {
        cout << "El mayor es: " << a << endl;
    }
    else {
        cout << "El mayor es: " << b << endl;
    }


    return 0;
}