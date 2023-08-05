gravitasi = 10

def main ():
    pilihan = 0
    massa = 0
    ketinggian = 0
    energi_potensial = 0

    print ("========== Penghitung Energi Potensial ==========")

    while True:
        print ("1. Mencari energi potensial")
        print ("2. Mencari massa")
        print ("3. Mencari ketinggian")
        print ("4. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            energi_potensial = hasil_energi_potensial ()
            print (f"Energi potensial: {energi_potensial} Joule")
            break
        elif pilihan == 2:
            massa = hasil_massa ()
            print (f"Massa: {massa} kg")
            break
        elif pilihan == 3:
            ketinggian = hasil_ketinggian ()
            print (f"Ketinggian: {ketinggian} m")
            break
        elif pilihan == 4:
            print ("Terima kasih telah menggunakan program ini")
            break
        else:
            print ("Input error")

def hasil_energi_potensial ():
    massa = float (input( "Masukkan massa (satuan kg): "))
    ketinggian = float (input ("Masukkan ketinggian (satuan m): "))
    return massa * gravitasi * ketinggian

def hasil_massa ():
    energi_potensial = float (input ("Masukkan energi potensial (satuan Joule): "))
    ketinggian = float (input ("Masukkan ketinggian (satuan m): "))
    return energi_potensial / (gravitasi * ketinggian)

def hasil_ketinggian ():
    energi_potensial = float (input ("Masukkan energi potensial (satuan Joule): "))
    massa = float (input ("Masukkan massa (satuan kg): "))
    return energi_potensial / (massa * gravitasi)

if __name__ == "__main__":
    main ()