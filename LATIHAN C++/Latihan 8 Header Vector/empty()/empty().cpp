#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> kamar;
vector<char>::iterator myIter;

int main(){
	char initial ='A';
	
	for(int i=0; i < 100; i++){
		kamar.push_back(initial+i);
	}
	
	system("cls");
	label_tampilan:
	//menampilkan elemen vektor kamar
	cout << "capacity vector       : " << kamar.capacity() << endl;
	cout << "size vector           : " << kamar.size() << endl;
	cout << "Elemen-Elemen vector  : " << endl;
	for(myIter = kamar.begin(); myIter < kamar.end(); myIter++){
		cout << *myIter << "\t";
	}
 	char pilihan ;
		while(true){
			cout << "\n=MENU=" << endl;
			cout << "1.Ulangi " << endl;
			cout << "2.Bersihkan Kamar" << endl;
			cout << "Masukkan Input: "; cin >> pilihan;
			if(pilihan == '2'){
				kamar.clear();
				break;
			} else if( pilihan == '1'){
				system("cls");
				goto label_tampilan;
			}
		}
		
		if(kamar.empty()){
			system("cls");
			cout << "SELAMAT !! TUGAS ANDA MEMBERSIHKAN KAMAR SUDAH SELESAI" << endl;
		}
		system("pause");
	
	return 0;
}
