# Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
# dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin

from Shirt import Shirt
from Tabel import Tabel

#inisialisasi
listShirt = [] 
i = 0

print("Menambahkan 3 Baju")

while(i < 3):
    print("\nPenambahan Ke - ", (i + 1), " :")
    id = str(input('Id : '))
    nama = str(input('Nama : '))
    brand = str(input('Brand : '))
    harga = str(input('Harga : '))
    ukuran = str(input('Ukuran : '))
    material = str(input('Material : '))
    gender = str(input('Gender : '))
    warna = str(input('Warna : '))
    jenis_lengan = str(input('Jenis Lengan : '))

    listShirt.append(Shirt(id, nama, brand, harga, ukuran, material, gender, warna, jenis_lengan))
    i += 1

tab = Tabel() # Instansiasi objek tabel
arrstr = [[0 for j in range(9)] for i in range(len(listShirt)+1)]

arrstr[0][0] = "Id Produk"
arrstr[0][1] = "Nama"
arrstr[0][2] = "Brand"
arrstr[0][3] = "Harga"
arrstr[0][4] = "Ukuran"
arrstr[0][5] = "Material"
arrstr[0][6] = "Gender"
arrstr[0][7] = "Warna"
arrstr[0][8] = "Tipe Lengan"

for i, mhs in enumerate(listShirt):
    arrstr[i+1][0] = mhs.get_idProduct()
    arrstr[i+1][1] = mhs.get_name()
    arrstr[i+1][2] = mhs.get_brand()
    arrstr[i+1][3] = mhs.get_price()
    arrstr[i+1][4] = mhs.get_size()
    arrstr[i+1][5] = mhs.get_material()
    arrstr[i+1][6] = mhs.get_gender()
    arrstr[i+1][7] = mhs.get_color()
    arrstr[i+1][8] = mhs.get_sleeve_type()

tab.buatBaris(8, arrstr)