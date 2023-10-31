#include<iostream>
using namespace std;

int main(){

    int nilai, tugas;

    cout << "Masukkan sebuah nilai: ";
    cin >> nilai;
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;

    if(nilai > 70 && tugas >= 75){
        cout << "Kamu lulus\n" << endl;
    }else{
        cout << "Kamu tidak lulus" << endl;
    }

    cin.get();
    return 0;
}

