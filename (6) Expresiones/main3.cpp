 // Programa que intercambie dos valores

#include <iostream>

using namespace std;

int main() {
    int x, y, aux;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el valor de y: ";
    cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "\nEl nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y << endl;6

    return 0;
}