#include <iostream>

int main() {
    int n = 20;
    double suma = 0.0;

    for (int i = 1; i <= n; i++) {
        double termino = static_cast<double>(i * i) / (3 * i);
        suma += termino;
    }

    std::cout << "La suma de los 20 primeros términos de la serie es: " << suma << std::endl;

    return 0;
}