#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	string nama;

	mahasiswa() {
		nim = 0;
		nama = "";
	};
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};