#include <iostream>
#include <string>
#include <bitset>
	
	using namespace std;
	
class Player {
	private:
	   string Nama;
	   int Level = 1;
   	   int Exp   = 0;
	   int MAXExp = 100;

	public:
	   Player(string inputNama){
	       Player::Nama = inputNama;
	}
	void TampilkanData(){
		cout << "Nama Player = " << Player::Nama << endl;
		cout << "Level       = " << Player::Level << endl;	
		cout << "Exp         = " << Player::Exp   << endl;
	}
	//getter, ini artinya akan membuat attribut menjadi read only
	string ambilStatus_Player(){
		return this->Nama;
	}
	//setter, ini artinya akan membuat attribut menjadi write and read
	void setAtribut_Player(int ExpValue){
		  Player::Exp += ExpValue; 
	 	if( Exp == Player::MAXExp){
			Player::Level++;
		        cout << "LEVEL UP!" << endl;
		        Player::Exp = 0;
			Player::MAXExp += 100;
		}
	 }
};

int main () {
 cout << "SELAMAT DATANG DI DUNIA YANG BARU!\n" << endl;
 cout << "MASUKKAN NAMA : "; 
 string NAMA; getline(cin, NAMA);
 cout << "Nama Anda = " << NAMA << endl; 
 system("pause");
 system("cls");
 cout << "\n" ;	

// membuat object baru dengan nama object Name
 Player Name = Player(NAMA);
// menampilkan status object ketika pertama kali dibuat
 Name.TampilkanData(); 

//masuk ke control flow
char lanjut;
labelPertama:
cout << "Lanjutkan ? (y/n): "; cin >> lanjut;


labelContinue:
if (lanjut == 'y' || lanjut == 'Y'){
cout << "\t\t\t =MENU= \n\n";
cout << "1.Bertarung \n" <<   
"2.Exit \n" <<
"3.Tampilkan Status \n" <<
"pilih: " ;
char pilih;
cin >> pilih;
	if (pilih == '1') {
		Name.setAtribut_Player(50);
		cout << "PERTARUNGAN SELESAI !" << endl;
		goto labelContinue;
	} else if ( pilih == '2') {
		goto labelENDGAME;
 	} else if ( pilih == '3') {
	       // mengambil status dari player
		 system("cls");
		 Name.TampilkanData();
		 goto labelContinue;		
	} else {
		cout << "INPUT YANG ANDA MASUKKAN SALAH !";
		goto labelContinue;
	}
}else if (lanjut == 'n' || lanjut == 'N'){  
    goto labelENDGAME;
} else {
    cout << "INPUT YANG ANDA MASUKKAN SALAH !" << endl;
    goto labelPertama;
}


	/* if (step1 == true) {
 Player Name = Player(NAMA); 
}
NAMA.TampilkanData(); */ 

 /* Player Fendi = Player("Fendi Hizbullah");
 Fendi.TampilkanData(); */

labelENDGAME:
	system("color c");
	system("echo off");
	system("cls");
cout << "\t\t\t PERMAINAN BERAKHIR!" << endl;
	system("pause");
return 0;
}