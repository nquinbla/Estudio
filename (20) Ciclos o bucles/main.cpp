// La sentencia do while
// Uso de la sentencia do while
// El cuerpo del while se ejecuta al menos una vez

#include <iostream>


using namespace std;

int main() {
    int i = 10;

    do {
        cout << i << endl;
        i--;
    } while ( i >= 1 );

    return 0;
}