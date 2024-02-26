# Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
# dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin

from Product import Product 

class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ""

    #constructor
    def __init__(self, idProduct, name, brand, price, size, material, gender):
        super().__init__(idProduct, name, brand, price)
        self.__size = size
        self.__material = material
        self.__gender = gender

    # setter
    def set_size(self, size):
        self.__size = size

    def set_material(self, material):
        self.__material = material

    def set_gender(self, gender):
        self.__gender = gender

    # getter
    def get_size(self):
        return self.__size

    def get_material(self):
        return self.__material

    def get_gender(self):
        return self.__gender