/*
* Contoh 06 - Perulangan Bersarang (nested loop): Tabel Perkalian
* Loop luar mengatur baris, loop dalam mengatur kolom.
* Jumlah total iterasi = (banyak baris) x (banyak kolom).
*/

#include <iostream>
#include <iomanip>

int main() {
    int n = 5;
    std::cout << "Tabel perkalian 1.." << n << "\n\n";

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << '\n'; // Pindah baris setiap selesai satu baris
    }
    
    return 0;
}