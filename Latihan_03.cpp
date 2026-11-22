#include <algorithm>
#include <array>
#include <iostream>

int main() {
    int lengkap[5] = {10, 20, 30, 40, 50};
    int sebagian[5] = {1, 2}; // sisanya otomatis nol
    int kosong[5] = {}; // semuanya nol
    int otomatis[] = {4, 8, 15, 16, 23, 42};
    const int UKURAN = static_cast<int>(sizeof(otomatis) / sizeof(otomatis[0]));

    // Mengisi seluruh elemen dengan satu nilai memakai std::fill.
    int seragam[6];
    std::fill(seragam, seragam + 6, 7);

    // std::array menyimpan ukuran sebagai bagian dari tipe.
    std::array<int, 4> tetap = {9, 8, 7, 6};
    std::array<int, 4> nol {};

    tetap.fill(1);

    std::cout << "lengkap : ";
    for (int x : lengkap) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "sebagian : ";
    for (int x : sebagian) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "kosong : ";
    for (int x : kosong) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "otomatis : ";
    for (int x : otomatis) std::cout << x << ' ';
    std::cout << "(ukuran " << UKURAN << ")\n";

    std::cout << "seragam : ";
    for (int x : seragam) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "std::array tetap : ";
    for (int x : tetap) std::cout << x << ' ';
    std::cout << "(size = " << tetap.size() << ")\n";

    std::cout << "std::array nol : ";
    for (int x : nol) std::cout << x << ' ';
    std::cout << '\n';

    return 0;
}