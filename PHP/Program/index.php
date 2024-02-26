<?php

/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

require('Shirt.php');

// menambah objek shirt
$shirt1 = new Shirt("01", "Kaos1", "BrandX", "20000", "M", "Cotton", "Wanita", "Hitam", "Panjang");
$shirt2 = new Shirt("02", "Kaos2", "BrandY", "25000", "L", "Polyester", "Pria", "Biru", "Pendek");
$shirt3 = new Shirt("03", "Kaos3", "BrandZ", "18000", "XL", "Spandex", "Wanita", "Merah", "Panjang");
$shirt4 = new Shirt("04", "Kaos4", "BrandX", "22000", "S", "Cotton", "Pria", "Putih", "Pendek");

// memasukkan kedalam list
$listShirt = array($shirt1, $shirt2, $shirt3, $shirt4);

?>

<!-- Membuat file html untuk menampilkan tabel -->
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Latihan Praktikum</title>

    <!-- style pada tabel -->
    <style>
        table,
        th,
        td {
            border: 1px solid black;
            border-collapse: collapse;
            padding: 5px;
        }
    </style>
</head>

<body>
    <!-- Menampilkan tabel -->
    <h3>List Baju : </h3>
    <table class="table" bored>
        <thead>
            <tr>
                <th>Id Product</th>
                <th>Nama</th>
                <th>Brand</th>
                <th>Harga</th>
                <th>Ukuran</th>
                <th>Material</th>
                <th>Gender</th>
                <th>Warna</th>
                <th>Tipe Lengan</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $index = 1;
            foreach ($listShirt as $shirt) {
                ?>
                <tr>
                    <td>
                        <?php echo $shirt->getIdProduct(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getName(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getBrand(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getPrice(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getSize(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getMaterial(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getGender(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getColor(); ?>
                    </td>
                    <td>
                        <?php echo $shirt->getSleeveType(); ?>
                    </td>
                </tr>
                <?php
                $index++;
            }
            ?>
        </tbody>
    </table>
</body>

</html>