#include <iostream>
#include <string>

using namespace std;

struct dataInt{
	int *nama = new int(5);
	int *var = new int ;
};

struct arrayInt{
	int *baru = new int[3] ;
};

struct dataChar{
	char *karakter1 = new char('a') ;
	char *karakter2 = new char ;
};

struct arrayChar{
	char *karakter3 = new char[2] ;
};

int main (){
	
	dataInt obj1 ; arrayInt obj1a ;
	dataChar obj2 ; arrayChar obj2a ;
	
	
	/*
	cout << "1\n" ;
	cout << daftar.*nama << endl;
	cout << daftar.nama << endl;
	
	cout << "\n2\n" ;
	cout << *var << endl ;
	cout << var <<endl ;
	*/
	

	cout << "struct 1. int : " << sizeof(obj1) << endl;
	cout << "struct 2. arrayInt : " << sizeof(obj1a) << endl;
	cout << "struct 3. char : " << sizeof(obj2) << endl;
	cout << "struct 4. arrayChar : " << sizeof(obj2a) << endl;


	int i;
 
    cout<<"Anda membutuhkan berapa memori untuk menyimpan data integer ? "<<endl;
    cin>>i;
 
    int *data = nullptr;
    data = new int[i]; //Pemesanan memori
    cout<<"memori telah dipesan dan memiliki "<<i<<" elemen"<<endl<<"silahkan anda isi :"<<endl;
 
    //Input
    for(int n=0;n<i;n++){
        cout<<&data[n]<<" = ";cin>>data[n];
    }
 
    cout<<endl<<"Memori telah di isi berikut adalah isi dari memori anda :"<<endl;
    //Output
    for(int n=0;n<i;n++){
        cout<<&data[n]<<" = "<<data[n]<<endl;
    }
 
    cout<<endl<<"...Memproses Pelepasan Memori..."<<endl;
    delete[] data; //pelepasan memori.
    data = nullptr;
    cout<<"Memori telah dilepaskan dan variabel 'data' memiliki nilai = "<<data<<endl;
 

return 0;
}
