#include <iostream>

int main() {
    float a, b, c, d, e, f;

    std::cout << "INGRESE LOS COEFICIENTES A, B, C, D, E, F DEL SISTEMA LINIAL:\n";
    std::cout << "ax + by = c\ncx + dy = f\n";

    std::cout << "A: ";
    std::cin >> a;

    std::cout << "B: ";
    std::cin >> b;

    std::cout << "C: ";
    std::cin >> c;

    std::cout << "D: ";
    std::cin >> d;

    std::cout << "E: ";
    std::cin >> e;

    std::cout << "F: ";
    std::cin >> f;

    // Calcular la solución
    float determinante = a * d - b * c;
    float x = (e * d - b * f) / determinante;
    float y = (a * f - e * c) / determinante;

    std::cout << "LA SOLUCION DEL SISTEMA ES:\n";
    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;

    return 0;
}