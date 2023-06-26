#include <iostream>

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    return sumaDivisores == numero;
}

int main() {
    int tope;
    std::cout << "Ingrese el número entero positivo tope: ";
    std::cin >> tope;

    std::cout << "Números perfectos menores o iguales a " << tope << ":" << std::endl;

    for (int i = 1; i <= tope; i++) {
        if (esNumeroPerfecto(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}