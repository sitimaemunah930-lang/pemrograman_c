#include <iostream>
#include <iomanip>
 
  int main() {
    double harga, persenDiskon;
	std::cout << "Harga barang    : "; std::cin >> harga;
	std::cout << "Diskon (persen) : "; std::cin >> persenDiskon;
	
	double potongan = harga * persenDiskon / 100.0; 
	double bayar    = harga - potongan; 
	
	std::cout << std::fixed << std::setprecision(2); 
	std::cout << "\nHarga awal : " << std::setw(10) << harga    << '\n';
	std::cout << "Diskon       : " << std::setw(10) << potongan << "  (" << persenDiskon << "%)\n";
	std::cout << "bayar        : " << std::setw(10) << bayar    << '\n';
return 0;
}