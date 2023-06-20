#include <iostream>

using namespace std;

int main (){

/* int X = 9;
char Y = 'a';

cout << " X = " << X << endl;
cout << " Y = " << Y << endl;

cout << "\n";

int *a = &X;
char *L = &Y;

cout << " *a = " << a << endl;
cout << " *L = " << L << endl;
*/

int a, b, c, d, e;
a = 1;
b = 2;
c = 3;
d = 4;

int stack1[3] = {3,2,1};
int stack2[5] = {8,7,6,5,4};

char Kendaraan[5] = {'M','O','B','I','L'};
int *f = stack2;

cout << *f << endl;

cout << "addres a : " << &a << "\t\t\t" << "addres stack1: " << &stack1 << endl;
cout << "addres b : " << &b << "\t\t\t" << "addres stack2: " << &stack2 << endl;
cout << "addres c : " << &c << "\t\t\t" << "Anggota1 STACK1 : " << &stack1[0] << endl;
cout << "addres d : " << &d << "\t\t\t" << "Anggota2 STACK1 : " << &stack1[1] << endl;
cout << "addres e : " << &e << "\t\t\t" << "Anggota3 STACK1 : " << &stack1[2] << endl;

cout << "\n";

cout << "Anggota1 STACK2 : " << &stack2[0] << endl;
cout << "Anggota2 STACK2 : " << &stack2[1] << endl;
cout << "Anggota3 STACK2 : " << &stack2[2] << endl;
cout << "Anggota4 STACK2 : " << &stack2[3] << endl;
cout << "Anggota5 STACK2 : " << &stack2[4] << endl;

cout << "\n";

cout << "M O B I L = " << &Kendaraan << endl;
cout << "M : " << &Kendaraan[0] << endl;
cout << "O : " << &Kendaraan[1] << endl;
cout << "B : " << &Kendaraan[2] << endl;
cout << "I : " << &Kendaraan[3] << endl;
cout << "L : " << &Kendaraan[4] << endl;

cout << "\n";

cout << *f << endl;
++f;
cout << *f << endl;
f++;
cout << *f << endl;

f++;
f++;
cout << *f << endl;

cout << "pointer : " << f << endl;
return 0;
}