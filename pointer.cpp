#include <iostream>
using namespace std;

// Membuat fungsi lebih baik menggunakan pass by reference daripada pass by pointer
// Karena lebih singkat dan rapi penulisan sintaks nya

void fungsi(int *b) {
	cout << "alamat dari b: " << &b << endl;
	cout << "alamat dari b: " << b << endl;
	cout << "nilai dari b: " << *b << endl << endl;
}

void kuadrat(int *val) {
	*val = (*val) * (*val);
}

int main() {
	
	int a = 5;
	cout << "alamat dari a: " << &a << endl;
 	cout << "nilai dari a: " << a << endl << endl;

	fungsi(&a);	
	
	kuadrat(&a);
	cout << "kuadrat dari a: " << a << endl;
	
	return 0;
}
