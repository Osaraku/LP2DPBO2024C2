<?php

/*
Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

require('Clothing.php');

class Shirt extends Clothing
{
    private $color = '';
    private $sleeve_type = '';

    // Constructor
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color, $sleeve_type)
    {
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // Setter dan getter
    public function setColor($color)
    {
        $this->color = $color;
    }

    public function getColor()
    {
        return $this->color;
    }

    public function setSleeveType($sleeve_type)
    {
        $this->sleeve_type = $sleeve_type;
    }

    public function getSleeveType()
    {
        return $this->sleeve_type;
    }
}
?>