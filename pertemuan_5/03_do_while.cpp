/*
* Contoh 03 - Perulangan do-while
* Badan loop dijalankan MINIMAL satu kali, karena kondisi diperiksa di AKHIR.
*/

#include <iostream>

int main() {
	int i = 1;
	do {
		std::cout << "do-while i = " << i << '\n';
		++i;
	} while (i <= 5);
	
	// Kondisi langsung salah: badan tetap dijalankan satu kali
	int x = 100;
	do {
		std::cout << "dijalankan sekali walau kondisi salah, x = " << x << '\n';
		++x;
	} while (x < 10);
	
	std::cout << "Nilai x akhir = " << x << '\n';
	return 0;
}