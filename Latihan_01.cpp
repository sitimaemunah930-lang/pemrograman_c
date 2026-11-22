#include <iostream>

int main() {
    const int JUMLAH = 5;
    int nilai[JUMLAH] = {78, 85, 62, 90, 70};

    std::cout << "Isi array nilai:\n";
    for (int i = 0; i < JUMLAH; ++i) {
        std::cout << " nilai[" << i << "] = " << nilai[i] << '\n';
    }

    // Akses langsung melalui indeks: elemen pertama dan terakhir.
    std::cout << "\nElemen pertama : " << nilai[0] << '\n';
    std::cout << "Elemen terakhir : " << nilai[JUMLAH - 1] << '\n';

    // Elemen array dapat diubah seperti variabel biasa.
    nilai[2] = 75;
    std::cout << "Setelah nilai[2] diubah menjadi 75: " << nilai[2] << '\n';

    // Ukuran array dapat dihitung dengan sizeof selama array masih utuh
    // (belum meluruh menjadi pointer, misalnya saat dikirim ke fungsi).
    std::cout << "\nUkuran satu elemen : " << sizeof(nilai[0]) << " byte\n";
    std::cout << "Ukuran seluruh array : " << sizeof(nilai) << " byte\n";
    std::cout << "Banyak elemen : " << sizeof(nilai) / sizeof(nilai[0]) << '\n';

    return 0;
}