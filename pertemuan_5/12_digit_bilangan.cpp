/*
* Contoh 12 - Mengolah Digit Bilangan dengan while
* Teknik memakai % 10 (ambil digit terakhir) dan / 10 (buang digit terakhir).
* while lebih tepat di sini karena jumlah digit belum diketahui pasti.
*/

#include <iostream>

int main() {
    long long n;

    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Bilangan tidak boleh negatif.\n";
        return 1;
    }

    long long sementara = n;
    int jumlahDigit = 0;
    int total = 0;
    long long balik = 0;

    while (sementara > 0) {
        int digit = static_cast<int>(sementara % 10);  // ambil digit terakhir
        ++jumlahDigit;
        total += digit;
        balik = balik * 10 + digit;						// bangun bilangan terbalik
        sementara /= 10;								// buang digit terakhir
    }

    std::cout << "Banyak digit : " << jumlahDigit << '\n';
    std::cout << "Jumlah digit : " << total << '\n';
    std::cout << "Terbalik     : " << balik << '\n';

    return 0;
}
