#include <iostream>

using namespace std;

int main(){

    int nilai;

    cout <<"masukan nilai: ";
    cin>>nilai;

    if(nilai >= 81 && nilai <= 100){
        cout << "Maka " << nilai <<  " huruf A";

    }else if (nilai >= 71 && nilai < 81){
        cout << "Maka " << nilai <<  " huruf B";
        
    }else if (nilai >= 61 && nilai < 71){
        cout << "Maka " << nilai <<  " huruf C";
        
    }else if (nilai >= 51 && nilai < 61){
        cout << "Maka " << nilai <<  " huruf D";
       
    }else{
        cout << "Kondisi tidak terpenuhi";
    }
    return 0;
}