#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Introduzca un numero: ";
    cin >> numero;

    if (numero ==0) {
        cout << "El numero es 0";
    }
    else if (numero %2 == 0) { // Si el resto de dividir el numero entre 2 es 0, entonces es par
        cout << "El numero es par";
    }
    else {
        cout << "El numero es impar";
    }


    return 0;
}