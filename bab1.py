def cari_nilai_terbesar(array):
    if len(array) == 0:
        return None  # Mengembalikan None jika array kosong
    nilai_terbesar = array[0]  # Menginisialisasi nilai terbesar dengan elemen pertama dari array
    for nilai in array:
        if nilai > nilai_terbesar:
            nilai_terbesar = nilai
    return nilai_terbesar

# Fungsi utama
if __name__ == "__main__":
    # Masukkan nilai-nilai integer ke dalam array
    array_nilai = [int(x) for x in input("Masukkan nilai-nilai integer, pisahkan dengan spasi: ").split()]
    
    # Panggil fungsi untuk mencari nilai terbesar
    terbesar = cari_nilai_terbesar(array_nilai)
    
    if terbesar is not None:
        print("Nilai terbesar dalam array adalah:", terbesar)
    else:
        print("Array kosong")
