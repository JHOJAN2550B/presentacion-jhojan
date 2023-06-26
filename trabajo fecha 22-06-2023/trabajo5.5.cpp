#include <iostream>

int main() {
    int i = 1;
    while (i * i < 10) {
        int j = i;
        while (j * j < 100) {
            std::cout << (i + j) << " ";
            j *= 2;
        }
        i++;
        std::cout << std::endl;
    }
    std::cout << "\n***\n";
    
    return 0;
}