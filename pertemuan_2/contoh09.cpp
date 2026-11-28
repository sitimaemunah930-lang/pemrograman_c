#include <iostream>
#include <iomanip>

int main(){
	double celsius;
	std::cout << "Masukan suhu dalam celsius: ";
	std::cin >> celsius;
	
	double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	double kelvin     = celsius + 273.15;
	double reamur     = celsius * 4.0 / 5.0;
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n === Konversi Suhu  ===\n";
	std::cout << "Celsius      : " << std::setw(8) << celsius    << "c\n";
	std::cout << "Fahrenheit   : " << std::setw(8) << fahrenheit << "c\n";
	std::cout << "Kelvin       : " << std::setw(8) << kelvin     << "c\n";
	std::cout << "Reamur       : " << std::setw(8) << reamur     << "c\n";
	return 0;
} 