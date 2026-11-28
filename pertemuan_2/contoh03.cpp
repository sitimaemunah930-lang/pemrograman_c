#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cfloat>

int main() {
	std::cout << std::left << std::setw(16) << "tipe"
	          << std::setw(6) << "Byte" << "Rentang\n";
	std::cout << std::string(60, '=') << '\n';
	
	std::cout << std::setw(16) << "char"  << std::setw(6) << sizeof(char)
		      << static_cast<int>(CHAR_MIN) << " s.d " << static_cast<int>(CHAR_MAX) << '\n';
	std::cout << std::setw(16) << "unsigned char" <<std::setw(6) << sizeof(unsigned char)
		      << 0 <<" s.d " << static_cast<int>(UCHAR_MAX) << '\n';
	std::cout << std::setw(16) << "short"  << std::setw(6) << sizeof(short)
		      << SHRT_MIN << " s.d " << SHRT_MAX << '\n';
	std::cout << std::setw(16) << "int"  << std::setw(6) << sizeof(int)
		      << INT_MIN << " s.d " << INT_MAX << '\n';
	std::cout << std::setw(16) << "unsigned int" << std::setw(6) << sizeof(unsigned int)
		      << 0u << " s.d " << UINT_MAX << '\n';
	std::cout << std::setw(16) << "long long" << std::setw(6) << sizeof(long long)
		      << LLONG_MIN << " s.d " << LLONG_MAX << '\n';
	std::cout << std::setw(16) << "float" << std::setw(6) << sizeof(float)
	          << FLT_MIN << " s.d " << FLT_MAX << '\n';
	std::cout << std::setw(16) << "double" << std::setw(6) << sizeof(double)
		      << DBL_MIN << " s.d " << DBL_MAX << '\n';
			  
	return 0; 
}


