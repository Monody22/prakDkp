<?php
// Mendefinisikan array pertama
$nama = array("Yuna", "Karina", "Yeji", "Wendy", "Winter");

// Mendefinisikan array kedua
$matkul = array("DKP", "Fisdas", "Kalkulus", "Aljabar Linear", "Matematika Diskrit");

// Fungsi untuk menampilkan array
function tampilkanArray($array1, $array2) {
    echo "<ul>";
    for ($i = 0; $i < count($array1); $i++) {
        echo "<li>Nama: " . $array1[$i] . ", Matkul Kesukaan: " . $array2[$i] . "</li>";
    }
    echo "</ul>";
}

// Memanggil fungsi untuk menampilkan array pertama dan kedua
echo "<h3>Data Mahasiswa:</h3>";
tampilkanArray($nama [0], $matkul[0][1]);
tampilkanArray($nama [1], $matkul[1][2]);
tampilkanArray($nama [2], $matkul[2][3]);
tampilkanArray($nama [3], $matkul [3][4]);
?>
0