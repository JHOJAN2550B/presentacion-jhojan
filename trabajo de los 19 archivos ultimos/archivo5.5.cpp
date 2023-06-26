#include <iostream>

int main() {
    int limiteMaximo, base;

    // Bucle do-while para validar la entrada del límite máximo
    do {
        std::cout << "Ingrese el límite máximo (positivo): ";
        std::cin >> limiteMaximo;
    } while (limiteMaximo <= 0);

    // Bucle do-while para validar la entrada de la base
    do {
        std::cout << "Ingrese la base (positiva): ";
        std::cin >> base;
    } while (base <= 0);

    // Bucle for para escribir las potencias menores que el límite máximo
    for (int potencia = 1; potencia <= limiteMaximo; potencia *= base) {
        std::cout << potencia << " ";
    }

    std::cout << std::endl;

    return 0;
}