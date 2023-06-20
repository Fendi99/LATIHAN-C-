#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> V1;
vector<string> buah(2, "APEL");

int main(){
	V1.assign(5, 8);
	for (int i = 0; i < 5; i++){
		cout << V1[i] << "\t";
	}
	
	cout << "\n";
	
	buah.push_back("PISANG");
	
	//iterator
	vector<string>::iterator myIter;
	
	for (myIter = buah.begin(); myIter < buah.end(); myIter++){
		cout << *myIter << "\t";
	}
	//at() mereferensikan ke sebuah elemen didalam vektor dengan lokasi yang telah ditentukan didalam variabel, misal at(x)
	
	if (buah.at(2) == "PISANG"){
		cout << "\nDisini ada buah: " << buah.at(2) << endl;
	}

	//mengeluarkan semua elemen vektor menggunakan fungsi at()
	cout << "\n";
	
	for(int k = 0; k < buah.size(); k++){
		cout <<"Elemen " << k << " :"<< buah.at(k) << endl;
	}
	
	//sebenernya mau bikin angka random terus kalo hasilnya pas baru keluarin statement, tapi belum tau caranya
	
	return 0;
}
