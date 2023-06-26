#include <iostream>

int main() {
    int numero;

    std::cout << "INGRESE UN NUMERO ENTERO: ";
    std::cin >> numero;

    int doble = numero * 2;
    int triple = numero * 3;

    std::cout << "EL DOBLE DEL NUMERO ES: " << doble << std::endl;
    std::cout << "EL TRIPLE DEL NUMERO ES: " << triple << std::endl;

    return 0;
}