#include <iostream>

using namespace std;

int main(){

    int kode;
    
    cout <<"masukan kode: ";
    cin >>kode;

    if(kode == 1){
        cout << "Maka " << kode << " adalah hari senin" << endl;
    }else if(kode == 2){
        cout << "Maka " << kode << " adalah hari selasa" << endl;
    }else if(kode == 3){
        cout << "Maka " << kode << " adalah hari rabu" << endl;
    }else if(kode == 4){
        cout << "Maka " << kode << " adalah hari kamis" << endl;
    }else if(kode == 5){
        cout << "Maka " << kode << " adalah hari jumat" << endl;
    }else if(kode == 6){
        cout << "Maka " << kode << " adalah hari sabtu" << endl;
    }else if(kode == 7){
        cout << "Maka " << kode << " adalah hari minggu" << endl;
    }else {
        cout << "pilihan tidak ada" << endl;
    }
    return 0;
}