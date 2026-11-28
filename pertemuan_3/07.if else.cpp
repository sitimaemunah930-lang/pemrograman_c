#include <iostream>

int main() {
	int nilai = 68;
	if (nilai >= 75) {
		std::cout << "Status: LULUS\n";
	}  else {
		std::cout << "Status: TIDAK LULUS\n";
	}
	
	// Bilangan genap / ganjil
	int n = 17;
	if (n % 2 == 0) {
		std::cout << n << " bilangan genap\n";
	} else {
		std::cout << n << " bilangan ganjil\n";
	}
	
	return 0;
}