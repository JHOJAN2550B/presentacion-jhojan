#include <iostream>

int main() {
    int i = 1, n;
    std::cin >> n;

    while (i <= n) {
        if ((i % n) == 0) {
            ++i;
        }
        else {
            break;
        }
    }

    std::cout << i << std::endl;
    return 0;
}