#include <iostream>

using namespace std;


int main (){

    system("color 0a");
    cout << "||==============================||\n";
    cout << "||==== KALKULATOR SEDERHANA ====||\n" ;
    cout << "||==============================||\n";
    cout << "tambah(+), kurang(-), kali(*), bagi(/), mod(%)";
    cout << "\n\n";
    cout << "Masukan nilai: ";

    int a, b ; cin >> a;
    char operate;
    cout << "Masukkan Operator: ";
    cin >> operate;

    label_continue:
    switch(operate){
        case '+':
            while(operate == '+') {
                cout << "Masukan nilai: ";
                cin >> b;
                a = a + b;
                cout << "Masukkan Operator: ";
                cin >> operate;
            }
            if(operate != '+') {
                goto label_continue;
                }
            break;
        case '-':
            while(operate == '-') {
                cout << "Masukan nilai: ";
                cin >> b;
                a = a - b;
                cout << "Masukkan Operator: ";
                cin >> operate;
            }
            if(operate != '-') {
                    goto label_continue;
                }
            break;
        case '*':
            while(operate == '*') {
                cout << "Masukan nilai: ";
                cin >> b;
                a = a * b;
                cout << "Masukkan Operator: ";
                cin >> operate;
                        }
            if(operate != '*') {
                    goto label_continue;
                }
            break;
        case '/':
            while(operate == '/') {
                cout << "Masukan nilai: ";
                cin >> b;
                a = a / b;
                cout << "Masukkan Operator: ";
                cin >> operate;
            }
            if(operate != '/') {
                    goto label_continue;
                }
            break;
        case '%':
            while(operate == '%') {
                cout << "Masukan nilai: ";
                cin >> b;
                a = a % b;
                cout << "Masukkan Operator: ";
                cin >> operate;
            }
            if(operate != '%') {
                    goto label_continue;
                }
            break;
        case '=':
            break;
        default:
            cout << "OPERATOR TIDAK DIKENAL ! \nMASUKKAN OPERATOR YANG TERSEDIA !";
    }
    
    cout << "Hasil Operasi: " << a ; 
    return 0;
}