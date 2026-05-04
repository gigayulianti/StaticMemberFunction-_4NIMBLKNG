#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa(); //constructor
};

mahasiswa::mahasiswa() {
    cout << "Constructor Terpanggil" << endl; //Definisi Constructor
};

int main(){
    mahasiswa mhs; //pembuatan Object
    return 0;
}