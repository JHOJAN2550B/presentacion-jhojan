#include <iostream>

int main() {
    int m = 30;  // Número de elementos a sumar
    int suma = 0;  // Variable para almacenar la suma
    int contador = 0;  // Variable para contar los números pares
    int numero = 2;  // Primer número par

    while (contador < m) {
        suma += numero;
        numero += 2;  // Siguiente número par
        contador++;
    }

    std::cout << "La suma de los primeros " << m << " números pares es: " << suma << std::endl;

    return 0;
}