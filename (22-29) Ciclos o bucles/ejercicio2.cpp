/* Escribe un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura mas alta y la mas baja. */

#include <iostream>

using namespace std;

int main() {
    float temperatura, temperatura_media, temperatura_maxima, temperatura_minima;

    for ( int i = 0; i < 6; i++ ) {
        cout << "Introduzca la temperatura: ";
        cin >> temperatura;

        if ( i == 0 ) {
            temperatura_maxima = temperatura;
            temperatura_minima = temperatura;
        }
        else {
            if ( temperatura > temperatura_maxima ) {
                temperatura_maxima = temperatura;
            }
            if ( temperatura < temperatura_minima ) {
                temperatura_minima = temperatura;
            }
        }

        temperatura_media += temperatura;
    }

    temperatura_media /= 6;

    cout << "La temperatura media es: " << temperatura_media << endl;
    cout << "La temperatura maxima es: " << temperatura_maxima << endl;
    cout << "La temperatura minima es: " << temperatura_minima << endl;


    return 0;
}