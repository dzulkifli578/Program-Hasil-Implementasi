import sys

class ShoppingList:
    def __init__(self):
        self.index = -1
        self.NamaBarang = []
        self.JumlahBarang = []

    def AddShoppingList(self):
        print('Masukkan Nama Barang : ', end='')
        NamaBarang = input()
        self.NamaBarang.append(NamaBarang)

        print('Masukkan Jumlah Barang : ', end='')
        JumlahBarang = int(input())
        self.JumlahBarang.append(JumlahBarang)

        self.index += 1

    def SeeShoppingList(self):
        for i in range(len(self.NamaBarang)):
            print(f'{i + 1}. {self.NamaBarang[i]} ({self.JumlahBarang[i]})')

    def EditShoppingList(self):
        print('Masukkan ID Barang yang ingin diubah : ', end='')
        IDBarang = int(input())

        if IDBarang > self.index or IDBarang < 0:
            print('ID tidak ditemukan')
            return

        print('Masukkan Nama Barang baru : ', end='')
        NamaBarangBaru = input()

        print('Masukkan Jumlah Barang baru : ', end='')
        JumlahBarangBaru = int(input())

        self.NamaBarang[IDBarang] = NamaBarangBaru
        self.JumlahBarang[IDBarang] = JumlahBarangBaru

    def DeleteShoppingList(self):
        print('Masukkan ID Barang yang ingin dihapus : ', end='')
        IDBarang = int(input())

        if IDBarang > self.index or IDBarang < 0:
            print('ID tidak ditemukan')
            return

        self.NamaBarang.pop(IDBarang)
        self.JumlahBarang.pop(IDBarang)

if __name__ == '__main__':
    shoppingList = ShoppingList()

    while True:
        print('==============================')
        print('Aplikasi Daftar belanja')
        print('==============================')
        print('1. Tambah barang ke daftar belanja')
        print('2. Lihat daftar belanja')
        print('3. Edit daftar belanja')
        print('4. Hapus daftar belanja')
        print('5. Keluar')
        print('==============================')
        input_choice = input()

        if input_choice == '1':
            shoppingList.AddShoppingList()
        elif input_choice == '2':
            shoppingList.SeeShoppingList()
        elif input_choice == '3':
            shoppingList.EditShoppingList()
        elif input_choice == '4':
            shoppingList.DeleteShoppingList()
        elif input_choice == '5':
            print('Terima kasih!')
            break
        else:
            print('Input tidak valid')
