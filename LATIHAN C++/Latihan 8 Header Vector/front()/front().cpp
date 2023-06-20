#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> nama;
vector<string>::iterator myIter;

vector<char> inisial;
int main(){
	
	nama.push_back("FENDI");
	nama.push_back("SULIS");	
	
	for(myIter = nama.begin(); myIter < nama.end(); myIter++)
		cout << *myIter << "\t";
		
		//front() digunakan untuk mereferensikan ke komponen pertama sebuah vektor
		
			cout << "\nCapacity of Vector: " << nama.capacity() << endl;
			cout << "Size of Vector: " << nama.size() << endl;
		if (nama.front() == "FENDI"){
			cout << "My Name is: " << nama.front() << endl; 
		}
	return 0;
}
