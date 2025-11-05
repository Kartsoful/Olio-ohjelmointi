#include <iostream>
#include <cstdlib> // Hox uusi kirjasto!

void sarja(int sluku) {
    std::srand(sluku);
    // Tähän oma koodi
    int x = 0;

    while (x < 5) {
        int satunnaisluku = std::rand() % 20;
        std::cout << satunnaisluku << std::endl;
        x = x + 1;
    }
}

int main() {
    sarja(8);
    sarja(54);
    return 0;
}
