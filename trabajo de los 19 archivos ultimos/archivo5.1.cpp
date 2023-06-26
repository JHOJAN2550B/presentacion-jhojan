#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número positivo: ";
    std::cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    std::cout << "La suma de los números desde 1 hasta " << n << " es: " << suma << std::endl;

    return 0;
}