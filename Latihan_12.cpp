#include<iostream>

int binaryIteratif(const int data[], int n, int target, int& langkah) {
	int kiri = 0;
	int kanan = n - 1;
	langkah = 0;
	
	while (kiri <= kanan ) {
		++langkah;
		int tengah = kiri + (kanan - kiri) / 2; // hindari overflow
		if (data[tengah] == target) {
			return tengah;
		}  
		if (data[tengah] < target) {
			kiri = tengah + 1;
		} else{
			kanan = tengah -1;
		}
	}
	return -1;
}
int binaryRekursif(const int data[], int kiri, int kanan, int target, int langkah) {
	if (kiri > kanan) {
		return -1;
	}
	++langkah;
	int tengah = kiri + (kanan - kiri) / 2;
	if (data[tengah] == target) {
		return tengah;
	}
	if (data[tengah] < target) {
		return binaryRekursif(data, tengah + 1, kanan, target, langkah)
	}
	return binaryRekursif(data, tengah - 1; target, langkah)
}

int main() {
	const int N = 10;
	int data[] = {11, 22, 30, 33, 45, 57, 60, 78, 90, 99 };
	
	std::cout << "Data terurut : ";
	for (int x : data) std::cout << x << ' ';
	std::cout << "\n\n";
	
	int target[] = {30, 33, 100};
	for (int t : target) {
		int langkah = 0;
		int posisi = binaryIterasif(data, N, t, langkah);
		std::cout << "Iteratif cari " << t << " -> indeks " << posisi
				  << " (" << langkah << "langkah)\n";
				  
				  
		langkah = 0;
		posisi = binaryRekursif(data, 0, N - 1, t, langkah);
		std::cout << "Rekursif cari " << t << " -> indeks" << posisi
				  << " (" << langkah << "langkah)\n";
	}
	
	// Bandingkan : pencaria linear pada 100 elemen butuh sampai 100langkah,
	// binary seacrh hanya sekitar log2(100) ~ 7 langkah. namun binary search
	// pada data TIDAK terurut akan memberi hasil salah.
	return 0;
		
}
