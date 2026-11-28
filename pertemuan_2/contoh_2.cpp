#include <iostream>
#include <iomanip>

#define PI 3.14159
#define NAMA_KAMPUS "Universitas Mandala"
#define MAX_SISWA 40

int main() {
	const double GRAVITASI = 9.8;
	const int TAHUN_AJARAN = 2026;
	
	std::cout << "PI           : " << std::fixed << std::setprecision(2) << PI << '\n';
	std::cout << "Nama Kampus  : " << NAMA_KAMPUS<<  '\n';
	std::cout << "PI           : " << MAX_SISWA << '\n';
	return 0;
}
