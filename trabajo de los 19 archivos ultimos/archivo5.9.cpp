#include <iostream>

int main() {
    int numero, numeroInvertido = 0;

    std::cout << "Ingrese un entero positivo: ";
    std::cin >> numero;

    // Invertir los dígitos del número
    while (numero > 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    std::cout << "El número invertido es: " << numeroInvertido << std::endl;

    return 0;
}