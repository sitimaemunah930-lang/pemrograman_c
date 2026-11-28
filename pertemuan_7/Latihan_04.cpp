#include<array>
#include<iostream>
#include<stdexcept>

int ambilAman(const int data[], int ukuran, int indeks) {
	if (indeks < 0 || indeks >= ukuran) {
		return 0;
	} 
	return data[indeks];
}

int main () {
	int data[4] = {10, 20, 30, 40};
	const int N = 4;
	
	std::cout << "data[2]            = " << ambilAman(data, N, 2) << '\n';
	std::cout << "data[4] (di luar ) = " << ambilAman(data, N, 4)
			  << " (penandaan indeks tidak sah) \n";
			  
	// std::array::at() memeriksa batas dan melempar exception.
	std::array<int, 4> aman = {1, 2, 3, 4};
	try{
		std::cout << "aman.at(10)    = " << aman.at(10) << '\n';
	} catch (const std::out_of_range& e) {
		std::cout << "aman.at(10) ditolak : " << e.what() << '\n';
	}
	
	// Baris berikut SENGAJA tidak dijalankan karena undefined behavior:
	// data[4] = 99;
	// std::cout << data[4};
	// jangan pernah mengandalkan "Keberuntungan berjalan" pada kode seperti itu.
	
	std::cout << "\Selalu menggunakan indeks 0 sampai " << N - 1 << "\n";
	return 0;
}