/*
* Contoh 02 - Perulangan for Dasar
* for merangkum inisialisasi, kondisi, dan update dalam satu baris,
* sehingga paling cocok ketika jumlah iterasi sudah diketahui.
*/
#include <iostream>

int main() {
	// Naik dari 0 sampai 4
	for (int i = 0; i < 5; ++i) {
		std::cout << "i = " << i << '\n';	
	}

    std::cout << '\n';
    
    // Turun dari 5 sampai 1
    for (int i = 5; i >= 1; --i) {
    	std::cout << "turun: " << i << '\n';
	}

	std::cout << '\n';
	
	// Langkah (step) lebih dari satu: kelipatan 2 sampai 10
	for (int i = 2; i <= 10; i +=2) {
		std::cout << "genap: " << i << '\n';
	}
	
	std::cout << '\n';
	
	// Beberapa variabel kendali sekaligus
	for (int i = 0, j = 10; i < j; ++i, --j) {
		std::cout << "i=" << i << "  j=" << j << '\n';
		
	}

    return 0;
}