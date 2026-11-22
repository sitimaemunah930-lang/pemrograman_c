#include<iomanip>
#include<iostream>
#include<string>

int main() {
	const int N = 20;
	int nilai[N] = {85, 70, 90, 70, 60, 75, 85, 90, 70, 65,
					80, 95, 70, 85, 60, 75, 80, 90, 85, 70};
	
	// frekuensi[v] berapa kali nilai v muncul (v = 0..100).
	int frekuensi[101] = {};
	
	for (int i = 0; i < N; ++i) {
		++frekuensi[nilai[i]];
	}
	
	std::cout << "Nilai yang muncul:\n";
	for (int v = 0; v <= 100; ++v) {
		if (frekuensi[v] > 0) {
		std::cout << " " << v << " : " << frekuensi[v] << "kali\n";
		}
	}
	
	// modus: nilai dengan frekuensi tertinggi (kemunculan pertama).
	int modus = 0;
	for (int v = 1; v <= 100; ++v) {
		if (frekuensi[v] > frekuensi[modus]) {
			modus = v;
		}
	}
	std::cout << "\nModus : " << modus
			  << " (" << frekuensi[modus] << "kali)\n";
			  
	
	// Histogram per rentang 10 nilai : 0-9, 10-19,....,100.
	int bin[11] = {};
	for (int i = 0; i < N; ++i) {
		++bin[nilai[i] / 10];
	}
	std::cout << "\nHistogram rentang nilai :\n";
	for (int b = 0; b < 11; ++b) {
		int bawah = b * 10;
		int atas = (b == 10) ? 100 : bawah + 9;
		std::string label = (b == 10)
								? std::string("100")
								: std::to_string(bawah) + "-" + std::to_string(atas);
		std::cout << ' ' <<std::left << std::setw(6) << label
				  << std::right << "|";
		for (int k = 0; k < bin[b]; ++b) {
			std::cout << '#';
		}
		std::cout << " (" << bin[b] << ")\n";
	}
	return 0;
}