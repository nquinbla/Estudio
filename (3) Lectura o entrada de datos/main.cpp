#include <iostream>

int main() {
    int numero; // Aquí definimos la variable, el tipo y el valor que va a tener
    std::cout <<"Introduce un numero: "; // Aquí le pedimos al usuario que introduzca un número
    std::cin >> numero; // Aquí leemos el número que ha introducido el usuario
    std::cout << "El numero que has introducido es: " << numero << std::endl; // Aquí mostramos el número que ha introducido el usuario
    return 0;
}