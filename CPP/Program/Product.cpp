/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

// deklarasi library
#include <iostream>
#include <string>

using namespace std;

class Product
{

    // atribut
private:
    string idProduct;
    string name;
    string brand;
    string price;

    // methods
public:
    Product()
    {
        this->idProduct = "";
        this->name = "";
        this->brand = "";
        this->price = "";
    }

    Product(string idProduct, string name, string brand, string price)
    {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // getter
    string get_idProduct()
    {
        return idProduct;
    }
    string get_name()
    {
        return name;
    }
    string get_brand()
    {
        return brand;
    }
    string get_price()
    {
        return price;
    }

    // setter
    void set_idProduct(string idProduct)
    {
        this->idProduct = idProduct;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_brand(string brand)
    {
        this->brand = brand;
    }
    void set_price(string price)
    {
        this->price = price;
    }

    // destructor
    ~Product()
    {
    }
};