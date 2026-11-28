#include <iostream>

int main() {
	int suhu = 38;
	
	if (suhu > 37) {
		std::cout << "Suhu tubuh di atas normal (demam).\n";
	}
	
	// Kurung kurawal opsional untuk satu pernyataan, tetapi selalu disarankan
	int stok = 0;
	if (stok == 0) {
		std::cout << "Stok habis, harap lakukan pemesanan ulang.\n";
	}
	
	return 0;
}