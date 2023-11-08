// Hacer un programa que realize la serie fibonacci -> 1 1 2 3 5 8 13 ... n

#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 1, c = 1;

    cout << "Introduzca el valor de n: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }

    cout << endl;

    return 0;
}