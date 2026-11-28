#include <iostream>
#include <iomanip>

int main() {
    int jam = 3;
    bool member = true;
    long tarif;

    if (jam <= 1) {
        tarif = 5000;
    } else {
        tarif = 5000 + (jam - 1) * 3000;
    }

    if (tarif > 50000) {
        tarif = 50000;  // batas maksimum per hari
    }

    if (member) {
        tarif -= 2000;

        if (tarif < 0) {
            tarif = 0;  // pengaman agar tidak negatif
        }
    }

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Jam parkir : " << jam << " jam\n";
    std::cout << "Status     : " << (member ? "Member" : "Non-member") << '\n';
    std::cout << "Tarif      : Rp" << tarif << '\n';

    return 0;
}