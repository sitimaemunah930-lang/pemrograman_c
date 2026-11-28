#include <iostream>
#include <iomanip> 
 int main() { 
 	int total; 
	std::cout << "Masukkan total detik: ";
    std::cin >> total;
	
	
	int jam   = total / 3600; 
	int menit = (total % 3600) / 60;
	int detik = total % 60; 
	
	std::cout << std::setfill('0') 
			  << std::setw(2) << jam << ':'
			  << std::setw(2) << menit << ':'
			  << std::setw(2) << detik << '\n';
	
	 return 0;
}