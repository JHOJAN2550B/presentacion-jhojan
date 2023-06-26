#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;

    double sumaParcial = 1.0;  // Suma inicial con el primer término
    double termino = 1.0;      // Primer término de la serie

    std::cout << "Suma 0: " << sumaParcial << std::endl;

    for (int n = 1; n <= 15; n++) {
        termino *= x / n;
        sumaParcial += termino;
        std::cout << "Suma " << n << ": " << sumaParcial << std::endl;
    }

    return 0;
}