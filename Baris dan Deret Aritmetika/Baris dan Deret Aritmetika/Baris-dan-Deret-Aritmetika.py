def main ():
    a, b, u1, u2, u3 = 0, 0, 0, 0, 0
    while True:
        print ("========== Baris dan Deret Aritmetika ==========")
        print ("1. Baris")
        print ("2. Deret")
        print ("3. Keluar")
        pilihan = (int (input("Pilih salah satu: ")))
        if pilihan == 1:
            baris (a, b, u1, u2, u3)
        elif pilihan == 2:
            deret ()
        elif pilihan == 3:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def baris (a, b, u1, u2, u3):
    while True:
        print ("==============================")
        print ("1. Suku ke-n")
        print ("2. Beda (selisih)")
        print ("3. Suku tengah")
        print ("4. Kembali")
        print ("5. Keluar")
        print ("==============================")
        pilihan = int (input ("Pilih salah satu: "))
        if pilihan == 1:
            suku_ke_n (a, b)
        elif pilihan == 2:
            beda (u1, u2, u3, b)
        elif pilihan == 3:
            suku_tengah (a)
        elif pilihan == 4:
            main ()
        elif pilihan == 5:
            print ("Terima kasih telah menggunakan program ini")
        else:
            print ("Input error")

def suku_ke_n (a, b):
    # a + (n - 1) x b
    a = int (input ("Masukkan suku pertama: "))
    n = int (input ("Masukkan suku yang dicari: "))
    b = int (input ("Masukkan beda (selisih): "))
    print (f"Suku ke {n} = {a + (n - 1) * b}")

def beda ():
    while True:
        print ("===== Mencari Beda (Selisih) =====")
        print ("1. Beda (selisih) statis")
        print ("2. Beda (selisih) bertahap")
        print ("3. Kembali")
        print ("4. Keluar")
        print ("Pilih salah satu: ")
        pilihan = int (input ("Pilih salah satu: "))
        if pilihan == 1:
            # b = U2 - U1
            u1 = int (input ("Masukkan nilai suku pertama: "))
            u2 = int (input ("Masukkan nilai suku kedua: "))
            print (f"Beda (selisih) = {u2 - u1}")
        elif pilihan == 2:
            # b = (U3 - U2) - (U2 - U1)
            u1 = int (input ("Masukkan nilai suku pertama: "))
            u2 = int (input ("Masukkan nilai suku kedua: "))
            u3 = int (input ("Masukkan nilai suku ketiga: "))
            print (f"Nilai suku pertama                                : {u1}")
            print (f"Nilai suku kedua                                  : {u2}")
            print (f"Nilai suku ketiga                                 : {u3}")
            print (f"Beda (selisih) suku pertama & suku kedua          : {u2 - u1}")
            print (f"Beda (selisih) suku kedua & suku ketiga           : {u3 - u2}")
            b = (u3 - u2) - (u2 - u1)
            print (f"Hasil                                             : {b}")
        elif pilihan == 3:
            main ()
        elif pilihan == 4:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def suku_tengah (a):
    while True:
        print ("===== Mencari Suku Tengah =====")
        print ("1. Nilai suku tengah")
        print ("2. Nilai urutan suku tengah")
        print ("3. Kembali")
        print ("4. Keluar")
        pilihan = int (input ("Pilih salah satu: "))
        if pilihan == 1:
            # suku tengah = (suku pertama - suku terakhir) / 2
            a = int (input ("Masukkan nilai suku pertama: "))
            un = int (input ("Masukkan nilai suku terakhir: "))
            print (f"Nilai suku tengah: {(a + un) / 2}")
        elif pilihan == 2:
            # urutan suku tengah = (banyaknya suku + 1) / 2
            n = int (input ("Masukkan banyaknya suku: "))
            print (f"Nilai urutan suku tengah: {(n + 1) / 2}")
        elif pilihan == 3:
            main ()
        elif pilihan == 4:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def deret ():
    # n / 2 x (2 x a + (n - 1) x b)
    n = int (input ("Masukkan banyak suku: "))
    a = int (input ("Masukkan nilai suku pertama: "))
    b = int (input ("Masukkan beda (selisih): "))
    print (f"Jumlah suku pertama = {n / 2 * (2 * a + (n - 1) * b)}")

if __name__ == "__main__":
    main ()