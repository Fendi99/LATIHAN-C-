#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> peliharaan(5,"KUCING");
vector<string>::iterator myIter;

int main(){
	
	//menampilkan semua elemen vector peliharaan awalnya
	cout << "Capacity  : " << peliharaan.capacity() << endl;
	cout << "Size      : " << peliharaan.size() << endl;
	cout << "Isi Elemen: ";
	for (myIter = peliharaan.begin(); myIter < peliharaan.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//melakukan operasi assign() membuat elemen vector sebelumnya dihapus dan diisi dengan yang baru
	peliharaan.assign(3, "IKAN_MAS"); //assign() memiliki 2 argumen
									  // argumen pertama untuk berapa banyak elemen yang akan mengisi
									  // argumen kedua untuk menentukan elemen apa yang akan mengisi
									  // jika berhasil dilakukan, maka elemen akan mengisi vector sebanyak n 
	
	//menampilkan elemen vector peliharaan setelah operasi assign()
	cout << "\n=SETELAH ASSIGN()=" << endl;								  
	cout << "Capacity  : " << peliharaan.capacity() << endl;
	cout << "Size      : " << peliharaan.size() << endl;
	cout << "Isi Elemen: ";
	for (myIter = peliharaan.begin(); myIter < peliharaan.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	return 0;
}
