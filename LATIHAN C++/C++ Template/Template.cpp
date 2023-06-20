#include <iostream>

using namespace std;

template <typename T> 
   void kurang (T a, T b) {
	cout << "nilai a = " << a << endl;
	cout << "nilai b = " << b << endl;
    }

/* template <typename A>
   void swap(A &value_1, A &value_2){
       A wadah_pendukung;
	wadah_pendukung = value_1;
	value_1 = value_2;
	value_2 = wadah_pendukung;
    } */

template <typename S>
void function_swap(S &_a, S &_b){
	S _wadah = _a;
	    _a = _b;
	    _b = _wadah;
    }
void tampilkan(int &val_1, int &val_2){
	cout << "nilai pertama = " << val_1 << endl;
	cout << "nilai kedua   = " << val_2 << endl;
    }
void banner(){
    	cout << "\nsetelah swap\n" << endl;
    }
int main(){
    int i;
    int j;
 
// mengurang nilai menggunakan template 
 /*   cout << i << endl;
    cout << j << endl;
    cout << kurang<int>(i,j); */

kurang(i, j);
int a = 3, b = 4;
//swap(a,b);

cout << "addres a = " << &a << endl;
cout << "addres b = " << &b << endl;

tampilkan(a,b);

function_swap(a,b);
banner();
tampilkan(a,b);     
return 0;
}