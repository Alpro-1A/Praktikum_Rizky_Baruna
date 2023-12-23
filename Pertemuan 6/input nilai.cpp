#include <iostream>

using namespace std;

int main()
{
    int jmlarr; // Untuk jumlah array yang nanti diinput pengguna

    cout << "[ MENCARI NILAI TERTINGGI ] \n\n";

    // Input untuk masukkan jumlah array yang diinginkan
    cout << "Masukkan jumlah array yang diinginkan: "; cin >> jmlarr;
    cout << endl;

    // Untuk memasukkan nilai-nilai dari setiap array
    int array[jmlarr];
    cout << "Masukkan " << jmlarr << " nilai untuk array:" << endl;
     for (int i = 0; i < jmlarr; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    int nilaiTertinggi = array[0];
    int indeks = 0;

     // Untuk mencari nilai tertinggi dan indeksnya
    for (int i = 1; i < jmlarr; ++i) {
        if (array[i] > nilaiTertinggi) {
            nilaiTertinggi = array[i];
            indeks = i;
        }
    }
    cout << endl;

    // Menampilkan hasil nilai tertinggi yang ada pada array
    cout << "Nilai tertinggi dalam array: " << nilaiTertinggi << endl;

    // Jika ada atau tidak ada nilai tertinggi
    if (indeks != -1) {
        cout << "Nilai tersebut ada dalam array pada indeks: " << indeks << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

  return 0;
}
