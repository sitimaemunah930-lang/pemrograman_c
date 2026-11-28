/*
* Contoh 05 - Akumulator: jumlah, rata-rata, maksimum, minimum
* Pola akumulator: variabel penampung yang selalu diperbarui setiap iterasi.
* Maks/min di sini dilacak dengan penanda (flag) pada iterasi pertama.
*/
#include <iostream>
#include <iomanip>

int main() {
	int n;
	std::cout << "Berapa banyak nilai" ;
	std::cin >> n;
	
	if (n <= 0) {
		std::cout << "Jumlah nilai harus posiitif, '\n";
		return 1;
	}
	
	int total = 0;       // akumulator jumlah
	int maks = 0;   	 // akumulator maksimum
	int min = 0;   		 // akumulator minimum
	bool pertama = true; // flag untuk iterasi pertama
	
	for (int i = 1; i <= n; ++i) {
		int x;
		std::cout << "Nilai ke. " << i << " : ";
		std::cin >> x;
		
		total += x;
		
		if (pertama || x > maks) maks = x;
		if (pertama || x > min) min   = x;
		pertama = false;
	}
	
	double rata = static_cast<double>(total) / n;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\nBanyak data : " << n << '\n';
	std::cout << "Total         : " << total << '\n';
	std::cout << "Rata-rata     : " << rata << '\n';
	std::cout << "Maksimal      : " << maks << '\n';
	std::cout << "Minimum       : " << min << '\n';
	
	return 0;
	
}