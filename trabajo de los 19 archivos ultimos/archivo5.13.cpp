#include <iostream>

int main() {
    for (int numero = 100; numero <= 999; numero++) {
        int digito1 = numero / 100;            // Obtener el primer dígito
        int digito2 = (numero / 10) % 10;      // Obtener el segundo dígito
        int digito3 = numero % 10;             // Obtener el tercer dígito

        int sumaCuadrados = (digito1 * digito1) + (digito2 * digito2) + (digito3 * digito3);
        int cociente = numero / 3;

        if (sumaCuadrados == cociente) {
            std::cout << numero << std::endl;
        }
    }

    return 0;
}