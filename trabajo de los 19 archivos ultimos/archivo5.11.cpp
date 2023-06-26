#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "La cantidad de números debe ser mayor que 0." << std::endl;
        return 0;
    }

    int numero;
    int suma = 0;
    int maximo = INT_MIN;  // Valor inicial mínimo
    int minimo = INT_MAX;  // Valor inicial máximo

    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el número " << (i + 1) << ": ";
        std::cin >> numero;

        suma += numero;

        if (numero > maximo) {
            maximo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }
    }

    double media = static_cast<double>(suma) / n;

    std::cout << "El número más grande es: " << maximo << std::endl;
    std::cout << "El número más pequeño es: " << minimo << std::endl;
    std::cout << "La media de los números es: " << media << std::endl;

    return 0;
}