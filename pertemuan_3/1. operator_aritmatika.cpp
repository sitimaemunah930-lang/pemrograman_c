#include <iostream>

int main() {
	int a = 7, b = 3;
	
	std::cout << "a           : " << a << '\n';
	std::cout << "b           : " << b << '\n';
	std::cout << "a + b       : " << a + b << '\n';
	std::cout << "a - b       : " << a - b << '\n';
	std::cout << "a * b       : " << a * b << '\n';
	
	// Pembagian dua bilangan bulat -> integer division (dipotong)
	std::cout << "a / b (int) : " << a / b << "  <- 7/3 = 2, bukan 2.33\n";
	
	// Minimal satu operan dijadikan double agar hasilnya pecahan
	std::cout << "a / b (r)   : " << static_cast<double>(a) / b << '\n';
	
	std::cout << "a % b       : " << a % b << "  <- sisa pembagian\n";
	
	// Modulus untuk memeriksa bilangan genap / ganjil
	int n = 42;
	std::cout << n << (n % 2 == 0 ? " adalah bilangan genap\n" : " adalah bilangan ganjil\n");
	
	return 0;
}