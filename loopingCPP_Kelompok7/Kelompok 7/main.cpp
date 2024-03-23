#include <iostream>
#include <vector>
using namespace std;

int cari_nilai_terbesar(vector<int> array) {
    if (array.empty()) {
        return INT_MIN;
    }
    int nilai_terbesar = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (array[i] > nilai_terbesar) {
            nilai_terbesar = array[i];
        }
    }
    return nilai_terbesar;
}

int main() {

    vector<int> array_nilai;
    int nilai;
    cout << "Masukkan nilai-nilai integer, pisahkan dengan spasi: ";
    while (cin >> nilai) {
        array_nilai.push_back(nilai);
    }


    int terbesar = cari_nilai_terbesar(array_nilai);

    if (terbesar != INT_MIN) {
        cout << "Nilai terbesar dalam array adalah: " << terbesar << endl;
    } else {
        cout << "Array kosong" << endl;
    }
    return 0;
}
