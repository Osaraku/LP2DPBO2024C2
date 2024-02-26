# Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
# dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin

class Product:
    # atribut
    __idProduct = ""
    __name = ""
    __brand = ""
    __price = ""
    
    # constructor
    def __init__(self, idProduct, name, brand, price):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    # setter
    def set_idProduct(self, idProduct):
        self.__idProduct = idProduct

    def set_name(self, name):
        self.__name = name

    def set_brand(self, brand):
        self.__brand = brand

    def set_price(self, price):
        self.__price = price

    # getter
    def get_idProduct(self):
        return self.__idProduct

    def get_name(self):
        return self.__name

    def get_brand(self):
        return self.__brand

    def get_price(self):
        return self.__price


