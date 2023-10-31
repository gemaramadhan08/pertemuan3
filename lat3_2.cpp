#include<iostream>
using namespace std;

int main(){

    long kode, jumlah, sks, semester;
    char nama;

    cout << "Masukkan kode[1-2]: "; cin >> kode;
    cout << "Jumlah sks per semester[20-25]: "; cin >> sks;

    if(kode == 1){
        jumlah = 30000 * sks;
        semester = jumlah * 2;

        cout << "Prodi Teknik informatika" << endl;
        cout << "Pembayaran dalam satu semester yaitu: " << jumlah << endl;
        cout << "Pembayaran dalam satu tahun yaitu : " << semester << endl;

        
    }else if(kode == 2){
        jumlah = 30000 * sks;
        semester = jumlah * 2;

        cout << "Prodi Teknik Akutansi" << endl;
        cout << "Pembayaran dalam satu semester yaitu: " << jumlah << endl;
        cout << "Pembayaran dalam satu tahun yaitu : " << semester << endl;
    }



    cin.get();
    return 0;
}
