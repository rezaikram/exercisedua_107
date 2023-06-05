#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
public:
	string nama;
	vector<Pengarang*> yang_diikuti;
};

class Pengarang {
public:
	string nama;
	vector<Penerbit*> yang_diterbitkan;
};

class Buku {
public:
	string judulbuku;
};

int main() {

	Penerbit* varPenerbit1 = new Penerbit();
	varPenerbit1->nama = "Gama Press";
	Penerbit* varPenerbit2 = new Penerbit();
	varPenerbit2->nama = "Intan Patiwara";

	Pengarang* varPengarang1 = new Pengarang();
	varPengarang1->nama = "Joko";
	Pengarang* varPengarang2 = new Pengarang();
	varPengarang2->nama = "Lia";
	Pengarang* varPengarang3 = new Pengarang();
	varPengarang3->nama = "Giga";
	Pengarang* varPengarang4 = new Pengarang();
	varPengarang4->nama = "Asroni";

	Buku* varBuku1 = new Buku();
	varBuku1->judulbuku = "Fisika";

	return 0;
}