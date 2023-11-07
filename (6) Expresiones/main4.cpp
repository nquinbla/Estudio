#include <iostream>

using namespace std;

int main() {
    float practica, teoria, participacion, nota_final;

    cout << "Introduzca la nota de practicas: ";
    cin >> practica;

    cout << "Introduzca la nota de teoria: ";
    cin >> teoria;

    cout << "Introduzca la nota de participacion: ";
    cin >> participacion;

    nota_final = (practica * 0.30) + (teoria * 0.60) + (participacion * 0.10);
    cout << "\nLa nota final es: " << nota_final << endl;



    return 0;
}