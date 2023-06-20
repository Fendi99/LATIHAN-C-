#include <iostream>
#include <list>
#include <string>

using namespace std;

list<int> L1, L2, L3;
list<string> L4;

int main(){
	for (int i = 1; i<6; i++){
		L1.push_back(i*i); // menempatkan nilai ke L1 dengan push_back()
	}	
	
	L2.assign(5,75); // menempatkan nilai 5 elemen ke L2 dengan nilai yang sama semua yaitu 75
	L3 = L1;        // menempatkan nilai L3 sama dengan L1
	
	const int n = 5;
	string Nama[n] ={"Kristof","Santi","Dwi","Vivian","Rosintan"};
	
	for (int j=0; j<5; j++){
		L4.push_back(Nama[j]); //menempatkan string dari array Nama ke List L4
	}
	
	cout << "List awal adalah sebagai berikut: " << endl;
	cout << "L1 = " ;
	
	list<int>::iterator myIter; //membuat iterator untuk list
	for(myIter = L1.begin(); myIter != L1.end(); myIter++){
		cout << *myIter;
	}
	
	return 0;
}
