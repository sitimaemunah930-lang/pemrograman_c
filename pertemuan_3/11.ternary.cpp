#include <iostream>
#include <string>

int main() {
    int a = 10, b = 20;

    int maks = (a > b) ? a : b;
    std::cout << "Nilai maksimum: " << maks << '\n';

    int nilai = 80;
    std::string status = (nilai >= 75) ? "LULUS" : "TIDAK LULUS";
    std::cout << "Status: " << status << '\n';

    // Bersarang (kurang disarankan untuk logika rumit)
    int n = 0;
    const char* jenis = (n > 0) ? "positif" : (n < 0 ? "negatif" : "nol");

    std::cout << "Bilangan " << n << " adalah " << jenis << '\n';

    return 0;
}