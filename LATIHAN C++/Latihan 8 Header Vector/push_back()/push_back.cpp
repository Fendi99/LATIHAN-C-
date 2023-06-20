#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> V1 = {'F','E','N','D','I'}; // vector ini memiliki 5 element dengan isinya F
vector<char>::iterator myIter; //iterasi untuk menunjuk suatu vector
vector<char> V0 ; // vector ini isinya masih kosong

vector<string>hewan; // vector dengan elemen string berisi nama - nama orang

int main(){
	
	cout << "\nSize vector V1 adalah: " << V1.size() << endl;
	cout << "Kapasitas vector V1 adalah: " << V1.capacity() << endl;
	cout << "Isi dari vektor V1 adalah: " << endl;

	for (myIter = V1.begin(); myIter < V1.end() ; myIter++) {
	cout << *myIter << "\t";
	}
	
	//menambahkan Elemen ke vekto V1 2 kali
	V1.push_back('G');
	V1.push_back('H');
	
	//manampilkan hasil operasi V1
	cout << "\n\n=SETELAH OPERASI PUSH_BACK()=\n";
	cout << "Size dari vector V1 adalah: " << V1.size() << endl;
	cout << "Kapasitas dari vector V1 adalah: " << V1.capacity() << endl;
	cout << "Isi dari vector V1 adalah: " << endl;
	for (myIter = V1.begin(); myIter < V1.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//menampilkan elemen elemen V0
	cout << "\nSize vector V0 adalah: " << V0.size() << endl;
	cout << "Kapasitas vector V0 adalah: " << V0.capacity() << endl;
	cout << "Isi dari vektor V0 adalah: " << endl;
	for (myIter = V0.begin(); myIter < V0.end(); myIter++){
		cout << *myIter << "\t";
	}	
	//V0 push_back()
	V0.push_back('M');
	V0.push_back('A');
	V0.push_back('C');
	V0.push_back('A');
	V0.push_back('N');
	
	
	//menampilkan isi V0 setelah push_back()
	cout << "\nSize vector V0 adalah: " << V0.size() << endl;
	cout << "Kapasitas vector V0 adalah: " << V0.capacity() << endl;
	cout << "Isi dari vektor V0 adalah: " << endl;
	for (myIter = V0.begin(); myIter < V0.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//BAGIAN KHUSUS MENCOBA BIDIRECTIONAL ITERATOR
	hewan.assign(5,"HEWAN"); //menugaskan 5 elemen dengan nilainya adalah "hewan"
	string arrayHewan[] = {"KURA-KURA","BIAWAK","BADAK","KUCING-BELANG"} ; // membuat array pengganti nilai hewan
	vector<string>::iterator newIter; // membuat iteratornya
	int *increment = new int (0);
	for(newIter = hewan.begin(); newIter < hewan.end(); newIter++){
		*newIter = arrayHewan[*increment];
		*increment++; 
		}
		
	//menampilkan isi Vector Hewan 
	cout << "\n\nSize vector HEWAN adalah: " << V0.size() << endl;
	cout << "Kapasitas vector HEWAN adalah: " << V0.capacity() << endl;
	cout << "Isi dari vektor HEWAN adalah: " << endl;
	for (newIter = hewan.begin(); newIter < hewan.end(); newIter++){
		cout << *newIter << "\t";
	}	
	
	return 0;
}
