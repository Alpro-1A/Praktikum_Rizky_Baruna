#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cout << "Masukkan angka pertama : "; //input angka
    cin >> x;
    cout << "Masukkan angka kedua : ";
    cin >> y;
    cout << "Masukkan angka ketiga : ";
    cin >> z;

    int terbesar = x; //menentukan angka terbesar
    if (y > terbesar) {
        terbesar = y;
    }
    if (z > terbesar) {
        terbesar = z;
    }
    cout << "Angka terbesar di antara " << x << " , " << y << " dan " << z << " adalah angka " << terbesar << endl;
    return 0;
}
