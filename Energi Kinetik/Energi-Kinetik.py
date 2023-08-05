import math

def main():
    pilihan = 0
    massa = 0
    kecepatan = 0
    energi_kinetik = 0

    print ("========== Penghitung Energi Kinetik ==========")

    while True:
        print ("1. Mencari energi kinetik")
        print ("2. Mencari massa")
        print ("3. Mencari kecepatan")
        print ("4. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            energi_kinetik = hasil_energi_kinetik ()
            print (f"Energi kinetik: {energi_kinetik} Joule")
            break
        elif pilihan == 2:
            massa = hasil_massa ()
            print (f"Massa: {massa} kg")
            break
        elif pilihan == 3:
            kecepatan = hasil_kecepatan ()
            print (f"Kecepatan: {kecepatan} m/s")
            break
        elif pilihan == 4:
            print ("Terima kasih telah menggunakan program ini")
            break
        else:
            print("Input error")

def hasil_energi_kinetik ():
    massa = float (input ("Masukkan massa (satuan kg): "))
    kecepatan = float (input ("Masukkan kecepatan (satuan m/s): "))
    return 0.5 * massa * kecepatan ** 2

def hasil_massa ():
    energi_kinetik = float (input ("Masukkan energi kinetik (satuan Joule): "))
    kecepatan = float (input ("Masukkan kecepatan (satuan m/s): "))
    return (2 * energi_kinetik) / kecepatan ** 2

def hasil_kecepatan ():
    energi_kinetik = float (input ("Masukkan energi kinetik (satuan Joule): "))
    massa = float (input ("Masukkan massa (satuan kg): "))
    return math.sqrt ((2 * energi_kinetik) / massa)

if __name__ == "__main__":
    main ()