#include <iostream>

using namespace std;

int foo(int *ptr){

return *ptr; }

int main()
{
int X{9};
char Y{'a'};

cout << "int X = " << X << endl;
cout << "char Y = " << Y << endl; 

cout << "\n" ;

const int* x = &X;
const char* y = &Y;

cout << "const int x = " << x << endl;
cout << "const char y = " << y << endl;

cout << "\n" ;

cout << "variabel yang dideklarasikan dengan const nilainya tidak bisa dirubah dengan semena-mena" << endl;

// x = 7;// akan menghasilkan eror pada compile dengan alasan variable hanya read-only

X = 7;
Y = 'L';
cout << "const int* x = " << *x << endl;
cout << "const char* y = " << *y << endl;

string player = "Kazuto Kirigaya";
const char *nama = "F";


cout  << "Nama : " << nama << endl;
nama = "Fendi Hizbullah, Saya Tinggal di Sokaraja Wetan"; 
cout  << "Nama : " << nama << endl;
cout << "nilai char const*nama : " << sizeof(nama) << endl;

cout << "\n" ;

const int value = 8;

cout << "value = " << value << endl;

cout << "\n" ; cout << "\n" ;

constexpr int i = 8;
constexpr int j = 6;
constexpr int k = i+j;
cout << "i : " << i << endl;
cout << "j : " << j << endl;
cout << "k : " << k << endl;

cout << "\n" ; cout << "\n" ;

const int lima = 5;
const int empat = 4;
const int tambah = lima+empat;
cout << "lima : " << lima << endl;
cout << "empat : " << empat << endl;
cout << "tambah : " << tambah << endl;

cout << "\n" ; cout << "\n" ;

int* const pointer = &X;
cout << "foo adalah: " << foo(pointer) << endl;

return 0;
}