#include <iostream>

int main() {
	// Prioritas: * dan / lebih tinggi daripada + dan -
	int a = 2 + 3 * 4;        // 3*4 dulu -> 2+12 = 14
	int b = (2 + 3) * 4;      // kurung dulu -> 5*4 = 20
	std::cout << "2 + 3 * 4     = " << a << '\n';
	std::cout << "(2 + 3) * 4   = " << b << '\n';
	
	// Asosiativitas kiri->kanan untuk operator berprioritas sama
	int c = 20 - 5 - 3;       // (20-5)-3 = 12
	std::cout << "20 - 5 - 3    = " << c << '\n';
	
	// Campuran aritmatika, relasional, logika
	bool d = 3 + 4 > 6 && 10 % 3 == 1;
	// 3+4=7 (prioritas +), 7>6=true; 10%3=1,1==1=true; true&&true=true
	std::cout << std::boolalpha << "3 + 4 > 6 && 10 % 3 == 1 = " << d << '\n';
	
	// Gunakan kurung untuk memperjelas maksud meski prioritas sudah benar
	bool e = (3 + 4 > 6) && (10 % 3 == 1);
	std::cout << "versi berkurung            = " << e << '\n';
	
	return 0;
}