#include <iostream>
#include <array>
using namespace std;

int main() {
	
	// array <tipe data, jumlah array> nama array
	array<int, 5> nilai;
	
	// looping array cara standard
	for(int i = 0; i < 5; i++) {
		nilai[i] = i;
		cout << "Nilai [" << i << "] adalah " << nilai[i] << ", Address [" << i << "] adalah " << &nilai[i] 
		<< endl;
	}
	
	// ukuran array
	cout << "Ukuran array = " << nilai.size() << endl;
	// address awal array
	cout << "Address awal array = " << nilai.begin() << endl;
	// address akhir array (sampai null)
	cout << "Address akhir array = " << nilai.end() << endl;
	
	
	// looping array menggunakan keyword auto yg berupa pointer
	for(auto it = nilai.begin(); it != nilai.end(); it++) {
		cout << *it << endl;
	}
	
	return 0;	
}
