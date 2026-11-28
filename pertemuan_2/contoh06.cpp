#include <iostream>

int main(){
	int umur;
	std::cout << "Masukan Umur anda";
	
	if(std::cin >> umur){
		std::cout << "Umur anda adalah " << umur << " tahun.\n";
	} else{
		std::cout << "Input tidak valid! Harus berupa angka.\n";
	}
	return 0;
}