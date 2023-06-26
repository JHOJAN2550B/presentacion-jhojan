#include <iostream>
#include <cmath> // Biblioteca para la función sqrt()

int main() {
    float lado_a, lado_b, hipotenusa;

    std::cout << "INGRESE LA LONGITUD DEL LADO A: ";
    std::cin >> lado_a;

    std::cout << "INGRESE LA LONGITUD DEL LADO B: ";
    std::cin >> lado_b;

    // Calcular la hipotenusa utilizando la fórmula
    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    std::cout << "LA HIPOTENUSA: " << hipotenusa << std::endl;

    return 0;
}