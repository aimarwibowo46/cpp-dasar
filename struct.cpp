#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
	string nama;
	int nrp;
	float ipk;

	// fungsi / method di dalam struct
	void print_details() {
		cout << "Nama : " << nama << endl;
		cout << "NRP : " << nrp << endl;
		cout << "IPK : " << ipk << endl;
	}
};

int main() {

	mahasiswa its, *itb;

	its.nama = "Aimar"; // akses member struct menggunakan dot
	its.nrp = 34;
	its.ipk = 3.78;
	its.print_details();

	itb = &its; // itb merupakan pointer ke struct its
	itb->ipk = 3.94; // akses member pointer struct menggunakan arrow
	cout << endl;
	itb->print_details();

	return 0;
}