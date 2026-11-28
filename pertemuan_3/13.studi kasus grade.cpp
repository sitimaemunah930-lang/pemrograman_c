#include <iostream>
#include <iomanip>

int main() {
    double tugas = 85.0;
    double uts   = 78.0;
    double uas   = 90.0;

    // Langkah 4: validasi rentang sebelum menghitung
    bool valid = (tugas >= 0 && tugas <= 100) &&
                 (uts   >= 0 && uts   <= 100) &&
                 (uas   >= 0 && uas   <= 100);

    if (!valid) {
        std::cout << "Input tidak valid: nilai harus 0-100.\n";
        return 1;
    }

    // Langkah 2 & 3: hitung nilai akhir dan bulatkan
    double nilaiAkhir = 0.20 * tugas + 0.30 * uts + 0.50 * uas;
    int akhir = static_cast<int>(nilaiAkhir + 0.5);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nilai akhir (mentah): " << nilaiAkhir << '\n';
    std::cout << "Nilai akhir (bulat):  " << akhir << '\n';

    // Langkah 5: huruf mutu dengan else-if ladder
    char huruf;

    if (akhir >= 85)
        huruf = 'A';
    else if (akhir >= 75)
        huruf = 'B';
    else if (akhir >= 65)
        huruf = 'C';
    else if (akhir >= 50)
        huruf = 'D';
    else
        huruf = 'E';

    std::cout << "Huruf mutu: " << huruf << '\n';

    // Langkah 6: predikat dengan switch-case
    switch (huruf) {
        case 'A':
            std::cout << "Predikat  : Istimewa\n";
            break;

        case 'B':
            std::cout << "Predikat  : Sangat Baik\n";
            break;

        case 'C':
            std::cout << "Predikat  : Baik\n";
            break;

        case 'D':
            std::cout << "Predikat  : Cukup\n";
            break;

        default:
            std::cout << "Predikat  : Kurang\n";
            break;
    }

    // Langkah 7: status kelulusan dengan ternary
    std::cout << "Status    : "
              << (akhir >= 50 ? "Lulus" : "Tidak Lulus")
              << '\n';

    // Catatan khusus untuk nilai tepat di ambang batas
    if (akhir == 50) {
        std::cout << "Catatan   : Nilai tepat di ambang batas kelulusan.\n";
    }

    return 0;
}