#include <iostream>

//Se requiere la generación de un código que identifique cuando el numero es par o impar.

int main() {
    int numero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "El número " << numero << " es par." << std::endl;
    } else {
        std::cout << "El número " << numero << " es impar." << std::endl;
    }

    return 0;
}