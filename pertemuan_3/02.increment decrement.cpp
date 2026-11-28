#include <iostream>

int main() {
	int i = 5;
	
	int pre = ++i;   // naikkan dulu (i=6), lalu pakai nilainya
	std::cout << "pre-increment  -> i = " << i << ", pre = " << pre << '\n';
	
	i = 5;
	int post = i++;  // pakai nilainya dulu (post=5), baru naikkan (i=6)
	std::cout << "post-increment -> i = " << i << ", post = " << post << '\n';
	
	int j = 10;
	int decre = --j; // pre-decrement
	std::cout << "pre-decrement  -> j = " << j << ", decre = " << decre << '\n';
	
	// Efek samping di dalam loop (dibahas lebih lanjut pada Modul 04)
	for (int k = 0; k < 3; ++k) {
		std::cout << "iterasi " << k << '\n';
		
	}
	
	return 0;
}