#include <iostream>

int euclides(int a, int b) {
    // Aplicar el algoritmo de Euclides
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número entero positivo: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número entero positivo: ";
    std::cin >> num2;

    // Verificar que los números sean positivos
    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Los números deben ser enteros positivos." << std::endl;
        return 0;
    }

    // Calcular el máximo común divisor utilizando el algoritmo de Euclides
    int mcd = euclides(num1, num2);

    std::cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

    return 0;
}