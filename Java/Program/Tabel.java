/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

public class Tabel {
    private int baris;
    private int kolom;

    Tabel() {
    }

    Tabel(int baris, int kolom) {
        this.baris = baris;
        this.kolom = kolom;
    }

    public int getBaris() {
        return this.baris;
    }

    public void setBaris(int baris) {
        this.baris = baris;
    }

    public int getKolom() {
        return this.kolom;
    }

    public void setKolom(int kolom) {
        this.kolom = kolom;
    }

    public void buatBaris(String[][] isi, int kolom) {
        int i = 0, j = 0, k = 0;
        int terpanjang[] = new int[kolom];
        for (i = 0; i < kolom; i++) {
            terpanjang[i] = 0;
            for (j = 0; j < isi.length; j++) {
                if (isi[j][i].length() > terpanjang[i]) {
                    terpanjang[i] = isi[j][i].length();
                }
            }
        }

        for (i = 0; i < isi.length; i++) {
            for (j = 0; j < kolom; j++) {
                for (k = 0; k < terpanjang[j]; k++) {
                    System.out.print("=");
                }
                System.out.print("==");
            }
            System.out.println("=");
            for (j = 0; j < kolom; j++) {
                System.out.print("|" + isi[i][j]);
                for (k = isi[i][j].length(); k < terpanjang[j]; k++) {
                    System.out.print(" ");
                }
                System.out.print(" ");
            }
            System.out.println("|");
        }
        for (j = 0; j < kolom; j++) {
            for (k = 0; k < terpanjang[j]; k++) {
                System.out.print("=");
            }
            System.out.print("==");
        }
        System.out.println("=");
    }
}
