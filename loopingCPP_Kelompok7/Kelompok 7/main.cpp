#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int cari_nilai_terbesar(vector<int> array) {
    if (array.empty()) {
        return -1; // Mengembalikan -1 jika array kosong
    }
    int nilai_terbesar = array[0]; // Menginisialisasi nilai terbesar dengan elemen pertama dari array
    for (int nilai : array) {
        if (nilai > nilai_terbesar) {
            nilai_terbesar = nilai;
        }
    }
    return nilai_terbesar;
}

int main() {
    // Masukkan nilai-nilai integer ke dalam vector
    vector<int> array_nilai;
    int nilai;
    cout << "Masukkan nilai-nilai integer, pisahkan dengan spasi: ";
    string input;
    getline(cin, input);
    istringstream stream(input);
    while (stream >> nilai) {
        array_nilai.push_back(nilai);
    }

    // Panggil fungsi untuk mencari nilai terbesar
    int terbesar = cari_nilai_terbesar(array_nilai);

    if (terbesar != -1) {
        cout << "Nilai terbesar dalam array adalah: " << terbesar << endl;
    } else {
        cout << "Array kosong" << endl;
    }
    return 0;
}
