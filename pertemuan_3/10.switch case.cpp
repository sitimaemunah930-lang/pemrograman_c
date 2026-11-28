#include <iostream>

int main() {
    int pilihan = 2;

    std::cout << "Menu:\n1. Lihat saldo\n2. Transfer\n3. Bayar tagihan\n";
    std::cout << "Pilihan Anda: " << pilihan << "\n\n";

    switch (pilihan) {
        case 1:
            std::cout << "Menampilkan saldo...\n";
            break;

        case 2:
            std::cout << "Memulai proses transfer...\n";
            break;

        case 3:
            std::cout << "Membuka menu pembayaran tagihan...\n";
            break;

        default:
            std::cout << "Pilihan tidak valid.\n";
            break;
    }

    // Fall-through yang disengaja: huruf kecil dan besar diperlakukan sama
    char jawab = 'y';

    switch (jawab) {
        case 'y':
        case 'Y':
            std::cout << "Anda menjawab YA.\n";
            break;

        case 'n':
        case 'N':
            std::cout << "Anda menjawab TIDAK.\n";
            break;

        default:
            std::cout << "Jawaban tidak dikenali.\n";
            break;
    }

    // Contoh fall-through tak sengaja (bug) karena lupa break.
    // [[fallthrough]] hanya menandai bahwa ini disengaja; perilakunya tetap jatuh.
    int k = 1;

    std::cout << "Tanpa break: ";

    switch (k) {
        case 1:
            std::cout << "Satu ";
            [[fallthrough]];

        case 2:
            std::cout << "Dua ";
            [[fallthrough]];

        case 3:
            std::cout << "Tiga ";
            [[fallthrough]];

        default:
            break;
    }

    std::cout << '\n';

    return 0;
}