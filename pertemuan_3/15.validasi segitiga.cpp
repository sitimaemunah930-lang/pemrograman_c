#include <iostream>

int main() {
    double a = 5.0, b = 5.0, c = 6.0;

    bool positif = (a > 0 && b > 0 && c > 0);

    bool valid = positif &&
                 (a + b > c) &&
                 (a + c > b) &&
                 (b + c > a);

    if (!valid) {
        std::cout << "Ukuran sisi tidak membentuk segitiga yang valid.\n";
        return 1;
    }

    // Klasifikasi: sama sisi, sama kaki, atau sembarang
    if (a == b && b == c) {
        std::cout << "Segitiga SAMA SISI\n";
    } else if (a == b || b == c || a == c) {
        std::cout << "Segitiga SAMA KAKI\n";
    } else {
        std::cout << "Segitiga SEMBARANG\n";
    }

    return 0;
}