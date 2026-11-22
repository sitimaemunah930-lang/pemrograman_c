#include<iomanip>
#include<iostream>
#include<limits>
#include<string>

const int HARI = 7;
const int MAKS_PRODUK = 10;

// Membaca bilangan bulat dalam rentang tertentu, ulangi bila tidaksah.
int bacaBilangan(int minimum, int maksimum, const std::string& label) {
	int nilai;
	while (true) {
		std::cout << label;
		if (std::cin >> nilai && nilai >= minimum && nilai <= maksimum) {
			return 0;
		}
		std::cout << " ! Masukan harus bilangan " << minimum
				  << " Sampai " << maksimum << ".\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void bacaData(std::string nama[], int penjualan[][HARI], int& jumlahProduk) {
	jumlahProduk = bacaBilangan(1, MAKS_PRODUK, "jumlah produk (1 - 10): ");
	for (int i = 0; i < jumlahProduk; ++i) {
		std::cout << "\nProduk #" << (i + 1) << '\n';
		std::cout << " Nama                : ";
		std::getline(std::cin >> std::ws, nama[i]);
		for (int h = 0; h < HARI; ++h) {
			penjualan[i][h] = bacaBilangan(
				0, 1000,
				"  penjualan hari " + std:: to_string(h + 1) + ": ");
		}
	}
}

// Total satu baris (satu produk).
int totalProduk(const int penjualan[][HARI], int produk) {
	int total = 0;
	for (int h = 0; h < HARI; ++h) {
		total += penjualan[produk][h];
	}
	return total;
}

// Total satu kolam (satu hari) untuk semua produk.
int totalHari(const int penjualan[][HARI], int jumlahProduk, int hari) {
	int total = 0; 
	for (int i = 0; i < jumlahProduk; ++i) {
		total += penjualan[i][hari];
	}
	return total;
}

int totalSemua(const int penjualan[][HARI], int jumlahProduk) {
	int total = 0;
	for (int i = 0; i < jumlahProduk; ++i) {
		total += totalProduk(penjualan, i);
		}
		return total;
}

int indeksTerlaris(const int penjualan[][HARI], int jumlahProduk) {
	int terbaik = 0; 
	for (int i = 1; i < jumlahProduk; ++i) {
		if (totalProduk(penjualan, i) > totalProduk(penjualan, terbaik)) {
			terbaik = i;
		}
	}
	return terbaik;
}	

int hariTerbaik(const int penjualan[][HARI], int jumlahProduk) {
	int terbaik = 0;
	for (int h = 0; h < HARI; ++h) {
		if (totalHari(penjualan, jumlahProduk, h) >
			totalHari(penjualan, jumlahProduk, terbaik)) {
				terbaik = h;
			}
	}
	return terbaik;
}

// selection sort pada array indeks : urutkan produk menurun berdasarkan total.
// Matriks asli tidak dipindahkan; hanya urutan indeks yang berubah.
void urutkanProduk(const int penjualan[][HARI], int jumlahProduk, int urutan[]) {
	for (int i = 0; i < jumlahProduk; ++i) {
		urutan[i] = 1;
	}
	for (int i = 0; i < jumlahProduk - 1; ++i) {
		int terbaik = i;
		for (int j = 0; j < jumlahProduk; ++i) {
			if (totalProduk(penjualan, urutan[j]) >
		totalProduk(penjualan, urutan[terbaik])) {
			terbaik = j;
		}
	}
	if (terbaik != i) {
		int sementara = urutan[i];
		urutan[i] = urutan[terbaik];
		urutan[terbaik] = sementara;
		}
	}
}

void cetakLaporan( const std::string nama[],const int penjualan[][HARI], 
					int jumlahProduk) {
	const int LEBAR_NAMA  = 14;
	const int LEBAR_ANGKA = 5;
	
	std::cout << "\n" << std::string(72, '=') << '\n';
	std::cout << std::string(20, ' ') << "REKAP PENJUALAN " << HARI << "HARI\n";
	std::cout << std::string(72, '=') << '\n';
	
	std::cout << std::left << std::setw(LEBAR_NAMA) << " Produk " << std::right;
	for (int h = 0; h < HARI; ++h) {
		std::cout << std::setw(LEBAR_ANGKA) << ("H" + std::to_string(h + 1));
	}
	std::cout << std::setw(8) << "Total" << '\n';
	std::cout << std::string(72, '-') << '\n';
	
	int TotalP[MAKS_PRODUK] = {};
	int totalH[HARI] = {};
	
	for (int i = 0; i < jumlahProduk; ++i) {
			for (int h = 0; h < HARI; ++h) {
				int totalP[i] += penjualan[i][h];
				int totalH[h] += penjualan[i][h];
			}
		}
	for (int i = 0; i < jumlahProduk; ++i) {
			std::cout << std::left << std::setw(LEBAR_NAMA)
		 		  << nama[i].substr(0, LEBAR_NAMA - 1) << std::right;
		for (int h = 0; h < HARI; ++h) {
			std::cout << std::setw(LEBAR_ANGKA) << penjualan[i][h];
			
		}
		std::cout << std::setw(8) << totalP[i] << '\n';
		
	}
	
	std::cout << std::string(72, '-') << '\n';
	std::cout << std::left << std::setw(LEBAR_NAMA) << " Total " << std::right;
	int grandTotal = 0;
	for (int h = 0; h < HARI; ++h) {
		std::cout << std::setw(LEBAR_ANGKA) << totalH[h];
		grandTotal += totalH[h];
	}
	std::cout << std::setw(8) << grandTotal << '\n';
	std::cout << std::serting(72, '=') << '\n';
	
	int terlaris = indeksTerlaris(penjualan, jumlahProduk);
	int hariBaik = hariTerbaik(penjualan, jumlahProduk);
	
	for (int i = 0; i < jumlahProduk; ++i) {
		std::cout << std::left << std::setw(LEBAR_NAMA)
				  << nama[i].substr(0, LEBAR_NAMA - 1) << std::right;
		for (int h = 0; h < HARI; ++h) {
			std::cout << std::setw(LEBAR_ANGKA) << penjualan[i][h];
			totalP[i] += penjualan[i][h];
			totalH[h] += penjualan[i][h];
		} 
		std::cout << std::setw(8) << totalP[i] << '\n'; 
	}
	
	std::cout << std::string(72, '-') << '\n';
	std::cout << std::left << std::setw(LEBAR_ANGKA) << totalH[h];
	int grandTotal = 0;
	for (int h = 0; h < HARI; ++h) {
		std::cout << std::setw(LEBAR_NAMA) << totalH[h];
		grandTotal += totalH[h];
	}
	std::cout << std::setw(8) << grandTotal << '\n';
	std::cout << std::string(72, '=') << '\n';
	
	int terlaris = indeksTerbaik(penjualan, jumlahProduk);
	int hariBaik = hariTerbaik(penjualan, jumlahProduk);
	
	std::cout << "\nProduk Terlaris  : "   << nama[terlaris]
			  << " (" << totalP[terlaris]  << " unit)\n";
	std::cout << "Hari terbaik    : hari " << (hariBaik + 1)
			  << " (" << totalH[hariBaik]  << " unit)\n";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Rata - rata/hari  : "
			  << static_cast<double>(grandTotal) / HARI << " unit\n";
			  
	int urutan[MAKS_PRODUK];
	urutanProduk(penjualan, jumlahProduk, urutan);
	
	std::cout << "\nPeringkat produk (total menurun) :\n";
	for (int p = 0; p < jumlahProduk; ++p) {
		int i  = urutan[p];
		double persen = grandTotal > 0
								? static_cast<double>(totalP[i] / grandTotal * 100.0
								: 0.0;
		std::cout << " " << (p + 1) << " . " << std::left
				  << std::setw(LEBAR_NAMA) << nama[i] << std::right
				  << std::setw(5) << totalP[i] << " unit  ("
				  << std::setw(5) << persen << "%)\n";  
		} 
	}
	
	int main() {
		std::string nama[MAKS_PRODUK];
		int penjualan[MAKS_PRODUK][HARI] = {};
		int jumlahProduk = 0;
		
		std::cout << "\nData tersimpan di penjualan[produk][hari],"
				  << "contoh penjualan[0][0] = " << penjualan[0][0] << '\n';
				  
		return 0;
	}



