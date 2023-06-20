#include <iostream>
#include <string>
#include "mahasiswa.hpp"

int main(){
	//cara pertama (1) 
	// dataType *nama = nullptr
	char *myName = nullptr ;
		  myName = new char{'F'};
		  	
	std::cout << "1. cara pertama hasilnya:  "<< *myName << std::endl;
	
	//cara kedua (2)
	//dataType *name = new dataType 
	char *karakter1 = new char {'a'} ;
	std::cout << "2. cara kedua hasilnya: " << *karakter1 << std::endl;
	std::cout << "\n" ;
	//cara kedua (2) 
	int *angka1 = new int[8] ;
		 angka1[0] = 9;
		 angka1[1] = 8;
		 angka1[2] = 7;
		 angka1[3] = 6;
		 angka1[4] = 6;
		 angka1[5] = 5;
		 angka1[6] = 4;
		 angka1[7] = 3;
	for (int i = 0; i<8 ; i++)
		std::cout << "2. cara kedua hasilnya: " << angka1[i] << std::endl;
		
	// deklarasi kelas 
	// mahawiswa fendi = mahasiswa("1614782", "ILMU PENGETAHUAN ALAM");
	
	mahasiswa *sulis = nullptr;
	sulis = new mahasiswa (mahasiswa("1614783", "FAKULTAS ILMU PELAYARAN"));
	
	std::cout << "3. cara ketiga hasilnya: "; sulis->printMahasiswa();		 
	return 0;
}
