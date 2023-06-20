// PREPROCESSOR DAN HEADER FILE
#include <iostream>
#include <deque>

using namespace std;
#define MAX 20

//DEKLARASI STRUCT ANTRIAN 
struct Queue {
    int front, rear, data[MAX];

}Q;

//MEMERIKSA APAKAH ANTRIAN PENUH ?
bool isFull(){
    return Q.rear == MAX;
}

//MEMERIKSA APAKAH ANTRIAN KOSONG ?
bool isEmpty(){
    return Q.rear == 0;
}

//MENAMPILKAN Queue
void printQueue(){
    if (isEmpty()) {
        cout << "Antrian Kosong\n";
    }else {
        cout << "QUEUE: ";
        for (int i = Q.front; i < Q.rear; i++)
        //menambahkan koma jika data tidak berada di antrian pertama
            cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",") << endl;

    }
}

//MENAMBAHKAN DATA KE ANTRIAN
void enqueue() {
    if (isFull()){
        cout << "Antrian Penuh !\n";
    } else {
        int data;
        //menambahkan data ke antrian
        cout << "Masukkan Data : "; cin >> data;
        Q.data[Q.rear] = data;
        //menempatkan tail pada elemendata terakhir yang ditambahkan
        Q.rear++;
        cout << "Data ditambahkan\n";
        printQueue();
    }
}

//MENGAMBIL DATA DARI ANTIAN
void dequeue(){
    if (isEmpty()){
        cout << "Antrian masih kosong\n"; 
    }else {
        cout << "Mengambil data \"" <<Q.data[Q.front] << "\"..." << endl;
        //menggeser antrian data ke head
        for (int i = Q.front; i < Q.rear; i++)
        Q.data[i] = Q.data[i+1];
        //menempatkan tail pada data terakhir yang digeser
        Q.rear--;
        printQueue();
    }
}

//MAIN PROGRAM
int main(){
    int choose;
    do {
        //tampilan menu
        cout << "=====================\n"
             << "     MENU PILIHAN    \n"
             << "=====================\n"
             << "[1] ENQUEUE          \n"
             << "[2] DEQUEUE          \n"
             << "[3] EXIT             \n"
             << "=====================\n"
             << "MASUKKAN PILIHAN: "; cin >> choose;
        switch (choose){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            default:
                cout << "Pilihan Tidak Tersedia !\n";
                break;
        }
    } while (choose != 3);
    return 0;
} 