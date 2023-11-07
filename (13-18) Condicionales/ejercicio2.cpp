#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cout << "Introduzca el primer numero a: ";
    cin >> a;

    cout << "Introduzca el segundo numero b: ";
    cin >> b;

    cout << "Introduzca el tercer numero c: ";
    cin >> c;

    if ( a == b && b == c ) {
        cout << "Los numeros son iguales" << endl;
    }
    else if ( a > b && a > c ) {
        cout << "El mayor es: " << a << endl;
    }
    else if ( b > a && b > c ) {
        cout << "El mayor es: " << b << endl;
    }
    else {
        cout << "El mayor es: " << c << endl;
    }


    return 0;
}
