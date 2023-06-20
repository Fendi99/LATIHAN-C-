#ifndef _CLASS_MAHASISWA
#define _CLASS_MAHASISWA
#include <string>

class mahasiswa {
	private: 
		std::string NIM;
		std::string FAKULTAS;
	
	public:
		mahasiswa(std::string nim, std::string fakultas){
			this->NIM = nim;
			this->FAKULTAS = fakultas;
		}
		
		void printMahasiswa(){
			std::cout << "NIM : " << this->NIM << std::endl;
			std::cout << "FAKULTAS : " << this->FAKULTAS << std::endl;
		}
};
#endif
