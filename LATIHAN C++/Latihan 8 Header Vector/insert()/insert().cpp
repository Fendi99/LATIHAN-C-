#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> Alphabet;
vector<char>::iterator myIter;

int main(){
	char insVal = 'A';
	
	for(int i = 0; i < 5 ; i++){
	Alphabet.push_back(insVal);
		insVal++;
	}
	
	//mengeluarkan elemen di dalam vektor Alphabet
	cout << "capacity vector     : " << Alphabet.capacity() << endl;
	cout << "size vector         : " << Alphabet.size() << endl;
	cout << "Elemen-Elemen vector: ";
	for(myIter = Alphabet.begin(); myIter < Alphabet.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//melakukan insert nilai ke dalam vector
	Alphabet.insert(Alphabet.begin()+1 , 3 ,'I'); //insert memiliki 3 argument
												  //elemen pertama, letak nilai akan disisipkan
												  //elemen kedua, jumlah elemen yang akan disisipkan
												  //elemen ketiga, nilai yang akan disisipkan
			
	//mengeluarkan elemen vector setelah operasi insert()
	cout << "\n=SETELAH INSERT()=" << endl;
	cout << "capacity vector     : " << Alphabet.capacity() << endl;
	cout << "size vector         : " << Alphabet.size() << endl;
	cout << "Elemen-Elemen vector: ";
	for(myIter = Alphabet.begin(); myIter < Alphabet.end(); myIter++){
		cout << *myIter << "\t";
	}	
	return 0;
}
