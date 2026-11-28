
#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    const int PIN_BENAR = 1234;
    const int BIAYA_ADMIN = 2500;

    long long saldo = 500000;
    int pin, pilihan;
    int percobaan;

    // Mengatur tampilan uang menjadi dua angka desimal
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "================================\n";
    std::cout << "       SIMULASI MESIN ATM       \n";
    std::cout << "================================\n";

    // Perulangan for untuk verifikasi PIN, maksimal 3 kali
    for (percobaan = 1; percobaan <= 3; ++percobaan) {
        std::cout << "Masukkan PIN: ";

        if (!(std::cin >> pin)) {
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), '\n'
            );
            pin = -1;
        }

        if (pin == PIN_BENAR) {
            std::cout << "PIN benar. Selamat datang!\n";
            break;
        }

        std::cout << "PIN salah. Sisa percobaan: "
                  << 3 - percobaan << '\n';
    }

    // Jika PIN salah 3 kali, program berhenti
    if (percobaan > 3) {
        std::cout << "PIN salah 3 kali. Kartu diblokir!\n";
        return 0;
    }

    // do-while untuk menampilkan menu minimal satu kali
    do {
        std::cout << "\n========== MENU ATM ==========\n";
        std::cout << "1. Cek Saldo\n";
        std::cout << "2. Setor Tunai\n";
        std::cout << "3. Tarik Tunai\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih menu: ";

        if (!(std::cin >> pilihan)) {
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), '\n'
            );
            pilihan = 0;
        }

        // Memilih aksi menggunakan switch-case
        switch (pilihan) {
            case 1:
                // Menampilkan saldo saat ini
                std::cout << "Saldo Anda: Rp"
                          << static_cast<double>(saldo) << '\n';
                break;

            case 2: {
                long long nominal;

                // do-while untuk validasi nominal setor
                do {
                    std::cout << "Nominal setor "
                              << "(kelipatan Rp10.000): Rp";

                    if (!(std::cin >> nominal)) {
                        std::cin.clear();
                        std::cin.ignore(
                            std::numeric_limits<std::streamsize>::max(),
                            '\n'
                        );
                        nominal = 0;
                    }

                    if (nominal <= 0 || nominal % 10000 != 0) {
                        std::cout
                            << "Nominal tidak valid. Coba lagi.\n";
                    }
                } while (nominal <= 0 || nominal % 10000 != 0);

                saldo += nominal;

                std::cout << "Setor tunai berhasil.\n";
                std::cout << "Saldo sekarang: Rp"
                          << static_cast<double>(saldo) << '\n';
                break;
            }

            case 3: {
                long long nominal;

                // do-while untuk validasi nominal tarik
                do {
                    std::cout << "Nominal tarik "
                              << "(kelipatan Rp50.000): Rp";

                    if (!(std::cin >> nominal)) {
                        std::cin.clear();
                        std::cin.ignore(
                            std::numeric_limits<std::streamsize>::max(),
                            '\n'
                        );
                        nominal = 0;
                    }

                    if (nominal <= 0 || nominal % 50000 != 0) {
                        std::cout
                            << "Nominal tidak valid. Coba lagi.\n";
                    }
                } while (nominal <= 0 || nominal % 50000 != 0);

                // Memeriksa saldo termasuk biaya admin
                if (nominal + BIAYA_ADMIN <= saldo) {
                    saldo -= nominal + BIAYA_ADMIN;

                    std::cout << "Penarikan berhasil.\n";
                    std::cout << "Uang ditarik: Rp"
                              << static_cast<double>(nominal) << '\n';
                    std::cout << "Biaya admin : Rp"
                              << static_cast<double>(BIAYA_ADMIN)
                              << '\n';
                    std::cout << "Saldo sekarang: Rp"
                              << static_cast<double>(saldo) << '\n';
                } else {
                    std::cout
                        << "Saldo tidak cukup untuk penarikan "
                        << "dan biaya admin.\n";
                    std::cout << "Saldo Anda: Rp"
                              << static_cast<double>(saldo) << '\n';
                }
                break;
            }

            case 4:
                std::cout << "Terima kasih. Silakan ambil kartu Anda.\n";
                break;

            default:
                std::cout << "Pilihan tidak valid. Pilih 1-4.\n";
        }

    } while (pilihan != 4);

    return 0;
}
