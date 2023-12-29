import datetime

class Pembeli:
    def __init__ (self):
        self.nama = ""
        self.tunai = 0
class Produk:
    def __init__ (self):
        self.nama = ""
        self.unit = 0
        self.harga = 0

def main ():
    pesanan = [0]
    pembeli = Pembeli ()
    daftar_produk = []

    print ("----------------------------------------")
    pembeli.nama = input ("Masukkan nama pembeli     : ")
    pesanan [0] = int (input ("Masukkan jumlah pesanan   : "))

    for _ in range (pesanan [0]):
        daftar_produk.append (Produk ())

    input_data (pesanan, pembeli, daftar_produk)
    struk (pesanan, pembeli, daftar_produk)

def input_data (pesanan, pembeli, daftar_produk):
    print ("----------------------------------------")
    for i in range (pesanan [0]):
        daftar_produk [i].nama = input ("Masukkan nama produk      : ")
        daftar_produk [i].harga = float (input ("Masukkan harga produk     : Rp"))
        daftar_produk [i].unit = int (input ("Masukkan unit produk      : "))
        print ("----------------------------------------")
    pembeli.tunai = float (input ("Masukkan tunai pembeli    : Rp"))

def struk (pesanan, pembeli, daftar_produk):
    total_keseluruhan = 0
    now = datetime.datetime.now ()

    print ("----------------------------------------")
    print ("           Jeweler's Pagoda")
    print ("        Central Starskiff Haven")
    print ("----------------------------------------")
    print (f"Waktu                     : {now.strftime ('%Y-%m-%d %H:%M:%S')}")
    print ("----------------------------------------")
    print (f"Pembeli                   : {pembeli.nama}")

    for i in range (pesanan [0]):
        print (f"Nama produk               : {daftar_produk [i].nama}")
        print (f"Harga produk              : Rp{daftar_produk [i].harga:.2f}")
        print (f"Unit produk yang dibeli   : {daftar_produk [i].unit}")
        print ("----------------------------------------")

    for i in range (pesanan [0]):
        total = daftar_produk [i].harga * daftar_produk [i].unit
        total_keseluruhan += total

    print (f"Total                     : Rp{total_keseluruhan:.2f}")
    print (f"Tunai                     : Rp{pembeli.tunai:.2f}")
    print (f"Kembali                   : Rp{pembeli.tunai - total_keseluruhan:.2f}")
    print ("----------------------------------------")
    print ("              Customer Care")
    print ("           SMS 0826-0420-2310")
    print ("----------------------------------------")

if __name__ == "__main__":
    main()