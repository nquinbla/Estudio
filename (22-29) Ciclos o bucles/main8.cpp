// Realice un program,a que solicite al usuario quepeinse un numero entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero que ingreso es menor o mayor al numero aleatorio, asi hasta que lo adivine. Y por ultimo mostrarle el numero de intentos que le llevo.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int numero, aleatorio, intentos = 0;

    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    do {
        cout << "Introduzca un numero: ";
        cin >> numero;
        if ( numero > aleatorio ) {
            cout << "El numero que ingreso es mayor al numero aleatorio" << endl;
        } else if ( numero < aleatorio ) {
            cout << "El numero que ingreso es menor al numero aleatorio" << endl;
        }
        intentos++;
    } while ( numero != aleatorio );

    cout << "Felicidades, adivino el numero aleatorio en " << intentos << " intentos" << endl;
    system("pause")

    return 0;
}
