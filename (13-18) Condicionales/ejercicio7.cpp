// Escribe un programa que lea la entrada estandar de tres numeros y despues debe leer un cuarto numero e indicar si coincide con alguno de los introducidos con anterioridad.

#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;

    cout << "Introduzca el primer numero a: ";
    cin >> a;

    cout << "Introduzca el segundo numero b: ";
    cin >> b;

    cout << "Introduzca el tercer numero c: ";
    cin >> c;

    cout << "Introduzca el cuarto numero d: ";
    cin >> d;

    if ( d == a || d == b || d == c ) {
        cout << "El numero coincide con alguno de los anteriores" << endl;
    }
    else {
        cout << "El numero no coincide con ninguno de los anteriores" << endl;
    }











    return 0;
}
