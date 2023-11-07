#include <iostream>

using namespace std;

int main() {
    int número;

    cout << "Introduzca un numero: ";
    cin >> número;

    if (número > 0) {
        cout << "El numero es positivo";
    }
    else if (número < 0) {
        cout << "El numero es negativo";
    }
    else {
        cout << "El número es cero";
    }


    return 0;
}
