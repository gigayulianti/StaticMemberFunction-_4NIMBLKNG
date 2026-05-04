;

//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main() {
    mahasiswa mhs(12345, "Shinoa");     //memanggil constructor deengan parameter 
    return 0;
}
