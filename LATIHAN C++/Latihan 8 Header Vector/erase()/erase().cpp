#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> kendaraan(3,"Motor");
vector<string>::iterator myIter;

int main(){
	
	kendaraan.push_back("Mobil");
	kendaraan.push_back("Pesawat");
	
	//menampilkan semua elemen vector kendaraan
	cout << "capacity vector     : " << kendaraan.capacity() << endl;
	cout << "size vector         : " << kendaraan.size() << endl;
	cout << "Elemen-Elemen vector: ";
	for(myIter = kendaraan.begin(); myIter < kendaraan.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//menghapus elemen yang ada di dalam vektor kendaraan dengan erase()
	
	myIter = kendaraan.begin(); //memanggil iterasi untuk menunjukkan lokasi awal
	kendaraan.erase(myIter, myIter+2); //erase() memiliki 2 argumen
									   //argumen pertama, letak dimana elemen akan mulai dihapus
									   //argumen kedua, letak dimana elemen mulai tidak dihapus
									   //dalam contoh, elemen yang terletak pada myIter+1 tidak akan dihapus
	
	kendaraan.push_back("Kapal_Selam");
	kendaraan.push_back("Kereta");
	
	//menampilkan kembali semua elemen vector kendaraan setelah operasi erase()
	cout << "\ncapacity vector     : " << kendaraan.capacity() << endl;
	cout << "size vector           : " << kendaraan.size() << endl;
	cout << "Elemen-Elemen vector  : ";
	for(myIter = kendaraan.begin(); myIter < kendaraan.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	
	return 0;
}
