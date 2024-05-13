#include <iostream>
using namespace std;

class mahasiswa {
private:
	static long long int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(long long int pNim) { nim = pNim; }
	static long long int getNim() { return nim; }

	mahasiswa(string pnama) { 
		nama = pnama;
		setID(); }
};

long long int mahasiswa::nim = 20230140106;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Yusuf Hidayat");
	mahasiswa mhs2("Budi Hartono");
	mahasiswa::setNim(20230140130);
	mahasiswa mhs3("Andi Sucipto");
	mahasiswa mhs4("Joko Widodo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar objek = " << mahasiswa::getNim() << endl;
	return 0;
}