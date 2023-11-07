//Programa que lea la nota final de cuatro alumnos y calcula la nota final media de los cuatro alumnos.

#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, resultado;

    cout << "Introduzca la nota del primer alumno: ";
    cin >> a;

    cout << "Introduzca la nota del segundo alumno: ";
    cin >> b;

    cout << "Introduzca la nota del tercer alumno: ";
    cin >> c;

    cout << "Introduzca la nota del cuarto alumno: ";
    cin >> d;

    resultado = (a+b+c+d) / 4;
    cout << "\nLa nota media de los cuatro alumnos es: " << resultado << endl;

    return 0;
}