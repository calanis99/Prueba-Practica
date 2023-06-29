#include <iostream>


//Colores -- Tabla de Multiplicación

void imprimirTabla(int numero) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
    }
}

int main() {
    std::string color;

    std::cout << "Ingrese un color (Amarillo, Morado, Rosa, Azul, Blanco): ";
    std::cin >> color;

    if (color == "Amarillo") {
        std::cout << "Tabla del 2:" << std::endl;
        imprimirTabla(2);
    } else if (color == "Morado") {
        std::cout << "Tabla del 7:" << std::endl;
        imprimirTabla(7);
    } else if (color == "Rosa") {
        std::cout << "Tabla del 9:" << std::endl;
        imprimirTabla(9);
    } else if (color == "Azul") {
        std::cout << "Tabla del 6:" << std::endl;
        imprimirTabla(6);
    } else if (color == "Blanco") {
        std::cout << "Tabla del 12:" << std::endl;
        imprimirTabla(12);
    } else {
        std::cout << "Color no válido. Por favor, ingrese un color válido." << std::endl;
    }

    return 0;
}
