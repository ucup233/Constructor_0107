#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;

public:
	Mahasiswa() {
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim) {
		nim = iNim;
	};
	Mahasiswa(string iNama) {
		nama = iNama;
	};
	Mahasiswa(int cNim, string cNama) {
	};
	void cetak() {
		cout << endl << "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
	};
};

Mahasiswa::Mahasiswa(int iNim) {
	nim = iNim;
}

Mahasiswa::Mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

Mahasiswa::Mahasiswa(int cNim, string cNama) {
	nim = cNim;
	nama = cNama;
}



int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(10);
	Mahasiswa mhs3("Samsul");
	Mahasiswa mhs4(11, "Indra");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();
}
