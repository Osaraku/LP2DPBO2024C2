<?php

/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

class Product
{
    private $idProduct = '';
    private $name = '';
    private $brand = '';
    private $price = '';

    // Constructor
    public function __construct($idProduct = '', $name = '', $brand = '', $price = '')
    {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // Setter dan getter
    public function setIdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    public function getIdProduct()
    {
        return $this->idProduct;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    public function getName()
    {
        return $this->name;
    }

    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getPrice()
    {
        return $this->price;
    }
}
?>