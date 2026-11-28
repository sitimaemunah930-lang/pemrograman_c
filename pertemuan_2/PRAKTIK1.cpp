#include <iostream>
#include <string>
#include <iomanip>

int main() {
	// Definisi konstanta untuk PPN (11%)
	const double TARIF_PPN = 0.11;
	
	// Deklarasi variabel input
	std:: string namaBarang;
	double hargaSatuan;
	int jumlahBeli;
	double persentaseDiskon;
	
	// 1. Meminta masukan dari pengguna
	std::cout << "Masukan nama barang (tanpa spasi): ";
	std::cin  >> namaBarang;
	
	std::cout << "Masukan harga satuan: ";
	std::cin  >> hargaSatuan;
	
	std::cout << "Masukan jumlah beli: ";
	std::cin  >> jumlahBeli;
	
	std::cout << "Masukan persentase diskon (%): ";
	std::cin  >> persentaseDiskon;
	
	// 2. Menghitung variabel-variabel keuangan
	double subtotal = hargaSatuan * jumlahBeli;
	double potonganDiskon = subtotal * (persentaseDiskon / 100.0);
	double nilaiSetelahDiskon = subtotal - potonganDiskon;
	double ppn = TARIF_PPN * nilaiSetelahDiskon;
	double totalBayar = nilaiSetelahDiskon + ppn;
	
	// 3. Menampilkan Struk pembelian
	std::cout << "\n===============\n";
	std::cout << "\n===== STRUK BEMBELIAN =====\n";
	
	// 	Format desimal: dua angka dibelakang koma
	std::cout << std::fixed << std::setprecision(2);
	
	// Menampilkan baris demi baris dengan ratakan kolam menggunakkan 	std::setw
	std::cout << std::left << std::setw(15) << "Barang"         << ":"     << namaBarang   << "\n";
	std::cout << std::left << std::setw(15) << "Harga Satuan"   << ":"     << hargaSatuan  << "\n";
	std::cout << std::left << std::setw(15) << "Jumlah"         << ":"     << jumlahBeli   << "\n";
	std::cout << std::left << std::setw(15) << "Subtotal"       << ": Rp " << std::right   << std::setw(10)       << subtotal              << "\n";
	std::cout << std::left << std::setw(15) << "Diskon (" << (int)persentaseDiskon << "%)" <<": Rp " << std::right << std::setw(10)         << potonganDiskon << "\n"; 
	std::cout << std::left << std::setw(15) << "Setelah diskon" << ": Rp " << std::right   << std::setw(10)        << nilaiSetelahDiskon    <<  "\n";
	std::cout << std::left << std::setw(15) << "PPN 11%"        << ": Rp " << std::right   << std::setw(10)        << ppn                   <<  "\n";
	std::cout << std::left << std::setw(15) << "Total bayar   " << ": Rp " << std::right   << std::setw(10)        << totalBayar            <<  "\n";
	std::cout << "===============\n";
		return 0;
}


