#include <iostream>
using namespace std;

float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi; // Rumus luas segitiga
}

float hitungKelilingSegitiga(float sisi1, float sisi2, float sisi3) {
    return sisi1 + sisi2 + sisi3; // Rumus keliling segitiga
}

int main() {
    float alas, tinggi, sisi1, sisi2, sisi3;
    
    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    cout << "Masukkan panjang sisi 1 segitiga: ";
    cin >> sisi1;

    cout << "Masukkan panjang sisi 2 segitiga: ";
    cin >> sisi2;

    cout << "Masukkan panjang sisi 3 segitiga: ";
    cin >> sisi3;
    
    float luas = hitungLuasSegitiga(alas, tinggi);
    float keliling = hitungKelilingSegitiga(sisi1, sisi2, sisi3);
    
    cout << "Luas segitiga: " << luas << endl;
    cout << "Keliling segitiga: " << keliling << endl;
    
    return 0;
}