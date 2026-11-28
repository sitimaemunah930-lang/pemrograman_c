#include <iostream>
#include <string>

int main() {
    bool sudahLogin = true;
    std::string peran = "admin";

    if (sudahLogin) {
        if (peran == "admin") {
            std::cout << "Selamat datang, Admin. Akses penuh diberikan.\n";
        } else if (peran == "operator") {
            std::cout << "Selamat datang, Operator. Akses terbatas.\n";
        } else {
            std::cout << "Peran tidak dikenal.\n";
        }
    } else {
        std::cout << "Silakan login terlebih dahulu.\n";
    }

    // Alternatif lebih datar memakai &&
    bool terverifikasi = true;
    int saldo = 120000;

    if (sudahLogin && terverifikasi && saldo >= 100000) {
        std::cout << "Transaksi besar diizinkan.\n";
    }

    return 0;
}