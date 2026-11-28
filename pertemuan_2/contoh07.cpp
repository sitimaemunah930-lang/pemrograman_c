#include <iostream>
#include <string>

int main(){
	std::string nama;
	int         umur;
	double      ipk;
	char        grade;
	
	std::cout << "Nama (tanpa spasi)  : "; std::cin >> nama;
	std::cout << "Umur                : "; std::cin >> umur;
	std::cout << "IPK                 : "; std::cin >> ipk;
	std::cout << "Grade               : "; std::cin >> grade;
	
	std::cout << "\n ==== Data Mahasiswa  ====\n";
	std::cout << "Nama  : " << nama  << '\n';
	std::cout << "Umur  : " << umur  << '\n';
	std::cout << "IPK   : " << ipk   << '\n';
	std::cout << "Grade : " << grade << '\n';
	return 0;
}