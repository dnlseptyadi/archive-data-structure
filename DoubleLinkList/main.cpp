#include "list.h"

int main() {

    list daftar_angka;    
    CreateList(daftar_angka);

    infotype angka[5] = {1,2,3,4,5};

    int banyak = sizeof(angka)/sizeof(angka[0]);
    for(int i = 0;i < banyak;++i) {
        InsertLast(daftar_angka, Allocate(angka[i]));
    }

    cout << "List saat ini : ";
    Print(daftar_angka);
    cout << endl;




    return 0;
}