#include <iostream>

int main() {
    int edad;
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    char sexo[10];
    std::cout << "Introduce tu sexo: ";
    std::cin >> sexo;

    float altura;
    std::cout << "Introduce tu altura: ";
    std::cin >> altura;


    std::cout << "Tu edad es: " << edad << std::endl;
    std::cout << "Tu sexo es: " << sexo << std::endl;
    std::cout << "Tu altura en metros es: " << altura << std::endl;

    return 0;
}
