/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

// deklarasi library
#include <iostream>
#include <string>
#include "Product.cpp"

using namespace std;

class Clothing : public Product
{

    // atribut
private:
    string size;
    string material;
    string gender;

    // methods
public:
    Clothing()
    {
        this->size = "";
        this->material = "";
        this->gender = "";
    }

    Clothing(string size, string material, string gender)
    {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    // getter
    string get_size()
    {
        return size;
    }
    string get_material()
    {
        return material;
    }
    string get_gender()
    {
        return gender;
    }

    // setter
    void set_size(string size)
    {
        this->size = size;
    }
    void set_material(string material)
    {
        this->material = material;
    }
    void set_gender(string gender)
    {
        this->gender = gender;
    }

    // destructor
    ~Clothing()
    {
    }
};