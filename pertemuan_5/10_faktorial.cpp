/*
* Contoh 10 - Faktorial dan Deret Harmonik
* Menunjukkan akumulasi perkalian (faktorial) dan penjumlahan pecahan.
* Catatan: 20! masih muat dalam long long, 21! sudah meluap (overflow).
*/

#include <iostream>
#include <iomanip>

int main() {
    int n;

    std::cout << "Masukkan n (0..20): ";
    std::cin >> n;

    if (n < 0 || n > 20) {
        std::cout << "n harus 0 sampai 20.\n";
        return 1;
    }

    // Menghitung faktorial
    long long faktorial = 1;

    for (int i = 2; i <= n; ++i) {
        faktorial *= i;
    }

    std::cout << n << "! = " << faktorial << '\n';

    // Menghitung deret harmonik: 1 + 1/2 + 1/3 + ... + 1/n
    // Gunakan 1.0 / i agar terjadi pembagian pecahan, bukan integer division.
    double harmonik = 0.0;

    for (int i = 1; i <= n; ++i) {
        harmonik += 1.0 / i;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Deret harmonik H("<< n << ") = " << harmonik << '\n';

    return 0;
}
