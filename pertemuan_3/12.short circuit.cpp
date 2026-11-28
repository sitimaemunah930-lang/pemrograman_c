#include <iostream>

int main() {
    int a = 10, b = 0;

    // Tanpa pengaman: a / b akan menghasilkan undefined behavior
    // Dengan &&, a/b hanya dihitung bila b != 0
    if (b != 0 && a / b > 2) {
        std::cout << "a/b lebih besar dari 2\n";
    } else {
        std::cout << "Pembagian aman dilewati (b = 0)\n";
    }

    // Efek samping yang tidak berjalan karena short-circuit
    int i = 0;
    bool aktif = false;

    if (aktif && ++i > 0) {
        // tidak dieksekusi
    }

    std::cout << "Nilai i setelah if: " << i
              << " (++i tidak dijalankan)\n";

    // || juga short-circuit: operand kanan dilewati bila kiri true
    int j = 0;
    bool login = true;

    if (login || ++j > 0) {
        std::cout << "Login valid\n";
    }

    std::cout << "Nilai j setelah if: " << j
              << " (++j tidak dijalankan)\n";

    return 0;
}