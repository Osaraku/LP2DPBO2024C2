/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

// deklarasi library
#include <iostream>
#include <string>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing
{

    // atribut
private:
    string color;
    string sleeve_type;

    // methods
public:
    Shirt()
    {
        this->color = "";
        this->sleeve_type = "";
    }

    Shirt(string color, string sleeve_type)
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    // getter
    string get_color()
    {
        return color;
    }
    string get_sleeve_type()
    {
        return sleeve_type;
    }

    // setter
    void set_color(string color)
    {
        this->color = color;
    }
    void set_sleeve_type(string sleeve_type)
    {
        this->sleeve_type = sleeve_type;
    }

    // destructor
    ~Shirt()
    {
    }
};