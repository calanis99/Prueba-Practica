#include <iostream>
#include <cstring>
 // Realizar un programa donde el objetivo es invertir una cadena de texto, 
 // en la cual debe tener una caja de texto para capturar el texto 
 // que se desea invertir y una caja de texto para mostrar el resultado.
 
void invertirTexto(char* texto) {
    int longitud = std::strlen(texto);
    int i = 0;
    int j = longitud - 1;

    while (i < j) {
        char temp = texto[i];
        texto[i] = texto[j];
        texto[j] = temp;
        i++;
        j--;
    }
}

int main() {
    const int longitudMaxima = 100;

    char texto[longitudMaxima];

    std::cout << "Ingrese el texto: ";
    std::cin.getline(texto, longitudMaxima);

    invertirTexto(texto);

    std::cout << "Texto invertido: " << texto << std::endl;

    return 0;
}
