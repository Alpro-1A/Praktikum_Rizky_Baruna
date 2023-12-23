#include <iostream>
using namespace std;
// Function buat ngitung bilangan ganjil sampe faktor tertentu.
void bilanganGanjil (int limit, int & sumGanjil) {
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= limit; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sumGanjil += i;
        }
    }
    cout << endl;
}
// Function buat ngitung bilangan genap sampe faktor tertentu.
void bilanganGenap (int limit, int & sumGenap) {
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= limit; i += 2) {
        cout << i << " ";
        sumGenap += i;
    }
    cout << endl;
}
// Function buat ngitung ama nampilin jumlah bilangan prima sampe limit tertentu.
void bilanganPrima (int limit, int & sumPrima) {
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= limit; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }
        if (j * j > i) {
            cout << i << " ";
            sumPrima += i;
        }
    }
    cout << endl;
}
// Function buat nampilin faktor ganjil
void faktorGanjil (int sumGanjil) {
    cout << "Faktor-faktor penjumlahan bilangan ganjil: ";
    for (int i = 1; i <= sumGanjil; i++) {
        if (sumGanjil % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Function buat nampilin faktor genap.
void faktorGenap (int sumGenap) {
    cout << "Faktor-faktor penjumlahan bilangan genap: ";
    for (int i = 1; i <= sumGenap; i++) {
        if (sumGenap % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Function buat nampilin faktor prima.
void faktorPrima (int sumPrima) {
    cout << "Faktor-faktor penjumlahan bilangan prima: ";
    for (int i = 1; i <= sumPrima; i++) {
        if (sumPrima % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Buat output nya
int main() {
    int limit;
    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;
    cout << "[ Program Bilangan Ganjil, Genap, dan Prima ]" << endl;
    cout << "Masukkan limit akhir: ";
    cin >> limit;
    // Manggilin function - function buat nampilin hasil tadi.

    bilanganGanjil(limit, sumGanjil);
    bilanganGenap(limit, sumGenap);
    bilanganPrima(limit, sumPrima);
    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;

    // Memanggil function - function buat nampilin hasil faktor tadi.
    // Manggilin function - function buat nampilin hasil faktor tadi.

    faktorGanjil(sumGanjil);
    faktorGenap(sumGenap);
    faktorPrima(sumPrima);
    return 0;
}
