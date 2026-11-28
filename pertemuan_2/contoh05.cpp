#include <iostream>
#include <iomanip>

int main(){
	std::cout << "- - - Lebar  (setw)  - - -\n";
	std::cout << '|' << 42 << "|\n";
	std::cout << '|' << std::setw(5) << 42 << "|\n";
	std::cout << '|' << std::left<< std::setw(5) << 42 << std:: right << "|\n";
	std::cout << '|' << std::setfill('0') << std::setw(5) << 42
		      << std::setfill( ' ' ) << "|\n";
		      
	std::cout << "\n- - - presisi pecahan - - -\n";
	double x = 3.14159265;
	std::cout << std::fixed
		      << std::setprecision(0) << x << " "
		      << std::setprecision(2) << x << " "
		      << std::setprecision(4) << x << '\n';
		      
	std::cout << "\n- - - Tanda  - - -\n";
	std::cout << std::showpos << 10 << " " << -10 << std::noshowpos << '\n';
	
	std::cout << "\n- - - Tabel rapih - - -\n";
	std::cout << std::left    << std::setw(10) << "Barang"
			  << std::right   << std::setw(10) << "Harga"
			  << std::setw(8) << "Jumlah" << '\n';
			  
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::left  << std::setw(10) << "Buku"
		      << std::right << std::setw(10) << 15000 << std::setw(8) << 3 << '\n';
	std::cout << std::left  << std::setw(10) << "Pulpen"
		      << std::right << std::setw(10) << 3500   << std::setw(8) << 12 << '\n';
	std::cout << std::left  << std::setw(10) << "Tas"
		      << std::right << std::setw(10) << 250000 << std::setw(8) << 1 << '\n';
		      
	return 0;
}
