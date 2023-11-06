#include <iostream>

int main() {
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    std::cout << "Introduce el primer nomero: ";
    std::cin >> n1;
    std::cout << "Introduce el segundo nomero: ";
    std::cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    std::cout << "La suma de " << n1 << " y " << n2 << " es " << suma << std::endl;
    std::cout << "La resta de " << n1 << " y " << n2 << " es " << resta << std::endl;
    std::cout << "La multiplicacion de " << n1 << " y " << n2 << " es " << multiplicacion << std::endl;
    std::cout << "La division de " << n1 << " y " << n2 << " es " << division << std::endl;

    return 0;
}