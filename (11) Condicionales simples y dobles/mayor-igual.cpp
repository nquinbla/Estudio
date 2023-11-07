#include <iostream>

using namespace std;

int main() {
    int numero, dato = 5;

    cout << "Introduzca un numero: ";
    cin >> numero;

    if(numero >= dato) {
        cout << "El numero es mayor o igual a 5";
    }
    else {
        cout << "El numero es menor o igual a 5";
    }

    return 0;
}
