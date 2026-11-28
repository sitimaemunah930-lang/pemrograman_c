/*
* Contoh 15 - Studi Kasus Komprehensif: Rekap Nilai Praktikum
* Membaca sejumlah nilai mahasiswa lalu menghasilkan statistik
* (rata-rata, maksimum, minimum, jumlah lulus) dan histogram distribusi
* huruf mutu memakai nested loop.
*/

#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Jumlah mahasiswa: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "Jumlah harus positif.\n";
        return 1;
    }

    int total = 0;
    int maks = -1;
    int min = 101;
    int lulus = 0;
    int cA = 0, cB = 0, cC = 0, cD = 0, cE = 0;

    for (int i = 1; i <= n; ++i) {
        int nilai;

        std::cout << "Nilai mahasiswa " << i << ": ";
        std::cin >> nilai;

       // Validasi per iterasi: nilai tak sah diabaikan lalu diulang
        if (nilai < 0 || nilai > 100) {
            std::cout << "Nilai diabaikan: di luar 0-100.\n";
            --i;    			  // ulangi nomor mahasiswa yang sama
            continue;
        }

        // Menghitung total nilai
        total += nilai;						// akumulator jumlah
        if (nilai > maks) maks = nilai;		// akumulator maksimum
        if (nilai < min)  min = nilai;		// akumulator minimum
        if (nilai >= 60) ++lulus;			// pencacah kelulusan

        if (nilai >= 85)      ++cA;
        else if (nilai >= 75) ++cB;
        else if (nilai >= 65) ++cC;
        else if (nilai >= 50) ++cD;
        else                  ++cE;
}
    double rata = static_cast<double>(total) / n;

    // Menampilkan rekap nilai
    std::cout << "\n===== REKAP NILAI =====\n";
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Rata-rata : " << rata << '\n';
    std::cout << "Maksimum  : " << maks << '\n';
    std::cout << "Minimum   : " << min << '\n';
    std::cout << "Lulus     : " << lulus << " dari " << n << '\n';

    // Histogram dengan nested loop: loop luar kategori, loop dalam menggambar bintang
    std::cout << "\nDistribusi huruf mutu:\n";
    std::cout << "A : "; for (int k = 0; k < cA; ++k) std::cout << '*'; std::cout << " (" << cA << ")\n";
    std::cout << "B : "; for (int k = 0; k < cB; ++k) std::cout << '*'; std::cout << " (" << cB << ")\n";
    std::cout << "C : "; for (int k = 0; k < cC; ++k) std::cout << '*'; std::cout << " (" << cC << ")\n";
    std::cout << "D : "; for (int k = 0; k < cD; ++k) std::cout << '*'; std::cout << " (" << cD << ")\n";
    std::cout << "E : "; for (int k = 0; k < cE; ++k) std::cout << '*'; std::cout << " (" << cE << ")\n";

    return 0;
}
