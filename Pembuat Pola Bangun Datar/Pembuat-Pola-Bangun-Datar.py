def main ():
    while True:
        print ("========== Pembuat Pola Bangun Datar ==========")
        print ("1. Persegi")
        print ("2. Persegi panjang")
        print ("3. Segitiga")
        print ("4. Jajar genjang")
        print ("5. Trapesium")
        print ("6. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            persegi ()
        elif pilihan == 2:
            persegi_panjang ()
        elif pilihan == 3:
            segitiga ()
        elif pilihan == 4:
            jajar_genjang ()
        elif pilihan == 5:
            trapesium ()
        elif pilihan == 6:
            print ("Terima kasih telah menggunakan program ini!")
        elif pilihan == 7:
            print ("Input error")

def persegi ():
    sisi = int (input ("Masukkan panjang sisi: "))
    for i in range (sisi):
        for j in range (sisi):
            print ("*", end = " ")
        print ()

def persegi_panjang ():
    panjang = int (input ("Masukkan sisi panjang: "))
    lebar = int (input ("Masukkan sisi lebar: "))
    for i in range (lebar):
        for j in range (panjang):
            print ("*", end = " ")
        print ()

def segitiga ():
    while True:
        print ("========== Pembuat Pola Segitiga ==========")
        print ("1. Segitiga siku-siku pola 1")
        print ("2. Segitiga siku-siku pola 1 (terbalik)")
        print ("3. Segitiga siku-siku pola 2")
        print ("4. Segitiga siku-siku pola 2 (terbalik)")
        print ("5. Segitiga sama kaki")
        print ("6. Kembali")
        print ("7. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            segitiga_siku_siku_pola1 ()
        elif pilihan == 2:
            segitiga_siku_siku_pola1_terbalik ()
        elif pilihan == 3:
            segitiga_siku_siku_pola2 ()
        elif pilihan == 4:
            segitiga_siku_siku_pola2_terbalik ()
        elif pilihan == 5:
            segitiga_sama_kaki ()
        elif pilihan == 6:
            main ()
        elif pilihan == 7:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def segitiga_siku_siku_pola1 ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    for i in range (tinggi):
        for j in range (i + 1):
            print ("*", end = " ")
        print ()

def segitiga_siku_siku_pola1_terbalik ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    for i in range (tinggi + 1):
        for j in range (tinggi - i):
            print ("*", end = " ")
        print ()
        if (i == tinggi - 1):
            break

def segitiga_siku_siku_pola2 ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    for i in range (tinggi):
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (i + 1):
            print ("*", end = "")
        print ()

def segitiga_siku_siku_pola2_terbalik ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    for i in range (tinggi + 1):
        for j in range (i):
            print (" ", end = "")
        for k in range (tinggi - i):
            print ("*", end = "")
        print ()
        if (i == tinggi - 1):
            break

def segitiga_sama_kaki ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    for i in range (1, tinggi + 1):
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (2 * i - 1):
            print ("*", end = "")
        print ()

def jajar_genjang ():
    alas = int (input ("Masukkan panjang alas: "))
    tinggi = int (input ("Masukkan tinggi: "))
    for i in range (tinggi):
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (alas):
            print ("*", end = " ")
        print ()

def trapesium ():
    tinggi = int (input ("Masukkan tinggi: "))

    for i in range (tinggi):
        # segitiga 1
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (i):
            print ("*", end = "")
        # isi bagian tengah (biar gk jadi segitiga sama kaki)
        for j in range (tinggi * 2):
            print ("*", end = "")
        # segitiga 2
        for k in range (i):
            print ("*", end = "")
        print ()

if __name__ == "__main__":
    main ()