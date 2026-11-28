#include <iostream>
#include <iomanip>
#include <string>

int main(){
	int			desimal = 255;
	char		huruf   = 'A';
	std::string teks	= "Belajar C++";
	double		pi		= 3.14159265358979;
	
	std::cout << "Desimal    : " << std::dec << desimal<< '\n';
	std::cout << "Oktal      : " << std::oct << desimal<< '\n';
	std::cout << "Heksades   : " << std::hex << desimal<< '\n';
	std::cout << std::dec;			// kembalikan ke basis 10
	
	std::cout << "char       : " << huruf << '\n';
	std::cout << "string     : " << teks  << '\n';
	
	std::cout << "Fixed 2    : " << std::fixed << std::setprecision(2) << pi << '\n';
	std::cout << "Ilmiah 3   : " << std::scientific << std::setprecision(3) << pi << '\n';
	std::cout << "Umum       : " << std::resetiosflags << std::setprecision(6) << pi << '\n';
	
	std::cout << "Boolean    : " << std::boolalpha << true << '\n';
	
	return 0;
}
