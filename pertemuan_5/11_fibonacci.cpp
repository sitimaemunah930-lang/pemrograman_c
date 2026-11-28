/*
* Contoh 11 - Deret Fibonacci
* Setiap suku adalah jumlah dua suku sebelumnya. Hanya diperlukan dua
* variabel penampung, sehingga tidak perlu array.
*/


#include <iostream>

int main() {
    int n;

    std::cout << "Berapa suku Fibonacci yang ditampilkan? ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "n harus positif.\n";
        return 1;
    }

    long long a = 0, b = 1;

    std::cout << "Deret Fibonacci: ";

    for (int i = 0; i < n; ++i) {
        std::cout << a;

        if (i < n - 1) {
            std::cout << ", ";
        }

        long long berikut = a + b;  // hitung suku berikutnya
        a = b;                      // geser penampung
        b = berikut;
    }

    std::cout << '\n';

    return 0;
}
