#include <iostream>

int main() {
    int a; // Siendo n1 el precio de un producto.
    int b; // Siendo n2 el iva
    int c; // Siendo n3 el precio final

    std::cout << "Introduce el precio del producto: ";
    std::cin >> a;
    std::cout << "Introduce el iva del producto: ";
    std::cin >> b;

    c = a + (a * b / 100);
    std::cout << "El precio final del producto es: " << c << std::endl;

    return 0;

}
