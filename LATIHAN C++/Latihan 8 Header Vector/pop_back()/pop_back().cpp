#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> Bhs_Pemprogaman;
vector<string>::iterator myIter;

int main(){
	
	//mengisi nilai elemen dari vektor Bhs_Pemprogaman
	string arrBHS[] = {"C++", "Java", "Python", "C#", "Javascript", "PHP", "PHP"};
	for (int i = 0 ;i < 7 ; i++){
		Bhs_Pemprogaman.push_back(arrBHS[i]);
	}
	
	//menampilkan elemen dari vektor Bhs_Pemprogaman	
	cout << "capacity vector       : " << Bhs_Pemprogaman.capacity() << endl;
	cout << "size vector           : " << Bhs_Pemprogaman.size() << endl;
	cout << "Elemen-Elemen vector  : ";
	for(myIter = Bhs_Pemprogaman.begin(); myIter < Bhs_Pemprogaman.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	//melakukan operasi pop_back(). atau menghapus yang paling belakang
	Bhs_Pemprogaman.pop_back();
	
	//menampilkan lagi elemen dari vektor Bhs_Pemprogaman setelah operasi pop_back()
	cout << "\n=SETELAH POP_BACK()=" << endl;
	cout << "capacity vector       : " << Bhs_Pemprogaman.capacity() << endl;
	cout << "size vector           : " << Bhs_Pemprogaman.size() << endl;
	cout << "Elemen-Elemen vector  : ";
	for(myIter = Bhs_Pemprogaman.begin(); myIter < Bhs_Pemprogaman.end(); myIter++){
		cout << *myIter << "\t";
	}
	
	return 0;
}
