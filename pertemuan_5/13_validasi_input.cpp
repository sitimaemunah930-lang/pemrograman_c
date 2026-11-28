/*
* Contoh 13 - Validasi Masukan dengan do-while
* do-while adalah pilihan alami untuk validasi: minta masukan, lalu
* ulangi permintaan itu selama masukan belum sah.
*/
#include <iostream>

int main() {
    int nilai;

    do {
        std::cout << "Masukkan nilai (0-100): ";
        std::cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            std::cout << "Nilai di luar rentang, coba lagi.\n";
        }

    } while (nilai < 0 || nilai > 100);

    std::cout << "Nilai diterima: " << nilai << '\n';

    return 0;
}
