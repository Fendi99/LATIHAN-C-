#include <iostream>
#include <string>

using namespace std;

class Laptop {
	private:
		string NomorSeri;
	public:
		Laptop(string inputMerek, int inputHarga){
		Laptop::Merek = inputMerek;
		Laptop::Harga = inputHarga;
}
		string Merek;
		int Harga;
};

void printObject(Laptop &lingker) {
	cout << "Merek Laptop: " << lingker.Merek << endl;
	cout << "Harga Laptop: Rp. " << lingker.Harga << "\n " << endl;
}

int main(){
	/* cout << "\t||=====================||\n";
	cout << "\t||DATABASE PRODUKLAPTOP||\n";
	cout << "\t||=====================||\n";
 
	Laptop ASUS = Laptop("ASUS X555B", 5320000);
	printObject(ASUS);
	
	Laptop HP = Laptop("HP MINI New Era" , 4500000);
	printObject(HP); */
	
	return 0;
}
