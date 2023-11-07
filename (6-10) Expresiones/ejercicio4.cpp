// Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;

    cout << "Introduzca el valor del primer cateto: ";
    cin >> cateto1;

    cout << "Introduzca el valor del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "\nEl valor de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}