#include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string nama;
	int jamkerja;
	
	const double TARIF       = 25000.0;       // per jam
	const double FAKTOR_LEMBUR      = 1.5;   // 1.5x tarif per jam Lembur
	const int    JAM_NORMAL         = 40;
	
	std::cout << "Nama Karyawan       : "; std::cin >> nama;
	std::cout << "Jam Kerja/Minggu    : "; std::cin >>jamkerja;
	
	int jamPokok  = jamkerja;
	if (jamPokok > JAM_NORMAL) jamPokok = JAM_NORMAL;
	int jamLembur = jamkerja - jamPokok;
	
	double gajiPokok    = jamPokok  * TARIF;
	double gajiLembur   = jamLembur * FAKTOR_LEMBUR;
	double total        = gajiPokok + gajiLembur;
	
	std::cout << "\n === Slip Gaji: " << nama << "  ===\n";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "jam Kerja      : " << jamkerja  << "jam\n";
	std::cout << "Jam Lembur     : " << jamLembur << "jam\n";
	std::cout << "Gaji Pokok     : RP " << std::setw(12) << gajiPokok  << '\n';
	std::cout << "Gaji Lembur    : RP " << std::setw(12) << gajiLembur << '\n';
	std::cout << "Total Gaji     : RP " << std::setw(12) << total      << '\n';
	return 0;
}