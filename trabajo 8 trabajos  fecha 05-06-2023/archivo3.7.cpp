#include <iostream>

int main() {
    int hectometros, decametros, metros;

    std::cout << "INGRESE LA LONGITUD DEL PERIMETRO EN HECTOMETROS: ";
    std::cin >> hectometros;

    std::cout << "INGRESE LA LONGITUD DEL PERIMETRO EN DECAMETROS: ";
    std::cin >> decametros;

    std::cout << "INGRESE LA LONGITUD DEL PERIMETRO EN METROS: ";
    std::cin >> metros;

    // Calcular el perímetro en decímetros
    int perimetro_decimetros = hectometros * 10000 + decametros * 10 + metros / 10;

    std::cout << "EL PERIMETRO DEL TERRENO ES: " << perimetro_decimetros << " DECIMETROS" << std::endl;

    return 0;
}