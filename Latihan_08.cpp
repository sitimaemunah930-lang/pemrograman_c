#include<iostream>


void balik(int data[], int n) {
	int kiri  =0;
	int kanan = n - 1;
	while (kiri < kanan) {
		int sementara = data[kiri];
		data[kiri] = data[kanan];
		data[kanan] = sementara;
		++kiri;
		--kanan;
	}
}

bool palindrom(const int data[], int n) {
	int kiri= 0;
	int kanan = n - 1;
	while(kiri < kanan) {
		if (data[kiri] != data[kanan]) {
			return false;
		}
		++kiri;
		--kanan;
	}
	return true;
	}

void cetak(const int data[], int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << data[i] << (i + 1 < n ? " " : "\n");
	}
}

int main() {
	int nilai[] = {10, 20, 30, 40, 50};
	const int N = static_cast<int>(sizeof(nilai[0]));
	
	std::cout << "sebelum dibalik : ";
	cetak(nilai, N);
	balik(nilai, N);
	std::cout << "setelah dibalik : ";
	cetak(nilai, N);
	int a[] = {1, 2, 3, 2, 1};
	int b[] = {1, 2, 3, 4, 5};
	std::cout << "\n{1,2,3,2,1} palindrom?"
		 	  << (palindrom(a, 5) ? "ya" : "tidak") << '\n';
	std::cout << "{1,2,3,4,5} palindrom? "
			  << (palindrom(b, 5) ? "ya" : "tidak") << '\n';
			  
	return 0;
}