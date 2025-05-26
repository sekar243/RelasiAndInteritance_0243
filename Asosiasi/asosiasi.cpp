#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter*); // menambhakan dokter ke daftar
    void cetakDokter(); //Menampilkan daftar dokter
};  

class Dokter {

};