# Saya Muhamad Tio Ariyanto [2201718] mengerjakan soal Latihan Praktikum 2
# dalam mata kuliah DPBO untuk keberkahanNya saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin

class Tabel:
    # Atribut
    __baris = 0
    __kolom = 0

    # Constructor
    def __init__(self, baris=0, kolom=0):
        self.__baris = baris
        self.__kolom = kolom

    def setBaris(self, baris):
        self.__baris = baris

    def setKolom(self, kolom):
        self.__kolom = kolom

    def getBaris(self):
        return self.___baris

    def getKolom(self):
        return self.__kolom

    def buatBaris(self, kolom, isi):
        max = [0] * kolom
        for i in range(kolom):
            for j in range(len(isi)):
                if len(isi[j][i]) > max[i]:
                    max[i] = len(isi[j][i])
        
        for i in range(len(isi)):
            for j in range(kolom):
                for k in range(max[j]):
                    print("=", end="")
                print("==", end="")
            print("=========")
            for j in range(kolom):
                print("|" + isi[i][j], end="")
                for k in range(max[j] - len(isi[i][j])):
                    print(" ", end="")
                print("  ", end="")
            print("|")
        for j in range(kolom):
            for k in range(max[j]):
                print("=", end="")
            print("==", end="")
        print("=========")