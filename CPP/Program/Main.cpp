/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

// Deklarasi Library
#include <bits/stdc++.h>
#include "Shirt.cpp"
#include "Tabel.cpp"

using namespace std;

int main()
{

    list<Shirt> listShirt; // list data shirt

    string id, name, brand, price, size, material, gender, color, sleeve_type;
    int i = 0;

    cout << "Menambahkan 3 Baju\n";
    for (i = 0; i < 3; i++)
    {
        cout << "\nPenambahan ke-" << (i + 1) << " :\n";
        cout << "Id : ";
        cin >> id;
        cout << "Nama : ";
        cin >> name;
        cout << "Brand : ";
        cin >> brand;
        cout << "Harga : ";
        cin >> price;
        cout << "Ukuran : ";
        cin >> size;
        cout << "Material : ";
        cin >> material;
        cout << "Gender : ";
        cin >> gender;
        cout << "Warna : ";
        cin >> color;
        cout << "Jenis Lengan : ";
        cin >> sleeve_type;

        Shirt temp;

        temp.set_idProduct(id);
        temp.set_name(name);
        temp.set_brand(brand);
        temp.set_price(price);
        temp.set_size(size);
        temp.set_material(material);
        temp.set_gender(gender);
        temp.set_color(color);
        temp.set_sleeve_type(sleeve_type);

        listShirt.push_back(temp);
    }
    cout << "\nData ditambahkan!";
    cout << "\nList Baju :\n";

    Tabel tab;
    string arrstr[listShirt.size() + 1][9];

    arrstr[0][0] = "Id Produk";
    arrstr[0][1] = "Nama";
    arrstr[0][2] = "Brand";
    arrstr[0][3] = "Harga";
    arrstr[0][4] = "Ukuran";
    arrstr[0][5] = "Material";
    arrstr[0][6] = "Gender";
    arrstr[0][7] = "Warna";
    arrstr[0][8] = "Tipe Lengan";

    i = 0;
    for (list<Shirt>::iterator it = listShirt.begin(); it != listShirt.end(); it++)
    {
        arrstr[i + 1][0] = it->get_idProduct();
        arrstr[i + 1][1] = it->get_name();
        arrstr[i + 1][2] = it->get_brand();
        arrstr[i + 1][3] = it->get_price();
        arrstr[i + 1][4] = it->get_size();
        arrstr[i + 1][5] = it->get_material();
        arrstr[i + 1][6] = it->get_gender();
        arrstr[i + 1][7] = it->get_color();
        arrstr[i + 1][8] = it->get_sleeve_type();
        i++;
    }
    tab.buatBaris(arrstr, 9, listShirt.size() + 1);

    return 0;
}