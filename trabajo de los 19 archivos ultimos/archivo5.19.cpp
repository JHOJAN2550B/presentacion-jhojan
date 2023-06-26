#include <iostream>

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i*i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    std::cout << "Ingrese un número natural mayor o igual a 1: ";
    std::cin >> numero;

    if (esPrimo(numero)) {
        std::cout << "El número es primo." << std::endl;
    } else {
        std::cout << "El número no es primo." << std::endl;
    }

    return 0;
}