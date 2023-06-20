#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>buah;
vector<string>::iterator myIter;

//fungsi untuk memanggil detail vector
void PanggilDetailVector(){
	cout << "\nSize of vector: " << buah.size() << endl;
	cout << "Maximum size of vector: " << buah.max_size() << endl;
	cout << "Capacity of vector: " << buah.capacity() << endl;
	cout << "Elemen of vector: " ;
	
	for(myIter = buah.begin(); myIter < buah.end(); myIter++){
		cout << *myIter << "\t";
	}
}
int main(){
	string bArray[] = {"MANGGIS", "KELAPA", "MANGGA", "ALPUKAT", "KURMA", "BELIMBING"};
	
	for (int i=0; i < 6; i++){
		buah.push_back(bArray[i]);
	}	
	
	//kita panggil vektornya
	PanggilDetailVector();
	
	//kita lakukan operasi clear()
	buah.clear();
	
	//kita pannggil lagi vektor setelah operasi clear()
	PanggilDetailVector();
	
	return 0;
}
