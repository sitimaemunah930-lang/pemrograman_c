
/*
* Contoh 09 - Uji Bilangan Prima dengan break
* break dimanfaatkan untuk keluar lebih awal begitu ditemukan satu pembagi,
* sehingga program tidak melakukan pekerjaan yang sia-sia.
*/
#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan bilangan bulat > 1: ";
    std::cin >> n;

    bool prima = (n > 1);

    // Cukup uji pembagi sampai akar n: bila ada pembagi d, maka n/d juga
    // membagi n, dan salah satunya selalu <= akar n.
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            prima = false;
            break; // sudah pasti bukan prima, tak perlu lanjut
        }
    }

    if (prima)
        std::cout << n << " adalah bilangan PRIMA\n";
    else
        std::cout << n << " BUKAN bilangan prima\n";

    return 0;
}