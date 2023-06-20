#include <ostream>
//#include <string>
#include <iostream>
 namespace std __GLIBCXX_oneLoneCoder {
    extern ostream cout ;
    }

using namespace std;

namespace tumbuhan {
    class monokotil {
        //encapsulated data;
        private :
        string nama_tumbuhan;
        int maximal_hidup;

        public: 
        //constructor kelas
        monokotil (string input_nama, int input_maximal_hidup){
            this -> nama_tumbuhan = input_nama;
            this -> maximal_hidup = input_maximal_hidup;
        }

        void tampilkan_klasifikasi () {
            cout << "Nama Tumbuhan: " << this -> nama_tumbuhan << endl; 
            cout << "Maximal Hidup: " << this -> maximal_hidup  << " Tahun "<< endl;
        }
    };
}
using namespace tumbuhan;

int main (){
    monokotil Jati = monokotil("Jati", 56);

    cout << "========== DATABASE KLASIFIKASI TUMBUHAN ===========\n" << endl; 

    Jati.tampilkan_klasifikasi();

   return 0; 
}
