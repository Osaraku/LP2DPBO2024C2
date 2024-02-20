/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        int i;
        String idProduct, name, brand, price, size, material, gender, color, sleeve_type;

        ArrayList<Shirt> listShirts = new ArrayList<>();

        Scanner sc = new Scanner(System.in);

        System.out.println("Masukkan 3 Shirt :");
        for (i = 0; i < 3; i++) {
            System.out.println();
            System.out.println("Penambahan ke-" + (i + 1));
            System.out.print("Id Produk : ");
            idProduct = sc.next();
            System.out.print("Nama : ");
            name = sc.next();
            System.out.print("Brand : ");
            brand = sc.next();
            System.out.print("Harga : ");
            price = sc.next();
            System.out.print("Ukuran : ");
            size = sc.next();
            System.out.print("Material : ");
            material = sc.next();
            System.out.print("Gender : ");
            gender = sc.next();
            System.out.print("Warna : ");
            color = sc.next();
            System.out.print("Tipe Lengan : ");
            sleeve_type = sc.next();

            Shirt temp = new Shirt();
            temp.setIdProduct(idProduct);
            temp.setName(name);
            temp.setBrand(brand);
            temp.setPrice(price);
            temp.setSize(size);
            temp.setMaterial(material);
            temp.setGender(gender);
            temp.setColor(color);
            temp.setSleeve_type(sleeve_type);
            listShirts.add(temp);
        }

        System.out.println("Data telah ditambahkan!");
        System.out.println();
        System.out.println("List Baju :");

        Tabel tab = new Tabel();
        String[][] arrstr = new String[listShirts.size() + 1][9];

        arrstr[0][0] = "Id Produk";
        arrstr[0][1] = "Nama";
        arrstr[0][2] = "Brand";
        arrstr[0][3] = "Harga";
        arrstr[0][4] = "Ukuran";
        arrstr[0][5] = "Material";
        arrstr[0][6] = "Gender";
        arrstr[0][7] = "Warna";
        arrstr[0][8] = "Tipe Lengan";

        for (i = 1; i <= 3; i++) {
            arrstr[i][0] = "" + listShirts.get(i - 1).getIdProduct();
            arrstr[i][1] = "" + listShirts.get(i - 1).getName();
            arrstr[i][2] = "" + listShirts.get(i - 1).getBrand();
            arrstr[i][3] = "" + listShirts.get(i - 1).getPrice();
            arrstr[i][4] = "" + listShirts.get(i - 1).getSize();
            arrstr[i][5] = "" + listShirts.get(i - 1).getMaterial();
            arrstr[i][6] = "" + listShirts.get(i - 1).getGender();
            arrstr[i][7] = "" + listShirts.get(i - 1).getColor();
            arrstr[i][8] = "" + listShirts.get(i - 1).getSleeve_type();
        }
        tab.buatBaris(arrstr, 9);
        System.out.println();

        sc.close();
    }
}
