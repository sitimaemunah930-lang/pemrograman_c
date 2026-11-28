#include<iostream>

int indeksMaks(const int data[], int n) {
	if (n <= 0) return -1;
	int terbaik = 0;
	for (int i = 1; i < n; ++i) {
		if (data[i] > data[terbaik]) {
			terbaik =i;
		}
	}
	return terbaik;
}

int indeksMin(const int data[], int n) {
	if (n <= 0) return -1;
	int terbaik = 0;
	for (int i = 1; i < n; ++i) {
		if (data[i] < data[terbaik]) {
			terbaik = i;
		}
	}
	return terbaik;
}

double rataRata(const int data[], int n) {
	if (n <= 0) return 0.0;
	int total = 0;
	for (int i = 0; i < n; ++i) {
		total += data[i];
	} 
	return static_cast<double>(total) / n;
}

int main() {
	const int N  = 7;
	int nilai[N] = {72, 88, 65, 90, 78, 90, 55};
	
	int iMaks = indeksMaks(nilai, N);
	int iMin  = indeksMin(nilai, N);
	double rata = rataRata(nilai, N);
	
	std::cout << "Data : ";
	for (int x : nilai) std::cout << x << ' ';
	std::cout << "\n\n";
	
	std::cout << "Nilai maksimum  : " << nilai[iMaks]
			  << "(indeks " << iMaks << ")\n";
	std::cout << "Nilai minimum   : " << nilai[iMin]
			  << "indeks  " << iMin << ")\n";
	std::cout << "Rentang         : " << nilai[iMaks] - nilai[iMin] << '\n';
	std::cout << "Rata-rata       : " << rata << '\n';
	std::cout << "Di atas rata-rata: ";
	for (int i =0; i < N; ++i) {
		if (nilai[i] > rata) {
			std::cout << nilai[i] << ' ';
		}
	}
	std::cout << '\n';
	
	// perhatikan: nilai maksimum 90 muncul dua kali, tetapi indeksmaks
	// mengembalikan kemunculan PERTAMA krena memkai perbandingan '>'.
	return 0;
	}