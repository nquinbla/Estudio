#include <iostream>

int main() {
    float a;
    float b;
    float c;
    float d;
    float resultado;

    std::cout << "Introduzca un numero: ";
    std::cin >> a;

    std::cout << "Itroduzca un segundo numero: ";
    std::cin >> b;

    std::cout << "Introduzca un tercer numero: ";
    std::cin >> c;

    std::cout << "Introduzca un cuarto numero: ";
    std::cin >> d;

    resultado = (a+b) / (c+d);
    std::cout.precision(2);
    std::cout << "\nEl resultado es: " << resultado << std::endl;



}