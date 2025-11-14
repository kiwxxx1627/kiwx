#include <iostream>  // memanggil library untuk input/output standar
using namespace std; // menggunakan namespace std agar tidak perlu menulis std::

// fungsi utama program
int main() {
    int n; // variabel untuk menyimpan jumlah elemen array
    cout << "Masukkan jumlah elemen: ";
    cin >> n; // menyimpan input user ke variabel n

    int angka[n]; // deklarasi array dengan n elemen

    // perulangan untuk mengisi elemen array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> angka[i]; // menyimpan input user ke elemen array
    }

    // Bubble sort
    for (int i = 0; i < n-1; i++) { // perulangan untuk setiap pass
        for (int j = 0; j < n-i-1; j++) { // perulangan untuk membandingkan
            if (angka[j] > angka[j+1]) { // jika elemen lebih besar dari berikutnya
                // tukar posisi elemen
                int temp = angka[j];   // simpan elemen saat ini
                angka[j] = angka[j+1]; // ganti dengan elemen berikutnya
                angka[j+1] = temp;     // pindahkan nilai temp ke posisi berikutnya
            }
        }
    }

    // menampilkan hasil setelah diurutkan
    cout << "Array setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "angka[" << i << "] = " << angka[i] << endl;
    }

    return 0;
}