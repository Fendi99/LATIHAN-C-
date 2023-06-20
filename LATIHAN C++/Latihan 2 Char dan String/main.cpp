#include <iostream>
#include <string>
//#include <cstring>

using namespace std;

int main (){

    char karakter = 'T';
    cout << karakter;

    char S1[7] = {'1','2','3','4','5','6','7'};
    char* S2[7];

    //mengisi S1 dengan suatu string
    //menyalin string S1 ke S2
    char* strcpy(char S2,const char* S1);
    //menampilkan Hasil salinan
    cout << S2;


    cout << "\n\n" ;
    // Dereference
    cout << "===========================================================";
    cout << "\n\n" ;
    cout << "================================\n";
    cout << "||          POINTER           ||\n";
    cout << "================================\n";
    int a = 5;
    int &b = a;

    cout << "\n\n" ;
    system("color 0c" );
    cout << "int a = 5; " << endl;
    cout << "int &b = a;" << endl;

    system("color 07");
    cout << "nilai a : " << a << endl;
    cout << "address a : " << &a << endl;
    cout << "address b : " << &b << endl;

    // saya rubah nilai b, apakah a juga akan berubah
    cout << "mulai dari sini kebawah nilai b saya rubah !" << "\n\n";
    b = 9;

    cout << " b = 9 " << endl;
    cout << "int &b = a" << endl;
    cout << "nilai a : " << a << endl;
    cout << "address a : " << &a << endl;
    cout << "address b : " << &b << endl;
    
    cout << "===========================================================";    
    cout << "\n\n" ;
    cout << "================================\n";
    cout << "||          POINTER           ||\n";
    cout << "================================\n";
    cout << "\n\n";

    int valueA = 90;
    int* valueB = &valueA;
    cout << "Saya Mengintegerkan Value A dan Value B \n";
    cout << "int valueA = 90; \n";
    cout << "int valueB = &valueA; \n";

    cout << "\n\n";

    cout << "nilai dari value A : " << valueA << endl;
    cout << "address dari value A: " << &valueA << endl;

    cout << "\n\n";

    cout << "nilai dari value B : " << valueB << endl;
    cout << "address dari value B : " << &valueB << endl;

    cout << "\n\n";
    cout << "Kesimpulan: Jika menggunakan pointer maka akan terbentuk data baru\n jika menggunakan dereference maka tidak terbentuk data baru" ; 



    return 0;
}