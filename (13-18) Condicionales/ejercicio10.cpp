// Programa que simule un cajero automático con un saldo inicial de 1000€

#include <iostream>

using namespace std;

int main() {
    int saldo_inicial = 1000, opcion = 0, ingreso = 0, retirar = 0;

    cout << "\nBienvenido a su cajero virtual" << endl;
    cout << "1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: cout << "\nCuanto dinero desea ingresar: ";
        cin >> ingreso;
        saldo_inicial += ingreso;
        cout << "Dinero en cuenta: " << saldo_inicial << endl;
        break;

        case 2: cout << "\nCuanto dinero desea retirar: ";
        cin >> retirar;
        if (retirar > saldo_inicial) {
            cout << "No tiene esa cantidad de dinero" << endl;
        }
        else {
            saldo_inicial -= retirar;
            cout << "Dinero en cuenta: " << saldo_inicial << endl;
        }

        case 3: break;

    }

    return 0;
}