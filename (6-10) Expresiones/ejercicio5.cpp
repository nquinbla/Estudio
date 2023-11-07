// Escribe un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax`2 + bx + c = 0.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, x1 = 0, x2 = 0;

    cout << "Introduzca el valor de a: "; cin >> a;
    cout << "Introduzca el valor de b: "; cin >> b;
    cout << "Introduzca el valor de c: "; cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);

    cout << "\nEl valor de x1 es: " << x1 << endl;
    cout << "El valor de x2 es: " << x2 << endl;


    return 0;
}
