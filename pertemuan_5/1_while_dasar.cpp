/*
* Contoh 01 - Perulangan while Dasar
* Mengulang pernyataan selama kondisi bernilai benar (true).
* Loop berhenti ketika kondisi menjadi salah (false).
*/

#include <iostream>

int main() {
	// Hitung dari 1 sampai 5
	int i = 1;          // inisialisasi variabel kendali
	while (i <=5) {   // kondisi diperiksa SEBELUM badan loop
	std::cout << "Hitung: " << i << '\n';
	++i;              // update; tanpa ini -> infinite loop
	}
	std::cout << "Selesai. Nilai akhir i = " << i << '\n';
	
	// Menjumlahkan deret 1 + 2 + ... + n memakai akumulator
	int n = 10;
	int jumlah = 0;      // akumulator
	int j = 1;
	while (j <= n) {
		jumlah += j;    // jumlah = jumlah + j
		++j;
		
	}
	std::cout << "jumlah 1.." << n << " = " << jumlah << '\n';
	
	return 0;

}