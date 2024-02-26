/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

// Kelas Tabel merupakan kelas untuk menampilkan tabel isi list Mahasiswa
class Tabel
{
    // Atribut yang digunakan pada kelas Tabel
private:
    int baris;
    int kolom;

public:
    // Constructor
    Tabel()
    {
    }

    Tabel(int baris, int kolom)
    {
        this->baris = baris;
        this->kolom = kolom;
    }

    // setter
    void setBaris(int baris)
    {
        this->baris = baris;
    }

    void setKolom(int kolom)
    {
        this->kolom = kolom;
    }

    // getter
    int getBaris()
    {
        return baris;
    }

    int getKolom()
    {
        return kolom;
    }

    void buatBaris(string isi[][9], int kolom, int baris)
    {
        int i = 0, j = 0, k = 0;
        int terpanjang[kolom];
        for (i = 0; i < kolom; i++)
        {
            terpanjang[i] = 0;
            for (j = 0; j < baris; j++)
            {
                if (isi[j][i].length() > terpanjang[i])
                {
                    terpanjang[i] = isi[j][i].length();
                }
            }
        }

        for (i = 0; i < baris; i++)
        {
            for (j = 0; j < kolom; j++)
            {
                for (int k = 0; k < terpanjang[j]; k++)
                {
                    cout << "=";
                }
                cout << "==";
            }
            cout << "==========" << endl;
            for (j = 0; j < kolom; j++)
            {
                cout << "|" << isi[i][j];
                for (int k = 0; k < terpanjang[j] - isi[i][j].length(); k++)
                {
                    cout << " ";
                }
                cout << "  ";
            }
            cout << "|" << endl;
        }
        for (j = 0; j < kolom; j++)
        {
            for (k = 0; k < terpanjang[j]; k++)
            {
                cout << "=";
            }
            cout << "==";
        }
        cout << "==========" << endl;
    }

    // Destructor
    ~Tabel()
    {
    }
};