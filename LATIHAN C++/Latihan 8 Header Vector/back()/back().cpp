#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> hewan;
vector<string>::iterator myIter;

int main(){
	string hw[] = {"KUCING", "ULAR", "BANTENG"}; 
	
	for(int i = 0; i < 3; i++){
		hewan.push_back(hw[i]);
	}
	
	//mengeluarkan elemen terahir dari vektor
	cout << "capacity: " << hewan.capacity() << endl;
	cout << "size    : " << hewan.size() << endl;
	cout << "elemen  : " << hewan.back() << endl;
	
	if (hewan.back() == "BANTENG"){
		cout << "Elemen Terakhir Adalah: " << hewan.back() << endl;
	}
	return 0;
}
