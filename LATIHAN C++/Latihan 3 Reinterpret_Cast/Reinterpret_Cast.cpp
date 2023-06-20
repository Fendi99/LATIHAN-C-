#include <iostream>
#include <string>

using namespace std;

struct komputer {
    int harga;
    float version;
    char lambang;
};

int main (void) {

    komputer asus;
    asus.lambang = 'A';
    asus.harga = 5800000;
    asus.version = 3.3;

    // reinterpret_cast data yang sederhana
    int a =  10;
    char b = 'T';
    bool c = true;
    float d = 9.8;
    long e = 9878;

    char *re = reinterpret_cast<char*>(&e);
    char *def = reinterpret_cast<char*>(&b);
    
    cout << *def << endl;
    cout << &re << "\n" ;
    // akhirnya disini

    cout << "\n\n\n\n" ;

    //reinterpret_cast dari data berbentuk struct
    
    //besar dari tipe data structnya adalah
    cout << "besar tipe data struct: " << sizeof(asus) << " byte" << endl;

    cout << "\n" ;

    //casting ke sebuah pointer yang nilainya integer
    int *harg = reinterpret_cast<int*>(&asus);
    //mengeluarkan nilainya
    cout << "besar *harg: " << sizeof(*harg) << " byte\n";
    cout << "nilai variabel yang diisikan: " << *harg << endl;

    cout << "\n" ;

    //ponter ke data selanjutnya
    harg++;

    float *ver = reinterpret_cast<float*>(harg);
    cout << "besar data *ver: " << sizeof(*ver) << " byte"<< endl;
    cout << "nilai variabel yang diisikan: " << *ver << endl;

    cout << "\n" ;
    
    //pointer ke data selanjutnya
    ver++;
    char *lamb = reinterpret_cast<char*>(ver);
    //casting ke sebuah pointer yang nilainya char
    cout << "besar *cast: " << sizeof(*lamb) << " byte" << endl;
    cout << "nilai variabel yang diisikan: " << *lamb << endl;


    cout << "\n\n\n";

    //reinterpret_cast ke string

    string nama = "FENDI";

    cout << "besar data string: " << sizeof(nama) << " byte\n\n";

    char *cast_nama = reinterpret_cast<char*>(&nama);

    cout << "besar data *cast_nama: " << sizeof(*cast_nama) << " byte\n";
    cout << "nama yang saya isikan ke variabel adalah: " << *cast_nama << endl;

return 0;
}