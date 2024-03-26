#include <iostream>
using namespace std;

//  class
class Mahasiswa {
private:
    string nama;
    string jurusan;
    int umur;
public:
    Mahasiswa(string n, string j, int u) {
        nama = n;
        jurusan = j;
        umur = u;
    }
    
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Umur: " << umur << endl;
    }
};

int main() {
    Mahasiswa mhs1("Tegar", "Teknik Informatika", 19);
    mhs1.displayInfo();
    
    return 0;
}
