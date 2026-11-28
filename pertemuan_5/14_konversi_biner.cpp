/*
* Contoh 14 - Konversi Desimal ke Biner dengan while
* Digit biner dibangkitkan dari digit paling kanan, sehingga kita perlu
* mencari pangkat dua terbesar lebih dahulu baru mencetak dari kiri.
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Masukkan bilangan desimal >= 0: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Bilangan harus >= 0.\n";
        return 1;
    }

    if (n == 0) {
        std::cout << "Biner: 0\n";
        return 0;
    }

    // Cari pangkat dua terbesar yang tidak melebihi n
    int pangkat = 1;
    while (pangkat <= n / 2) {
        pangkat *= 2;
    }

    std::cout << "Biner: ";

    while (pangkat >= 1) {
        std::cout << n / pangkat; // 1 bila sisa >= pangkat, selain itu 0
        n %= pangkat;
        pangkat /= 2;
    }

    std::cout << '\n';

    return 0;
}
