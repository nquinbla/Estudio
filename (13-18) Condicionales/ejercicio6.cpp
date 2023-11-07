#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Introduzca su edad: ";
    cin >> edad;

    if ((edad >= 18) && (edad <= 25)) { // && es el operador lógico AND
        cout << "Su edad esta en el rango de 18 a 25 años";
    }
    else {
        cout << "Su edad no esta en el rango de 18 a 25 años";
    }
    return 0;
}