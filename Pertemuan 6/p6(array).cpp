#include <iostream>

using namespace std;

int main()
{
    cout << " [ Mencari Nilai Tertinggi ] \n\n";

    // Menampilkan semua nilai dari array
    cout << "Berikut nilai-nilai tersebut" << endl;
    int jmlarr[5] = {25, 64, 60, 75, 74};
    for (int i = 0; i < 5; ++i) {
        cout << "Nilai " << i + 1 << ": " << jmlarr[i] << endl;
    }

    int nilaiTertinggi = jmlarr[0];
    int indeks = 0;

    // Untuk mencari nilai tertinggi dan indexnya
    for (int i = 1; i < 5; ++i) {
        if (jmlarr[i] > nilaiTertinggi) {
            nilaiTertinggi = jmlarr[i];
            indeks = i;
        }
    }

    cout << endl;

    // Menampilkan hasil nilai tertinggi dan indeks
    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
    cout << "Index untuk nilai tertinggi: " << indeks << endl;

    return 0;
}
