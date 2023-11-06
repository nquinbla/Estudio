#include <iostream>

int main() {
    float a;
    float b;
    float resultado;

    std::cout << "Introduce el primer numero: ";
    std::cin >> a;

    std::cout << "Introduce el segundo numero: ";
    std::cin >> b;

    resultado = (a/b) + 1;

    std::cout.precision(2);
    std::cout << "\nEl resultado es: " << resultado << std::endl;

    return 0;
}