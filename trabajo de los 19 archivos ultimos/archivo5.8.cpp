#include <iostream>

#define M 5

inline double f(double x) {
    return (x * x) + M;
}

int main() {
    double x = 0.0;

    for (int i = 0; i <= 10; i++) {
        double resultado = f(x);
        std::cout << "Para x = " << x << ", el resultado es: " << resultado << std::endl;
        x += 0.5;
    }

    return 0;
}