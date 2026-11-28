#include <iostream>

int main() {
	int nilai = 82;
	
	char huruf;
	if (nilai >= 85) {
		huruf = 'A';
	} else if (nilai >= 75) {
		huruf = 'B';
	} else if (nilai >= 65) {
		huruf = 'C';
	} else if (nilai >= 50) {
		huruf = 'D';
	} else {
		huruf = 'E';
	}
	
	std::cout << "Nilai " << nilai << " -> huruf mutu " << huruf << '\n';
	
	// Contoh urutan yang SALAH: ambang rendah diletakkan lebih dahulu
	int n = 90;
	char salah;
	if (n >= 50) {
		salah = 'D';           // 90 memenuhi syarat ini, sehingga...
	} else if (n >= 85) {
		salah = 'A';           // ...baris ini tidak pernah tercapai
	} else {
		salah = 'E';
	}
	std::cout << "Urutan salah menghasilkan: " << salah
	          << " (seharusnya A)\n";
	          
	return 0;
	
}