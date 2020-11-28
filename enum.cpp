#include <iostream>
using namespace std;

enum gender {
	male,
	female
};

enum hero { 
	hayabusa,
	natalia, 
	lancelot,
	gusion,
	ling
};

enum card {
	club = 5, // mengubah nilai default enum
	diamond,
	heart = 12,
	spade,
	AS,
	K = 10,
	Q,
	J // index J sama dengan index heart yaitu 12	
}kartu; // enum bisa dideklarasikan sperti ini

int main() {
	
	gender gender1 = male; // deklarasi enum mirip seperti deklarasi struct atau class
	
	switch(gender1) {
		case male:
			cout << "Gender is male" << endl;
			break;
		
		case female:
			cout << "Gender is female" << endl;
			break;
			
		default:
			cout << "Value can be male or female" << endl;
	}
	cout << "\n";
	
	
	hero assasin = lancelot;
	cout << "Lancelot ada di index ke " << lancelot << endl; // default index enum sama seperti array (0, 1, 2, 3, 4)
	for(int i = hayabusa; i <= ling; i++) {
		cout << i << " ";
	}
	cout << "\n\n";
	
	
	cout << "Ukuran enum adalah " << sizeof(kartu) << endl; // size dari int adalah 4 bytes
	cout << "Index dari club : " << club << endl;
	cout << "Index dari diamond : " << diamond << endl; 
	cout << "Index dari heart : " << heart << endl;
	cout << "Index dari spade : " << spade << endl;
	cout << "Index dari AS : " << AS << endl;
	cout << "Index dari K : " << K << endl;
	cout << "Index dari Q : " << Q << endl;
	cout << "Index dari J : " << J << endl; 
	
	return 0;
}
