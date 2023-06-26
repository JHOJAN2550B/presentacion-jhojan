#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número positivo: ";
    std::cin >> n;

    // Imprimir la parte superior del patrón
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "\t";
        }
        std::cout << std::endl;
    }

    // Imprimir la parte inferior del patrón
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}