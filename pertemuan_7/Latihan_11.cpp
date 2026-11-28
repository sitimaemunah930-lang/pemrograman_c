#include<algorithm>
#include<iostream>

void selectionSort(int data[], int n, long long& banding, long long& tukar) {
	banding= 0;
	tukar = 0;
	for (int i = 0; i < n - 1; ++i) {
		int minimum = i;
		for (int j = i + 1; j < n; ++j) {
			++banding;
			if (data[j] < data[minimum]) {
				minimum = j;
			}
		}
		if (minimum != i) {
			std::swap(data[i], data[minimum]);
			++tukar;
		}
	}
}

void insertSort(int data[], int n, long long& banding, long long& geser) {
	banding = 0;
	geser = 0;
	for ( int i = 0; i < n; ++i) {
		int kunci = data[i];
		int j = i - 1;
		while (j >= 0) {
			++banding;
			if (data[j] <= kunci) {
				break;
			}
			data[j + 1] = data[j];
			++geser;
			--j;
		}
		data[j + 1] = kunci;
	}
	
}

void cetak(const int data[], int n) {
	for (int i = 0; i < n; ++i) {
		std::cout <<data[i] << (i + 1 < n ? " " : "\n");
	}
}

int main() {
	int asli[] = {29, 10, 14, 37, 13, 5, 42, 8};
	const int N = static_cast<int>(sizeof(asli) / sizeof(asli[0]));
	
	
	int a[N];
	int b[N];
	std::copy(asli, asli + N, a);
	std::copy(asli, asli + N, b);
	
	std::cout << "Data awal     : ";
	cetak(asli, N);
	
	long long banding = 0;
	long long operasi = 0;
	
	selectionSort(b, N, banding, operasi);
	std::cout << "Selection sort   : ";
	cetak(a, N);
	std::cout << "perbandingan=" << banding
			  << "pertukaran=" << operasi << '\n';
			  
			  
	insertionSort(b, N, banding, operasi);
	std::cout << "Insertion sort   : ";
	cetak(b, N);
	std::cout << " perbandingan=" << banding
			  << "pergeseran=" << operasi << '\n';
			  
	return 0;
}