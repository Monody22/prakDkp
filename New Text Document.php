<?php

function cari_nilai_terbesar($array) {
    if (empty($array)) {
        return NULL; // Mengembalikan NULL jika array kosong
    }
    $nilai_terbesar = $array[0]; // Menginisialisasi nilai terbesar dengan elemen pertama dari array
    foreach ($array as $nilai) {
        if ($nilai > $nilai_terbesar) {
            $nilai_terbesar = $nilai;
        }
    }
    return $nilai_terbesar;
}

// Fungsi utama
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Mendapatkan nilai-nilai integer dari input
    $input = $_POST["input"];
    // Mengubah input menjadi array integer
    $array_nilai = array_map('intval', explode(" ", $input));
    
    // Panggil fungsi untuk mencari nilai terbesar
    $terbesar = cari_nilai_terbesar($array_nilai);
    
    if ($terbesar !== NULL) {
        echo "Nilai terbesar dalam array adalah: " . $terbesar;
    } else {
        echo "Array kosong";
    }
}
?>
